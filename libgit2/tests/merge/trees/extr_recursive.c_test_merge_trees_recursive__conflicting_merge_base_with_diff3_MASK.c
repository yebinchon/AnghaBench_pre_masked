
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
struct TYPE_4__ {int file_flags; } ;
typedef TYPE_1__ git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*,char*,TYPE_1__*) ;
 int FUNC_4 (int *,struct merge_index_entry*,int) ;
 int VAR_2 ;

void FUNC_5(void)
{
 git_index *VAR_3;
 git_merge_options VAR_4 = VAR_1;

 struct merge_index_entry VAR_5[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "0b01d2f70a1c6b9ab60c382f3f9cdc8173da6736", 1, "veal.txt" },
  { 0100644, "37a5054a9f9b4628e3924c5cb8f2147c6e2a3efc", 2, "veal.txt" },
  { 0100644, "d604c75019c282144bdbbf3fd3462ba74b240efc", 3, "veal.txt" },
 };

 VAR_4.file_flags |= VAR_0;

 FUNC_1(FUNC_3(&VAR_3, VAR_2, "branchH-2", "branchH-1", &VAR_4));

 FUNC_0(FUNC_4(VAR_3, VAR_5, 8));

 FUNC_2(VAR_3);
}
