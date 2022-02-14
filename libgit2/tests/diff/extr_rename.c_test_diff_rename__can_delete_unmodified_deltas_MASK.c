
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
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
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
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int **,int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*,int ,int) ;

void FUNC_16(void)
{
 git_buf VAR_15 = VAR_0;
 git_index *VAR_16;
 git_tree *VAR_17;
 git_diff *VAR_18;
 git_diff_options VAR_19 = VAR_9;
 git_diff_find_options VAR_20 = VAR_6;
 diff_expects VAR_21;

 FUNC_1(FUNC_7(&VAR_15, "renames/songof7cities.txt"));
 FUNC_1(FUNC_8(&VAR_15, "renames/untimely.txt", 0, 0));

 FUNC_1(
  FUNC_13((git_object **)&VAR_17, VAR_14, "HEAD^{tree}"));

 FUNC_1(FUNC_12(&VAR_16, VAR_14));
 FUNC_1(FUNC_11(VAR_16, VAR_17));
 FUNC_1(FUNC_9(VAR_16, "untimely.txt"));

 VAR_19.flags = VAR_8;

 FUNC_1(FUNC_6(&VAR_18, VAR_14, VAR_17, VAR_16, &VAR_19));

 FUNC_15(&VAR_21, 0, sizeof(VAR_21));
 FUNC_1(FUNC_4(
  VAR_18, VAR_11, VAR_10, VAR_12, VAR_13, &VAR_21));
 FUNC_0(4, VAR_21.files);
 FUNC_0(1, VAR_21.file_status[VAR_3]);
 FUNC_0(3, VAR_21.file_status[VAR_4]);

 VAR_20.flags = VAR_5 | VAR_7;
 FUNC_1(FUNC_3(VAR_18, &VAR_20));

 FUNC_15(&VAR_21, 0, sizeof(VAR_21));
 FUNC_1(FUNC_4(
  VAR_18, VAR_11, VAR_10, VAR_12, VAR_13, &VAR_21));
 FUNC_0(2, VAR_21.files);
 FUNC_0(1, VAR_21.file_status[VAR_2]);
 FUNC_0(1, VAR_21.file_status[VAR_1]);

 FUNC_5(VAR_18);
 FUNC_14(VAR_17);
 FUNC_10(VAR_16);

 FUNC_2(&VAR_15);
}
