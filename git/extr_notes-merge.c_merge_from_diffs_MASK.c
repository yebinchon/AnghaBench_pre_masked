
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_tree {scalar_t__ dirty; } ;
struct notes_merge_pair {int dummy; } ;
struct notes_merge_options {int verbosity; } ;


 int FUNC_0 (struct notes_merge_options*,struct notes_merge_pair*,int,struct object_id const*,struct object_id const*) ;
 struct notes_merge_pair* FUNC_1 (struct notes_merge_options*,struct object_id const*,struct object_id const*,int*) ;
 int FUNC_2 (struct notes_merge_pair*) ;
 int FUNC_3 (struct notes_merge_options*,struct notes_merge_pair*,int*,struct notes_tree*) ;
 int FUNC_4 (struct object_id const*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct notes_merge_options *VAR_0,
       const struct object_id *VAR_1,
       const struct object_id *VAR_2,
       const struct object_id *VAR_3,
       struct notes_tree *VAR_4)
{
 struct notes_merge_pair *VAR_5;
 int VAR_6, VAR_7;

 FUNC_6("\tmerge_from_diffs(base = %.7s, local = %.7s, "
        "remote = %.7s)\n", FUNC_4(VAR_1), FUNC_4(VAR_2),
        FUNC_4(VAR_3));

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3, &VAR_6);
 FUNC_0(VAR_0, VAR_5, VAR_6, VAR_1, VAR_2);

 VAR_7 = FUNC_3(VAR_0, VAR_5, &VAR_6, VAR_4);
 FUNC_2(VAR_5);

 if (VAR_0->verbosity >= 4)
  FUNC_5(VAR_4->dirty ?
         "Merge result: %i unmerged notes and a dirty notes tree\n" :
         "Merge result: %i unmerged notes and a clean notes tree\n",
         VAR_7);

 return VAR_7 ? -1 : 1;
}
