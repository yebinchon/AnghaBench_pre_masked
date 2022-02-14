
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*,char*,int *) ;
 int FUNC_4 (int *,struct merge_index_entry*,int) ;
 int VAR_1 ;

void FUNC_5(void)
{
 git_index *VAR_2;
 git_merge_options VAR_3 = VAR_0;

 struct merge_index_entry VAR_4[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "fa567f568ed72157c0c617438d077695b99d9aac", 1, "veal.txt" },
  { 0100644, "21950d5e4e4d1a871b4dfcf72ecb6b9c162c434e", 2, "veal.txt" },
  { 0100644, "3855170cef875708da06ab9ad7fc6a73b531cda1", 3, "veal.txt" },
 };

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "branchF-1", "branchF-2", &VAR_3));

 FUNC_0(FUNC_4(VAR_2, VAR_4, 8));

 FUNC_2(VAR_2);
}
