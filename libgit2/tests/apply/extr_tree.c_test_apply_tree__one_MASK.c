
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_tree ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct merge_index_entry*,int) ;
 int VAR_1 ;

void FUNC_11(void)
{
 git_oid VAR_2, VAR_3;
 git_commit *VAR_4, *VAR_5;
 git_tree *VAR_6, *VAR_7;
 git_diff *VAR_8;
 git_index *VAR_9 = ((void*)0);
 git_diff_options VAR_10 = VAR_0;

 struct merge_index_entry VAR_11[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };

 FUNC_8(&VAR_2, "539bd011c4822c560c1d17cab095006b7a10f707");
 FUNC_8(&VAR_3, "7c7bf85e978f1d18c0566f702d2cb7766b9c8d4f");

 FUNC_0(FUNC_3(&VAR_4, VAR_1, &VAR_2));
 FUNC_0(FUNC_3(&VAR_5, VAR_1, &VAR_3));

 FUNC_0(FUNC_4(&VAR_6, VAR_4));
 FUNC_0(FUNC_4(&VAR_7, VAR_5));

 FUNC_0(FUNC_6(&VAR_8, VAR_1, VAR_6, VAR_7, &VAR_10));

 FUNC_0(FUNC_1(&VAR_9, VAR_1, VAR_6, VAR_8, ((void*)0)));
 FUNC_10(VAR_9, VAR_11, 6);

 FUNC_7(VAR_9);
 FUNC_5(VAR_8);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
}
