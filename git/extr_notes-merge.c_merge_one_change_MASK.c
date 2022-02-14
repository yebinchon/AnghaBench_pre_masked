
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_tree {int dummy; } ;
struct notes_merge_pair {int remote; int obj; } ;
struct notes_merge_options {int strategy; int verbosity; } ;


 int FUNC_0 (char*) ;





 int FUNC_1 (struct notes_tree*,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct notes_merge_options*,struct notes_merge_pair*,struct notes_tree*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct notes_merge_options *VAR_3,
       struct notes_merge_pair *VAR_4, struct notes_tree *VAR_5)
{





 switch (VAR_3->strategy) {
 case 131:
  return FUNC_3(VAR_3, VAR_4, VAR_5);
 case 130:
  if (VAR_3->verbosity >= 2)
   FUNC_5("Using local notes for %s\n",
      FUNC_4(&VAR_4->obj));

  return 0;
 case 129:
  if (VAR_3->verbosity >= 2)
   FUNC_5("Using remote notes for %s\n",
      FUNC_4(&VAR_4->obj));
  if (FUNC_1(VAR_5, &VAR_4->obj, &VAR_4->remote, VAR_2))
   FUNC_0("combine_notes_overwrite failed");
  return 0;
 case 128:
  if (VAR_3->verbosity >= 2)
   FUNC_5("Concatenating local and remote notes for %s\n",
       FUNC_4(&VAR_4->obj));
  if (FUNC_1(VAR_5, &VAR_4->obj, &VAR_4->remote, VAR_1))
   FUNC_2("failed to concatenate notes "
       "(combine_notes_concatenate)");
  return 0;
 case 132:
  if (VAR_3->verbosity >= 2)
   FUNC_5("Concatenating unique lines in local and remote "
    "notes for %s\n", FUNC_4(&VAR_4->obj));
  if (FUNC_1(VAR_5, &VAR_4->obj, &VAR_4->remote, VAR_0))
   FUNC_2("failed to concatenate notes "
       "(combine_notes_cat_sort_uniq)");
  return 0;
 }
 FUNC_2("Unknown strategy (%i).", VAR_3->strategy);
}
