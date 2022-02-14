
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {char* old_name; char* new_name; scalar_t__ is_new; int old_mode; int lines_deleted; int lines_added; int old_oid_prefix; struct patch* next; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct index_state {int * member_0; } ;
struct cache_entry {int dummy; } ;
struct apply_state {char const* fake_ancestor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lock_file VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct index_state*,struct cache_entry*,int ) ;
 int FUNC_3 (struct cache_entry*) ;
 int FUNC_4 (struct index_state*) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (struct apply_state*,char*,struct object_id*) ;
 int FUNC_7 (int ,struct object_id*) ;
 int FUNC_8 (struct lock_file*,char const*,int ) ;
 struct cache_entry* FUNC_9 (struct index_state*,int ,struct object_id*,char const*,int ,int ) ;
 int FUNC_10 (struct patch*,struct object_id*) ;
 int FUNC_11 (struct index_state*,struct lock_file*,int ) ;

__attribute__((used)) static int FUNC_12(struct apply_state *VAR_4, struct patch *VAR_5)
{
 struct patch *VAR_6;
 struct index_state VAR_7 = { ((void*)0) };
 struct lock_file VAR_8 = VAR_3;
 int VAR_9;




 for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_6->next) {
  struct object_id VAR_10;
  struct cache_entry *VAR_11;
  const char *VAR_12;

  VAR_12 = VAR_6->old_name ? VAR_6->old_name : VAR_6->new_name;
  if (0 < VAR_6->is_new)
   continue;

  if (FUNC_0(VAR_6->old_mode)) {
   if (!FUNC_10(VAR_6, &VAR_10))
    ;
   else
    return FUNC_5(FUNC_1("sha1 information is lacking or "
            "useless for submodule %s"), VAR_12);
  } else if (!FUNC_7(VAR_6->old_oid_prefix, &VAR_10)) {
   ;
  } else if (!VAR_6->lines_added && !VAR_6->lines_deleted) {

   if (FUNC_6(VAR_4, VAR_6->old_name, &VAR_10))
    return FUNC_5(FUNC_1("mode change for %s, which is not "
            "in current HEAD"), VAR_12);
  } else
   return FUNC_5(FUNC_1("sha1 information is lacking or useless "
           "(%s)."), VAR_12);

  VAR_11 = FUNC_9(&VAR_7, VAR_6->old_mode, &VAR_10, VAR_12, 0, 0);
  if (!VAR_11)
   return FUNC_5(FUNC_1("make_cache_entry failed for path '%s'"),
         VAR_12);
  if (FUNC_2(&VAR_7, VAR_11, VAR_0)) {
   FUNC_3(VAR_11);
   return FUNC_5(FUNC_1("could not add %s to temporary index"),
         VAR_12);
  }
 }

 FUNC_8(&VAR_8, VAR_4->fake_ancestor, VAR_2);
 VAR_9 = FUNC_11(&VAR_7, &VAR_8, VAR_1);
 FUNC_4(&VAR_7);

 if (VAR_9)
  return FUNC_5(FUNC_1("could not write temporary index to %s"),
        VAR_4->fake_ancestor);

 return 0;
}
