
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_object ;
typedef int git_index ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
typedef int git_diff ;
typedef int git_buf ;
typedef int exp ;
struct TYPE_12__ {int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int **,int ,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*,int ,int) ;

void FUNC_17(void)
{
 git_buf VAR_14 = VAR_0;
 git_index *VAR_15;
 git_tree *VAR_16;
 git_diff *VAR_17;
 git_diff_options VAR_18 = VAR_8;
 git_diff_find_options VAR_19 = VAR_6;
 diff_expects VAR_20;



 FUNC_1(FUNC_7(&VAR_14, "renames/songof7cities.txt"));
 FUNC_1(FUNC_8(&VAR_14, "renames/untimely.txt", 0, 0));

 FUNC_1(
  FUNC_14((git_object **)&VAR_16, VAR_13, "HEAD^{tree}"));

 FUNC_1(FUNC_13(&VAR_15, VAR_13));
 FUNC_1(FUNC_11(VAR_15, VAR_16));
 FUNC_1(FUNC_12(VAR_15, "songof7cities.txt"));
 FUNC_1(FUNC_9(VAR_15, "untimely.txt"));

 VAR_18.flags = VAR_7;

 FUNC_1(FUNC_6(&VAR_17, VAR_13, VAR_16, VAR_15, &VAR_18));

 FUNC_16(&VAR_20, 0, sizeof(VAR_20));
 FUNC_1(FUNC_4(
  VAR_17, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_20));
 FUNC_0(4, VAR_20.files);
 FUNC_0(1, VAR_20.file_status[VAR_1]);
 FUNC_0(1, VAR_20.file_status[VAR_2]);
 FUNC_0(2, VAR_20.file_status[VAR_4]);

 VAR_19.flags = VAR_5;
 FUNC_1(FUNC_3(VAR_17, &VAR_19));

 FUNC_16(&VAR_20, 0, sizeof(VAR_20));
 FUNC_1(FUNC_4(
  VAR_17, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_20));
 FUNC_0(4, VAR_20.files);
 FUNC_0(1, VAR_20.file_status[VAR_1]);
 FUNC_0(1, VAR_20.file_status[VAR_3]);
 FUNC_0(2, VAR_20.file_status[VAR_4]);

 FUNC_5(VAR_17);
 FUNC_15(VAR_16);
 FUNC_10(VAR_15);

 FUNC_2(&VAR_14);
}
