
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_8(void)
{
 git_commit *VAR_3, *VAR_4;
 git_oid VAR_5, VAR_6;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "296a6d3be1dff05c5d1f631d2459389fa7b619eb", 0, "file-mainline.txt" },
 };

 FUNC_4(&VAR_5, "39467716290f6df775a91cdb9a4eb39295018145");
 FUNC_1(FUNC_3(&VAR_3, VAR_1, &VAR_5));
 FUNC_1(FUNC_5(VAR_1, (git_object *)VAR_3, VAR_0, ((void*)0)));

 FUNC_4(&VAR_6, "ebb03002cee5d66c7732dd06241119fe72ab96a5");
 FUNC_1(FUNC_3(&VAR_4, VAR_1, &VAR_6));
 FUNC_1(FUNC_6(VAR_1, VAR_4, ((void*)0)));

 FUNC_0(FUNC_7(VAR_2, VAR_7, 1));

 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
}
