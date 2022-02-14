
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int workdir_expected ;
struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int index_expected ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int mode; char* path; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
typedef int git_diff ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int **,int ) ;
 int VAR_2 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,struct merge_index_entry*,size_t) ;
 int FUNC_12 (int ,struct merge_index_entry*,size_t) ;

void FUNC_13(void)
{
 git_index *VAR_3;
 git_index_entry VAR_4 = {0};
 git_diff *VAR_5;

 const char *VAR_6 = VAR_0;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "veal.txt" }
 };
 size_t VAR_8 = sizeof(VAR_7) /
  sizeof(struct merge_index_entry);

 struct merge_index_entry VAR_9[] = {
  { 0100644, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
  { 0100644, "a7b066537e6be7109abfe4ff97b675d4e077da20", 0, "veal.txt" },
 };
 size_t VAR_10 = sizeof(VAR_9) /
  sizeof(struct merge_index_entry);


 FUNC_0(FUNC_9(&VAR_3, VAR_2));

 VAR_4.mode = 0100644;
 VAR_4.path = "veal.txt";
 FUNC_0(FUNC_8(&VAR_4.id, "ffb36e513f5fdf8a6ba850a20142676a2ac4807d"));

 FUNC_0(FUNC_4(VAR_3, &VAR_4));
 FUNC_0(FUNC_6(VAR_3, "asparagus.txt", 0));
 FUNC_0(FUNC_7(VAR_3));

 FUNC_0(FUNC_3(&VAR_5, VAR_6, FUNC_10(VAR_6)));
 FUNC_0(FUNC_1(VAR_2, VAR_5, VAR_1, ((void*)0)));

 FUNC_11(VAR_2, VAR_7, VAR_8);
 FUNC_12(VAR_2, VAR_9, VAR_10);

 FUNC_5(VAR_3);
 FUNC_2(VAR_5);
}
