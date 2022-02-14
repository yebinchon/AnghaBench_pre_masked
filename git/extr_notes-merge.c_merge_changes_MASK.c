
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_tree {int dummy; } ;
struct notes_merge_pair {int remote; int obj; int base; int local; } ;
struct notes_merge_options {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct notes_tree*,int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct notes_merge_options*,struct notes_merge_pair*,struct notes_tree*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct notes_merge_options *VAR_2,
    struct notes_merge_pair *VAR_3, int *VAR_4,
    struct notes_tree *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 FUNC_5("\tmerge_changes(num_changes = %i)\n", *VAR_4);
 for (VAR_6 = 0; VAR_6 < *VAR_4; VAR_6++) {
  struct notes_merge_pair *VAR_8 = VAR_3 + VAR_6;
  FUNC_5("\t\t%.7s: %.7s -> %.7s/%.7s\n",
         FUNC_3(&VAR_8->obj), FUNC_3(&VAR_8->base),
         FUNC_3(&VAR_8->local),
         FUNC_3(&VAR_8->remote));

  if (FUNC_4(&VAR_8->base, &VAR_8->remote)) {

   FUNC_5("\t\t\tskipping (no remote change)\n");
  } else if (FUNC_4(&VAR_8->local, &VAR_8->remote)) {

   FUNC_5("\t\t\tskipping (local == remote)\n");
  } else if (FUNC_4(&VAR_8->local, &VAR_1) ||
      FUNC_4(&VAR_8->local, &VAR_8->base)) {

   FUNC_5("\t\t\tno local change, adopted remote\n");
   if (FUNC_1(VAR_5, &VAR_8->obj, &VAR_8->remote,
         VAR_0))
    FUNC_0("combine_notes_overwrite failed");
  } else {

   FUNC_5("\t\t\tneed content-level merge\n");
   VAR_7 += FUNC_2(VAR_2, VAR_8, VAR_5);
  }
 }

 return VAR_7;
}
