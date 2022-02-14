
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct rev_name {char const* tip_name; int generation; } ;
struct object {scalar_t__ type; } ;
struct commit {int dummy; } ;


 scalar_t__ OBJ_COMMIT ;
 struct rev_name* get_commit_rev_name (struct commit*) ;
 char const* get_exact_ref_match (struct object const*) ;
 int strbuf_addf (struct strbuf*,char*,int,char const*,int ) ;
 int strbuf_reset (struct strbuf*) ;
 int strcmp (scalar_t__,char*) ;
 int strlen (char const*) ;

__attribute__((used)) static const char *get_rev_name(const struct object *o, struct strbuf *buf)
{
 struct rev_name *n;
 struct commit *c;

 if (o->type != OBJ_COMMIT)
  return get_exact_ref_match(o);
 c = (struct commit *) o;
 n = get_commit_rev_name(c);
 if (!n)
  return ((void*)0);

 if (!n->generation)
  return n->tip_name;
 else {
  int len = strlen(n->tip_name);
  if (len > 2 && !strcmp(n->tip_name + len - 2, "^0"))
   len -= 2;
  strbuf_reset(buf);
  strbuf_addf(buf, "%.*s~%d", len, n->tip_name, n->generation);
  return buf->buf;
 }
}
