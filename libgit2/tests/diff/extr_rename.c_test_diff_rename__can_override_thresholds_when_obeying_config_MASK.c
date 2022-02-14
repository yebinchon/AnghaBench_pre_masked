
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_11__ {int copy_threshold; int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
typedef int git_diff ;
typedef int git_config ;
typedef int exp ;
struct TYPE_12__ {int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int * FUNC_11 (int ,char const*) ;

void FUNC_12(void)
{
 const char *VAR_15 = VAR_0;
 const char *VAR_16 = VAR_9;

 git_tree *VAR_17, *VAR_18;
 git_config *VAR_19;
 git_diff *VAR_20;
 git_diff_options VAR_21 = VAR_8;
 git_diff_find_options VAR_22 = VAR_6;
 diff_expects VAR_23;

 VAR_17 = FUNC_11(VAR_14, VAR_15);
 VAR_18 = FUNC_11(VAR_14, VAR_16);

 VAR_21.flags |= VAR_7;
 VAR_22.flags = VAR_5;

 FUNC_1(FUNC_8(&VAR_19, VAR_14));
 FUNC_1(FUNC_3(VAR_19, "diff.renames", "copies"));
 FUNC_2(VAR_19);


 VAR_22.copy_threshold = 96;
 FUNC_1(FUNC_7(
    &VAR_20, VAR_14, VAR_17, VAR_18, &VAR_21));
 FUNC_10(&VAR_23, 0, sizeof(VAR_23));
 FUNC_1(FUNC_4(VAR_20, &VAR_22));
 FUNC_1(FUNC_5(VAR_20,
    VAR_11, VAR_10, VAR_12, VAR_13, &VAR_23));
 FUNC_0(4, VAR_23.files);
 FUNC_0(1, VAR_23.file_status[VAR_4]);
 FUNC_0(2, VAR_23.file_status[VAR_3]);
 FUNC_0(1, VAR_23.file_status[VAR_1]);
 FUNC_6(VAR_20);


 VAR_22.copy_threshold = 20;
 FUNC_1(FUNC_7(
    &VAR_20, VAR_14, VAR_17, VAR_18, &VAR_21));
 FUNC_10(&VAR_23, 0, sizeof(VAR_23));
 FUNC_1(FUNC_4(VAR_20, &VAR_22));
 FUNC_1(FUNC_5(VAR_20,
    VAR_11, VAR_10, VAR_12, VAR_13, &VAR_23));
 FUNC_0(4, VAR_23.files);
 FUNC_0(1, VAR_23.file_status[VAR_4]);
 FUNC_0(2, VAR_23.file_status[VAR_3]);
 FUNC_0(1, VAR_23.file_status[VAR_2]);
 FUNC_6(VAR_20);


 FUNC_9(VAR_17);
 FUNC_9(VAR_18);
}
