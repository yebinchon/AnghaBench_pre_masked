
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
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int ,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int **,int ,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*,int ,int) ;

void FUNC_17(void)
{
 git_buf VAR_13 = VAR_0, VAR_14 = VAR_0;
 git_index *VAR_15;
 git_tree *VAR_16;
 git_diff *VAR_17;
 git_diff_options VAR_18 = VAR_7;
 git_diff_find_options VAR_19 = VAR_6;
 diff_expects VAR_20;
 int VAR_21;

 FUNC_1(FUNC_8(&VAR_13, "renames/untimely.txt"));
 FUNC_1(FUNC_9(&VAR_13, "renames/songof7cities.txt", 0, 0));
 for (VAR_21 = 0; VAR_21 < 100; ++VAR_21)
  FUNC_1(FUNC_3(&VAR_14, "this is not the content you are looking for\n"));
 FUNC_1(FUNC_9(&VAR_14, "renames/untimely.txt", 0, 0));

 FUNC_1(
  FUNC_14((git_object **)&VAR_16, VAR_12, "HEAD^{tree}"));

 FUNC_1(FUNC_13(&VAR_15, VAR_12));
 FUNC_1(FUNC_12(VAR_15, VAR_16));
 FUNC_1(FUNC_10(VAR_15, "songof7cities.txt"));
 FUNC_1(FUNC_10(VAR_15, "untimely.txt"));

 FUNC_1(FUNC_7(&VAR_17, VAR_12, VAR_16, VAR_15, &VAR_18));

 FUNC_16(&VAR_20, 0, sizeof(VAR_20));
 FUNC_1(FUNC_5(
  VAR_17, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_20));
 FUNC_0(2, VAR_20.files);
 FUNC_0(2, VAR_20.file_status[VAR_3]);

 VAR_19.flags = VAR_5;
 FUNC_1(FUNC_4(VAR_17, &VAR_19));

 FUNC_16(&VAR_20, 0, sizeof(VAR_20));
 FUNC_1(FUNC_5(
  VAR_17, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_20));
 FUNC_0(3, VAR_20.files);
 FUNC_0(1, VAR_20.file_status[VAR_4]);
 FUNC_0(1, VAR_20.file_status[VAR_1]);
 FUNC_0(1, VAR_20.file_status[VAR_2]);

 FUNC_6(VAR_17);
 FUNC_15(VAR_16);
 FUNC_11(VAR_15);

 FUNC_2(&VAR_13);
 FUNC_2(&VAR_14);
}
