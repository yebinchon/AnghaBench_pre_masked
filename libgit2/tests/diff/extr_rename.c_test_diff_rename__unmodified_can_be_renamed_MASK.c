
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
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int **,int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;
 int FUNC_14 (char*,char*) ;

void FUNC_15(void)
{
 git_index *VAR_11;
 git_tree *VAR_12;
 git_diff *VAR_13 = ((void*)0);
 diff_expects VAR_14;
 git_diff_options VAR_15 = VAR_5;
 git_diff_find_options VAR_16 = VAR_4;

 FUNC_1(FUNC_10(&VAR_11, VAR_10));
 FUNC_1(
  FUNC_11((git_object **)&VAR_12, VAR_10, "HEAD^{tree}"));

 FUNC_1(FUNC_14("renames/ikeepsix.txt", "renames/ikeepsix2.txt"));

 FUNC_1(FUNC_8(VAR_11, "ikeepsix.txt"));
 FUNC_1(FUNC_6(VAR_11, "ikeepsix2.txt"));
 FUNC_1(FUNC_9(VAR_11));

 FUNC_1(FUNC_5(&VAR_13, VAR_10, VAR_12, VAR_11, &VAR_15));

 FUNC_13(&VAR_14, 0, sizeof(VAR_14));
 FUNC_1(FUNC_3(
  VAR_13, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_14));
 FUNC_0(2, VAR_14.files);
 FUNC_0(1, VAR_14.file_status[VAR_1]);
 FUNC_0(1, VAR_14.file_status[VAR_0]);

 VAR_16.flags = VAR_3;
 FUNC_1(FUNC_2(VAR_13, &VAR_16));

 FUNC_13(&VAR_14, 0, sizeof(VAR_14));
 FUNC_1(FUNC_3(
  VAR_13, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_14));
 FUNC_0(1, VAR_14.files);
 FUNC_0(1, VAR_14.file_status[VAR_2]);

 FUNC_13(&VAR_14, 0, sizeof(VAR_14));
 FUNC_1(FUNC_3(
  VAR_13, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_14));
 FUNC_0(1, VAR_14.files);
 FUNC_0(1, VAR_14.file_status[VAR_2]);

 FUNC_4(VAR_13);
 FUNC_7(VAR_11);
 FUNC_12(VAR_12);
}
