
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int index_expected ;
typedef int git_index ;
typedef int git_diff ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_apply_options ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int VAR_5 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,struct merge_index_entry*,size_t) ;

void FUNC_11(void)
{
 git_diff *VAR_6;
 git_index *VAR_7;
 git_apply_options VAR_8 = VAR_3;

 const char *VAR_9 = VAR_0;

 struct merge_index_entry VAR_10[] = {
  { 0100644, "f51658077d85f2264fa179b4d0848268cb3475c3", 0, "asparagus.txt" },
  { 0100644, "68f6182f4c85d39e1309d97c7e456156dc9c0096", 0, "beef.txt" },
  { 0100644, "4b7c5650008b2e747fe1809eeb5a1dde0e80850a", 0, "bouilli.txt" },
  { 0100644, "c4e6cca3ec6ae0148ed231f97257df8c311e015f", 0, "gravy.txt" },
  { 0100644, "68af1fc7407fd9addf1701a87eb1c95c7494c598", 0, "oyster.txt" },
 };
 size_t VAR_11 = sizeof(VAR_10) /
  sizeof(struct merge_index_entry);


 FUNC_1(FUNC_8(&VAR_7, VAR_5));
 FUNC_1(FUNC_6(VAR_7, "veal.txt", 0));
 FUNC_1(FUNC_7(VAR_7));
 FUNC_5(VAR_7);

 VAR_8.flags |= VAR_1;
 FUNC_1(FUNC_4(&VAR_6, VAR_9, FUNC_9(VAR_9)));
 FUNC_0(VAR_4, FUNC_2(VAR_5, VAR_6, VAR_2, &VAR_8));

 FUNC_10(VAR_5, VAR_10, VAR_11);

 FUNC_3(VAR_6);
}
