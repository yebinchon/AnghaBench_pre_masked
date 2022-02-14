
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int workdir_expected ;
struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int index_expected ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_diff ;
typedef int git_commit ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const*,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_12 (int ,struct merge_index_entry*,size_t) ;

void FUNC_13(void)
{
 git_diff *VAR_4;
 git_oid VAR_5;
 git_commit *VAR_6;

 const char *VAR_7 = VAR_0;

 struct merge_index_entry VAR_8[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };
 size_t VAR_9 = sizeof(VAR_8) /
  sizeof(struct merge_index_entry);

 struct merge_index_entry VAR_10[] = {
  { 0100644, "176a458f94e0ea5272ce67c36bf30b6be9caf623", 0, ".gitattributes" },
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };
 size_t VAR_11 = sizeof(VAR_10) /
  sizeof(struct merge_index_entry);

 FUNC_0("merge-recursive/.gitattributes", "* text=auto\n");

 FUNC_2("merge-recursive/asparagus.txt");
 FUNC_2("merge-recursive/veal.txt");

 FUNC_8(&VAR_5, "539bd011c4822c560c1d17cab095006b7a10f707");
 FUNC_1(FUNC_5(&VAR_6, VAR_3, &VAR_5));
 FUNC_1(FUNC_9(VAR_3, (git_object *)VAR_6, VAR_2, ((void*)0)));
 FUNC_4(VAR_6);

 FUNC_1(FUNC_7(&VAR_4, VAR_7, FUNC_10(VAR_7)));
 FUNC_1(FUNC_3(VAR_3, VAR_4, VAR_1, ((void*)0)));

 FUNC_11(VAR_3, VAR_8, VAR_9);
 FUNC_12(VAR_3, VAR_10, VAR_11);

 FUNC_6(VAR_4);
}
