
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_object ;
typedef int git_index ;
typedef int git_diff_options ;
struct TYPE_7__ {void* flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int files; int * file_status; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int *,int *,int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int **,int ,int *,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int **,int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static void FUNC_17(int VAR_8)
{
 git_index *VAR_9;
 git_tree *VAR_10, *VAR_11;
 git_diff *VAR_12 = ((void*)0);
 diff_expects VAR_13;
 git_diff_options VAR_14 = VAR_5;
 git_diff_find_options VAR_15 = VAR_4;

 FUNC_1(FUNC_12(&VAR_9, VAR_7));
 FUNC_1(
  FUNC_13((git_object **)&VAR_10, VAR_7, "HEAD^{tree}"));

 FUNC_1(FUNC_16("renames/ikeepsix.txt", "renames/ikeepsix2.txt"));
 FUNC_1(FUNC_10(VAR_9, "ikeepsix.txt"));
 FUNC_1(FUNC_8(VAR_9, "ikeepsix2.txt"));
 FUNC_1(FUNC_11(VAR_9));

 FUNC_1(FUNC_6(&VAR_12, VAR_7, VAR_10, VAR_9, &VAR_14));

 FUNC_15(&VAR_13, 0, sizeof(VAR_13));
 FUNC_1(FUNC_4(
  VAR_12, VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
 FUNC_0(1, VAR_13.file_status[VAR_1]);
 FUNC_0(VAR_8 + 1, VAR_13.file_status[VAR_0]);
 FUNC_0(VAR_8 + 2, VAR_13.files);

 VAR_15.flags = VAR_3;
 FUNC_1(FUNC_3(VAR_12, &VAR_15));

 FUNC_15(&VAR_13, 0, sizeof(VAR_13));
 FUNC_1(FUNC_4(
  VAR_12, VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
 FUNC_0(1, VAR_13.file_status[VAR_2]);
 FUNC_0(VAR_8, VAR_13.file_status[VAR_0]);
 FUNC_0(VAR_8 + 1, VAR_13.files);

 FUNC_5(VAR_12);

 FUNC_2(((void*)0), VAR_7, ((void*)0), 1372350000, "yoyoyo");
 FUNC_1(FUNC_13(
  (git_object **)&VAR_11, VAR_7, "HEAD^{tree}"));

 FUNC_1(FUNC_7(
  &VAR_12, VAR_7, VAR_10, VAR_11, &VAR_14));

 FUNC_15(&VAR_13, 0, sizeof(VAR_13));
 FUNC_1(FUNC_4(
  VAR_12, VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
 FUNC_0(1, VAR_13.file_status[VAR_1]);
 FUNC_0(VAR_8 + 1, VAR_13.file_status[VAR_0]);
 FUNC_0(VAR_8 + 2, VAR_13.files);

 VAR_15.flags = VAR_3;
 FUNC_1(FUNC_3(VAR_12, &VAR_15));

 FUNC_15(&VAR_13, 0, sizeof(VAR_13));
 FUNC_1(FUNC_4(
  VAR_12, VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
 FUNC_0(1, VAR_13.file_status[VAR_2]);
 FUNC_0(VAR_8, VAR_13.file_status[VAR_0]);
 FUNC_0(VAR_8 + 1, VAR_13.files);

 FUNC_5(VAR_12);

 FUNC_14(VAR_11);
 FUNC_14(VAR_10);
 FUNC_9(VAR_9);
}
