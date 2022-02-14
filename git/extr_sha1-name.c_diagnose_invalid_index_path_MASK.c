
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; unsigned int len; } ;
struct repository {struct index_state* index; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int name; } ;


 struct strbuf STRBUF_INIT ;
 unsigned int ce_namelen (struct cache_entry const*) ;
 int ce_stage (struct cache_entry const*) ;
 int die (char*,char const*,...) ;
 int errno ;
 int index_name_pos (struct index_state*,char const*,unsigned int) ;
 scalar_t__ is_missing_file_error (int ) ;
 int memcmp (int ,char const*,unsigned int) ;
 scalar_t__ repo_file_exists (struct repository*,char const*) ;
 int strbuf_addstr (struct strbuf*,char const*) ;
 int strbuf_release (struct strbuf*) ;
 unsigned int strlen (char const*) ;

__attribute__((used)) static void diagnose_invalid_index_path(struct repository *r,
     int stage,
     const char *prefix,
     const char *filename)
{
 struct index_state *istate = r->index;
 const struct cache_entry *ce;
 int pos;
 unsigned namelen = strlen(filename);
 struct strbuf fullname = STRBUF_INIT;

 if (!prefix)
  prefix = "";


 pos = index_name_pos(istate, filename, namelen);
 if (pos < 0)
  pos = -pos - 1;
 if (pos < istate->cache_nr) {
  ce = istate->cache[pos];
  if (ce_namelen(ce) == namelen &&
      !memcmp(ce->name, filename, namelen))
   die("Path '%s' is in the index, but not at stage %d.\n"
       "Did you mean ':%d:%s'?",
       filename, stage,
       ce_stage(ce), filename);
 }


 strbuf_addstr(&fullname, prefix);
 strbuf_addstr(&fullname, filename);
 pos = index_name_pos(istate, fullname.buf, fullname.len);
 if (pos < 0)
  pos = -pos - 1;
 if (pos < istate->cache_nr) {
  ce = istate->cache[pos];
  if (ce_namelen(ce) == fullname.len &&
      !memcmp(ce->name, fullname.buf, fullname.len))
   die("Path '%s' is in the index, but not '%s'.\n"
       "Did you mean ':%d:%s' aka ':%d:./%s'?",
       fullname.buf, filename,
       ce_stage(ce), fullname.buf,
       ce_stage(ce), filename);
 }

 if (repo_file_exists(r, filename))
  die("Path '%s' exists on disk, but not in the index.", filename);
 if (is_missing_file_error(errno))
  die("Path '%s' does not exist (neither on disk nor in the index).",
      filename);

 strbuf_release(&fullname);
}
