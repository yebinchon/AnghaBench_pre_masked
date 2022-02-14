
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
struct TYPE_4__ {int flags; } ;
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
  { 0100644, "9e12bce04446d097ae1782967a5888c2e2a0d35b", 1, "gravy.txt" },
  { 0100644, "d8dd349b78f19a4ebe3357bacb8138f00bf5ed41", 2, "gravy.txt" },
  { 0100644, "e50fbbd701458757bdfe9815f58ed717c588d1b5", 3, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };

 VAR_4.flags |= VAR_0;

 FUNC_1(FUNC_3(&VAR_3, VAR_2, "branchE-1", "branchE-2", &VAR_4));

 FUNC_0(FUNC_4(VAR_3, VAR_5, 8));

 FUNC_2(VAR_3);
}
