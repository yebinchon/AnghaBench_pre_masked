
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
typedef int git_buf ;
typedef int exp ;
struct TYPE_8__ {int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 int VAR_0 ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int **,int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;

void FUNC_16(void)
{
 git_buf VAR_11 = VAR_0, VAR_12 = VAR_0;
 git_index *VAR_13;
 git_tree *VAR_14;
 git_diff *VAR_15;
 git_diff_options VAR_16 = VAR_5;
 git_diff_find_options VAR_17 = VAR_4;
 diff_expects VAR_18;

 FUNC_1(FUNC_7(&VAR_11, "renames/untimely.txt"));
 FUNC_1(FUNC_7(&VAR_12, "renames/songof7cities.txt"));
 FUNC_1(FUNC_8(&VAR_11, "renames/songof7cities.txt", 0, 0));
 FUNC_1(FUNC_8(&VAR_12, "renames/untimely.txt", 0, 0));

 FUNC_1(
  FUNC_13((git_object **)&VAR_14, VAR_10, "HEAD^{tree}"));

 FUNC_1(FUNC_12(&VAR_13, VAR_10));
 FUNC_1(FUNC_11(VAR_13, VAR_14));
 FUNC_1(FUNC_9(VAR_13, "songof7cities.txt"));
 FUNC_1(FUNC_9(VAR_13, "untimely.txt"));

 FUNC_1(FUNC_6(&VAR_15, VAR_10, VAR_14, VAR_13, &VAR_16));

 FUNC_15(&VAR_18, 0, sizeof(VAR_18));
 FUNC_1(FUNC_4(
  VAR_15, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_18));
 FUNC_0(2, VAR_18.files);
 FUNC_0(2, VAR_18.file_status[VAR_1]);

 VAR_17.flags = VAR_3;
 FUNC_1(FUNC_3(VAR_15, &VAR_17));

 FUNC_15(&VAR_18, 0, sizeof(VAR_18));
 FUNC_1(FUNC_4(
  VAR_15, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_18));
 FUNC_0(2, VAR_18.files);
 FUNC_0(2, VAR_18.file_status[VAR_2]);

 FUNC_5(VAR_15);
 FUNC_14(VAR_14);
 FUNC_10(VAR_13);

 FUNC_2(&VAR_11);
 FUNC_2(&VAR_12);
}
