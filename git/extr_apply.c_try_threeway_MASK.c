
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int dummy; } ;
struct patch {char* new_name; char* old_name; int conflicted_threeway; int * threeway_stage; scalar_t__ is_new; int old_mode; int old_oid_prefix; int new_mode; scalar_t__ is_delete; } ;
struct object_id {int dummy; } ;
struct image {char* buf; int len; } ;
struct cache_entry {int dummy; } ;
struct apply_state {scalar_t__ apply_verbosity; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct apply_state*,struct image*,struct patch*) ;
 int VAR_1 ;
 int FUNC_3 (struct image*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (int ,struct object_id*) ;
 scalar_t__ FUNC_7 (struct apply_state*,struct image*,struct patch*) ;
 scalar_t__ FUNC_8 (struct apply_state*,struct image*,struct patch*,struct stat*,struct cache_entry const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct object_id*) ;
 int FUNC_11 (struct image*,char*,size_t,int) ;
 scalar_t__ FUNC_12 (struct strbuf*,struct object_id*,int ) ;
 int VAR_2 ;
 char* FUNC_13 (struct strbuf*,size_t*) ;
 int FUNC_14 (struct apply_state*,struct image*,char*,struct object_id*,struct object_id*,struct object_id*) ;
 scalar_t__ VAR_3 ;
 int FUNC_15 (char*,int ,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_16(struct apply_state *VAR_4,
   struct image *VAR_5,
   struct patch *VAR_6,
   struct stat *VAR_7,
   const struct cache_entry *VAR_8)
{
 struct object_id VAR_9, VAR_10, VAR_11;
 struct strbuf VAR_12 = VAR_0;
 size_t VAR_13;
 int VAR_14;
 char *VAR_15;
 struct image VAR_16;


 if (VAR_6->is_delete ||
     FUNC_0(VAR_6->old_mode) || FUNC_0(VAR_6->new_mode))
  return -1;


 if (VAR_6->is_new)
  FUNC_15("", 0, VAR_1, &VAR_9);
 else if (FUNC_6(VAR_6->old_oid_prefix, &VAR_9) ||
   FUNC_12(&VAR_12, &VAR_9, VAR_6->old_mode))
  return FUNC_4(FUNC_1("repository lacks the necessary blob to fall back on 3-way merge."));

 if (VAR_4->apply_verbosity > VAR_3)
  FUNC_5(VAR_2, "%s", FUNC_1("Falling back to three-way merge...\n"));

 VAR_15 = FUNC_13(&VAR_12, &VAR_13);
 FUNC_11(&VAR_16, VAR_15, VAR_13, 1);

 if (FUNC_2(VAR_4, &VAR_16, VAR_6) < 0) {
  FUNC_3(&VAR_16);
  return -1;
 }

 FUNC_15(VAR_16.buf, VAR_16.len, VAR_1, &VAR_10);
 FUNC_3(&VAR_16);


 if (VAR_6->is_new) {
  if (FUNC_7(VAR_4, &VAR_16, VAR_6))
   return FUNC_4(FUNC_1("cannot read the current contents of '%s'"),
         VAR_6->new_name);
 } else {
  if (FUNC_8(VAR_4, &VAR_16, VAR_6, VAR_7, VAR_8))
   return FUNC_4(FUNC_1("cannot read the current contents of '%s'"),
         VAR_6->old_name);
 }
 FUNC_15(VAR_16.buf, VAR_16.len, VAR_1, &VAR_11);
 FUNC_3(&VAR_16);


 VAR_14 = FUNC_14(VAR_4, VAR_5, VAR_6->new_name,
     &VAR_9, &VAR_11, &VAR_10);
 if (VAR_14 < 0) {
  if (VAR_4->apply_verbosity > VAR_3)
   FUNC_5(VAR_2,
    "%s", FUNC_1("Failed to fall back on three-way merge...\n"));
  return VAR_14;
 }

 if (VAR_14) {
  VAR_6->conflicted_threeway = 1;
  if (VAR_6->is_new)
   FUNC_9(&VAR_6->threeway_stage[0]);
  else
   FUNC_10(&VAR_6->threeway_stage[0], &VAR_9);
  FUNC_10(&VAR_6->threeway_stage[1], &VAR_11);
  FUNC_10(&VAR_6->threeway_stage[2], &VAR_10);
  if (VAR_4->apply_verbosity > VAR_3)
   FUNC_5(VAR_2,
    FUNC_1("Applied patch to '%s' with conflicts.\n"),
    VAR_6->new_name);
 } else {
  if (VAR_4->apply_verbosity > VAR_3)
   FUNC_5(VAR_2,
    FUNC_1("Applied patch to '%s' cleanly.\n"),
    VAR_6->new_name);
 }
 return 0;
}
