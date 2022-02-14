
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_index ;
struct TYPE_7__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int **,char*) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;

void FUNC_14(void)
{
 git_diff_options VAR_13 = VAR_7;
 git_diff *VAR_14 = ((void*)0);
 git_index *VAR_15 = ((void*)0);
 diff_expects VAR_16;

 VAR_12 = FUNC_2("status");
 FUNC_1(FUNC_11(&VAR_15, VAR_12));


 {
  git_repository *VAR_17;
  git_index *VAR_18;
  FUNC_1(FUNC_12(&VAR_17, "status"));
  FUNC_1(FUNC_11(&VAR_18, VAR_17));
  FUNC_1(FUNC_6(VAR_18, "new_file"));
  FUNC_1(FUNC_6(VAR_18, "subdir/new_file"));
  FUNC_1(FUNC_8(VAR_18, "staged_new_file"));
  FUNC_1(FUNC_8(VAR_18, "staged_changes_file_deleted"));
  FUNC_1(FUNC_9(VAR_18));
  FUNC_7(VAR_18);
  FUNC_10(VAR_17);
 }

 VAR_13.context_lines = 3;
 VAR_13.interhunk_lines = 1;
 VAR_13.flags |= VAR_6 | VAR_5;



 FUNC_1(FUNC_5(&VAR_14, VAR_12, VAR_15, &VAR_13));

 FUNC_13(&VAR_16, 0, sizeof(VAR_16));

 FUNC_1(FUNC_3(
  VAR_14, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_16));

 FUNC_0(17, VAR_16.files);
 FUNC_0(0, VAR_16.file_status[VAR_0]);
 FUNC_0(4, VAR_16.file_status[VAR_1]);
 FUNC_0(4, VAR_16.file_status[VAR_2]);
 FUNC_0(4, VAR_16.file_status[VAR_4]);
 FUNC_0(5, VAR_16.file_status[VAR_3]);

 FUNC_4(VAR_14);







 FUNC_1(FUNC_5(&VAR_14, VAR_12, ((void*)0), &VAR_13));

 FUNC_13(&VAR_16, 0, sizeof(VAR_16));

 FUNC_1(FUNC_3(
  VAR_14, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_16));

 FUNC_4(VAR_14);

 FUNC_0(16, VAR_16.files);
 FUNC_0(0, VAR_16.file_status[VAR_0]);
 FUNC_0(3, VAR_16.file_status[VAR_1]);
 FUNC_0(4, VAR_16.file_status[VAR_2]);
 FUNC_0(3, VAR_16.file_status[VAR_4]);
 FUNC_0(6, VAR_16.file_status[VAR_3]);

 FUNC_7(VAR_15);
}
