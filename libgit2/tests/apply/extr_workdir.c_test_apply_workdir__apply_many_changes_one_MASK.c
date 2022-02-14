
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int workdir_expected ;
struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_diff ;
typedef int git_apply_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_diff *VAR_4;
 git_apply_options VAR_5 = VAR_2;

 struct merge_index_entry VAR_6[] = {
  { 0100644, "f51658077d85f2264fa179b4d0848268cb3475c3", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "c9d7d5d58088bc91f6e06f17ca3a205091568d3a", 0, "veal.txt" },
 };
 size_t VAR_7 = sizeof(VAR_6) /
     sizeof(struct merge_index_entry);

 FUNC_0(FUNC_3(&VAR_4,
  VAR_0, FUNC_4(VAR_0)));
 FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_5));

 FUNC_6(VAR_3);
 FUNC_5(VAR_3, VAR_6, VAR_7);

 FUNC_2(VAR_4);
}
