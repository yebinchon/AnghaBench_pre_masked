
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int workdir_expected ;
struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_diff ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_diff *VAR_3;

 const char *VAR_4 = VAR_0;

 struct merge_index_entry VAR_5[] = {
  { 0100644, "5db1a0fef164cb66cc0c00d35cc5af979ddc1a64", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };
 size_t VAR_6 = sizeof(VAR_5) /
  sizeof(struct merge_index_entry);






 FUNC_0("merge-recursive/asparagus.txt",
     "This line is added in the workdir.\n");

 FUNC_1(FUNC_4(&VAR_3, VAR_4, FUNC_5(VAR_4)));
 FUNC_1(FUNC_2(VAR_2, VAR_3, VAR_1, ((void*)0)));

 FUNC_7(VAR_2);
 FUNC_6(VAR_2, VAR_5, VAR_6);

 FUNC_3(VAR_3);
}
