
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int index_expected ;
typedef int git_index ;
typedef int git_diff ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int VAR_3 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_11 (int ) ;

void FUNC_12(void)
{
 git_diff *VAR_4;
 git_index *VAR_5;

 const char *VAR_6 = VAR_0;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "f51658077d85f2264fa179b4d0848268cb3475c3", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
 };
 size_t VAR_8 = sizeof(VAR_7) /
  sizeof(struct merge_index_entry);


 FUNC_1(FUNC_8(&VAR_5, VAR_3));
 FUNC_1(FUNC_6(VAR_5, "veal.txt", 0));
 FUNC_1(FUNC_7(VAR_5));
 FUNC_5(VAR_5);

 FUNC_1(FUNC_4(&VAR_4, VAR_6, FUNC_9(VAR_6)));
 FUNC_0(VAR_2, FUNC_2(VAR_3, VAR_4, VAR_1, ((void*)0)));

 FUNC_10(VAR_3, VAR_7, VAR_8);
 FUNC_11(VAR_3);

 FUNC_3(VAR_4);
}
