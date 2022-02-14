
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
struct TYPE_5__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index_conflict_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *) ;

void FUNC_14(void)
{
 git_oid VAR_2;
 git_tree *VAR_3;
 git_index *VAR_4, *VAR_5;
 git_index_conflict_iterator *VAR_6;
 const git_index_entry *VAR_7, *VAR_8, *VAR_9;

 FUNC_3(FUNC_11(&VAR_2, "ae90f12eea699729ed24555e40b9fd669da12a12"));
 FUNC_3(FUNC_13(&VAR_3, VAR_1, &VAR_2));
 FUNC_3(FUNC_8(&VAR_4));
 FUNC_3(FUNC_8(&VAR_5));
 FUNC_3(FUNC_10(VAR_4, VAR_3));
 FUNC_3(FUNC_10(VAR_5, VAR_3));


 FUNC_0(VAR_4, "orig_side-1.txt");
 FUNC_0(VAR_4, "orig_side-2.txt");


 FUNC_0(VAR_4, "both_sides-1.txt");
 FUNC_0(VAR_5, "both_sides-1.txt");
 FUNC_0(VAR_4, "both_sides-2.txt");
 FUNC_0(VAR_5, "both_sides-2.txt");


 FUNC_0(VAR_5, "new_side-1.txt");
 FUNC_0(VAR_5, "new_side-2.txt");

 FUNC_3(FUNC_9(VAR_4, VAR_5));
 FUNC_3(FUNC_5(&VAR_6, VAR_4));

 FUNC_3(FUNC_6(
  &VAR_7, &VAR_8, &VAR_9, VAR_6));
 FUNC_1("both_sides-1.txt", VAR_7->path);
 FUNC_1("both_sides-1.txt", VAR_8->path);
 FUNC_1("both_sides-1.txt", VAR_9->path);

 FUNC_3(FUNC_6(
  &VAR_7, &VAR_8, &VAR_9, VAR_6));
 FUNC_1("both_sides-2.txt", VAR_7->path);
 FUNC_1("both_sides-2.txt", VAR_8->path);
 FUNC_1("both_sides-2.txt", VAR_9->path);

 FUNC_3(FUNC_6(
  &VAR_7, &VAR_8, &VAR_9, VAR_6));
 FUNC_1("new_side-1.txt", VAR_7->path);
 FUNC_1("new_side-1.txt", VAR_8->path);
 FUNC_1("new_side-1.txt", VAR_9->path);

 FUNC_3(FUNC_6(
  &VAR_7, &VAR_8, &VAR_9, VAR_6));
 FUNC_1("new_side-2.txt", VAR_7->path);
 FUNC_1("new_side-2.txt", VAR_8->path);
 FUNC_1("new_side-2.txt", VAR_9->path);


 FUNC_2(VAR_0, FUNC_6(
  &VAR_7, &VAR_8, &VAR_9, VAR_6));

 FUNC_4(VAR_6);

 FUNC_12(VAR_3);
 FUNC_7(VAR_5);
 FUNC_7(VAR_4);
}
