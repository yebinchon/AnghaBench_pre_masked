
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
struct TYPE_11__ {int flags; } ;
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
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int * FUNC_12 (int ,char const*) ;

void FUNC_13(void)
{
 const char *VAR_18 = VAR_11;
 const char *VAR_19 = VAR_0;
 const char *VAR_20 = VAR_12;

 git_tree *VAR_21, *VAR_22, *VAR_23;
 git_config *VAR_24;
 git_diff *VAR_25;
 git_diff_options VAR_26 = VAR_10;
 git_diff_find_options VAR_27 = VAR_8;
 diff_expects VAR_28;

 VAR_27.flags = VAR_7;
 VAR_21 = FUNC_12(VAR_17, VAR_18);
 VAR_22 = FUNC_12(VAR_17, VAR_19);
 VAR_23 = FUNC_12(VAR_17, VAR_20);

 VAR_26.flags |= VAR_9;
 FUNC_1(FUNC_9(&VAR_24, VAR_17));


 FUNC_1(FUNC_3(VAR_24, "diff.renames", 0));
 FUNC_1(FUNC_8(
    &VAR_25, VAR_17, VAR_21, VAR_22, &VAR_26));
 FUNC_11(&VAR_28, 0, sizeof(VAR_28));
 FUNC_1(FUNC_5(VAR_25, &VAR_27));
 FUNC_1(FUNC_6(VAR_25,
    VAR_14, VAR_13, VAR_15, VAR_16, &VAR_28));
 FUNC_0(4, VAR_28.files);
 FUNC_0(1, VAR_28.file_status[VAR_6]);
 FUNC_0(2, VAR_28.file_status[VAR_1]);
 FUNC_0(1, VAR_28.file_status[VAR_3]);
 FUNC_7(VAR_25);


 FUNC_1(FUNC_3(VAR_24, "diff.renames", 1));
 FUNC_1(FUNC_8(
    &VAR_25, VAR_17, VAR_21, VAR_22, &VAR_26));
 FUNC_11(&VAR_28, 0, sizeof(VAR_28));
 FUNC_1(FUNC_5(VAR_25, &VAR_27));
 FUNC_1(FUNC_6(VAR_25,
    VAR_14, VAR_13, VAR_15, VAR_16, &VAR_28));
 FUNC_0(3, VAR_28.files);
 FUNC_0(1, VAR_28.file_status[VAR_6]);
 FUNC_0(1, VAR_28.file_status[VAR_1]);
 FUNC_0(1, VAR_28.file_status[VAR_5]);
 FUNC_7(VAR_25);


 FUNC_1(FUNC_4(VAR_24, "diff.renames", "copies"));
 FUNC_1(FUNC_8(
    &VAR_25, VAR_17, VAR_22, VAR_23, &VAR_26));
 FUNC_11(&VAR_28, 0, sizeof(VAR_28));
 FUNC_1(FUNC_5(VAR_25, &VAR_27));
 FUNC_1(FUNC_6(VAR_25,
    VAR_14, VAR_13, VAR_15, VAR_16, &VAR_28));
 FUNC_0(4, VAR_28.files);
 FUNC_0(1, VAR_28.file_status[VAR_6]);
 FUNC_0(2, VAR_28.file_status[VAR_4]);
 FUNC_0(1, VAR_28.file_status[VAR_2]);
 FUNC_7(VAR_25);


 FUNC_1(FUNC_8(
    &VAR_25, VAR_17, VAR_22, VAR_23, &VAR_26));
 FUNC_11(&VAR_28, 0, sizeof(VAR_28));
 FUNC_1(FUNC_5(VAR_25, ((void*)0)));
 FUNC_1(FUNC_6(VAR_25,
    VAR_14, VAR_13, VAR_15, VAR_16, &VAR_28));
 FUNC_0(4, VAR_28.files);
 FUNC_0(1, VAR_28.file_status[VAR_6]);
 FUNC_0(2, VAR_28.file_status[VAR_4]);
 FUNC_0(1, VAR_28.file_status[VAR_2]);
 FUNC_7(VAR_25);


 FUNC_10(VAR_21);
 FUNC_10(VAR_22);
 FUNC_10(VAR_23);
 FUNC_2(VAR_24);
}
