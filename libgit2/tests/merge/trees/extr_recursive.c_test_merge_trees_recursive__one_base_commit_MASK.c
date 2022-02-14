
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
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
  { 0100644, "dea7215f259b2cced87d1bda6c72f8b4ce37a2ff", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "94d2c01087f48213bd157222d54edfefd77c9bba", 0, "veal.txt" },
 };

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "branchA-1", "branchA-2", &VAR_3));

 FUNC_0(FUNC_4(VAR_2, VAR_4, 6));

 FUNC_2(VAR_2);
}
