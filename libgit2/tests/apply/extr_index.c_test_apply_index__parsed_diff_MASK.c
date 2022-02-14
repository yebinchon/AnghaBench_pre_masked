
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int index_expected ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_diff *VAR_3;

 struct merge_index_entry VAR_4[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };
 size_t VAR_5 = sizeof(VAR_4) /
  sizeof(struct merge_index_entry);

 FUNC_0(FUNC_3(&VAR_3,
  VAR_0, FUNC_4(VAR_0)));
 FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_1, ((void*)0)));

 FUNC_5(VAR_2, VAR_4, VAR_5);
 FUNC_6(VAR_2);

 FUNC_2(VAR_3);
}
