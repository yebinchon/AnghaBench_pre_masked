
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int index_expected ;
struct TYPE_4__ {int mode; char* path; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_diff ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{
 git_diff *VAR_3;
 git_index *VAR_4;
 git_index_entry VAR_5;

 const char *VAR_6 = VAR_0;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "4f2d1645dee99ced096877911de540c65ade2ef8", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };
 size_t VAR_8 = sizeof(VAR_7) /
  sizeof(struct merge_index_entry);







 FUNC_0(FUNC_8(&VAR_4, VAR_2));

 FUNC_9(&VAR_5, 0, sizeof(git_index_entry));
 VAR_5.mode = 0100644;
 VAR_5.path = "asparagus.txt";
 FUNC_0(FUNC_7(&VAR_5.id, "06d3fefb8726ab1099acc76e02dfb85e034b2538"));
 FUNC_0(FUNC_4(VAR_4, &VAR_5));

 FUNC_0(FUNC_6(VAR_4));
 FUNC_5(VAR_4);

 FUNC_0(FUNC_3(&VAR_3, VAR_6, FUNC_10(VAR_6)));
 FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_1, ((void*)0)));

 FUNC_11(VAR_2, VAR_7, VAR_8);
 FUNC_12(VAR_2);

 FUNC_2(VAR_3);
}
