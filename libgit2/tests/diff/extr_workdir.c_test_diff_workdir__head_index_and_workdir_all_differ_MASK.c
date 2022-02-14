
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_10__ {char** strings; int count; } ;
struct TYPE_11__ {TYPE_1__ pathspec; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_12__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int *,int *,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int * FUNC_11 (int ,char*) ;

void FUNC_12(void)
{
 git_diff_options VAR_9 = VAR_3;
 git_diff *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 diff_expects VAR_12;
 char *VAR_13 = "staged_changes_modified_file";
 git_tree *VAR_14;
 int VAR_15;
 VAR_8 = FUNC_2("status");

 VAR_14 = FUNC_11(VAR_8, "26a125ee1bfc5df1e1b2e9441bbe63c8a7ae989f");

 VAR_9.pathspec.strings = &VAR_13;
 VAR_9.pathspec.count = 1;

 FUNC_1(FUNC_8(&VAR_10, VAR_8, VAR_14, ((void*)0), &VAR_9));
 FUNC_1(FUNC_6(&VAR_11, VAR_8, ((void*)0), &VAR_9));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_10(&VAR_12, 0, sizeof(VAR_12));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_12));
  else
   FUNC_1(FUNC_4(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_12));

  FUNC_0(1, VAR_12.files);
  FUNC_0(0, VAR_12.file_status[VAR_0]);
  FUNC_0(0, VAR_12.file_status[VAR_1]);
  FUNC_0(1, VAR_12.file_status[VAR_2]);
  FUNC_0(1, VAR_12.hunks);
  FUNC_0(2, VAR_12.lines);
  FUNC_0(1, VAR_12.line_ctxt);
  FUNC_0(1, VAR_12.line_adds);
  FUNC_0(0, VAR_12.line_dels);
 }

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_10(&VAR_12, 0, sizeof(VAR_12));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_11, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_12));
  else
   FUNC_1(FUNC_4(
    VAR_11, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_12));

  FUNC_0(1, VAR_12.files);
  FUNC_0(0, VAR_12.file_status[VAR_0]);
  FUNC_0(0, VAR_12.file_status[VAR_1]);
  FUNC_0(1, VAR_12.file_status[VAR_2]);
  FUNC_0(1, VAR_12.hunks);
  FUNC_0(3, VAR_12.lines);
  FUNC_0(2, VAR_12.line_ctxt);
  FUNC_0(1, VAR_12.line_adds);
  FUNC_0(0, VAR_12.line_dels);
 }

 FUNC_1(FUNC_7(VAR_10, VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_10(&VAR_12, 0, sizeof(VAR_12));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_12));
  else
   FUNC_1(FUNC_4(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_12));

  FUNC_0(1, VAR_12.files);
  FUNC_0(0, VAR_12.file_status[VAR_0]);
  FUNC_0(0, VAR_12.file_status[VAR_1]);
  FUNC_0(1, VAR_12.file_status[VAR_2]);
  FUNC_0(1, VAR_12.hunks);
  FUNC_0(3, VAR_12.lines);
  FUNC_0(1, VAR_12.line_ctxt);
  FUNC_0(2, VAR_12.line_adds);
  FUNC_0(0, VAR_12.line_dels);
 }

 FUNC_5(VAR_10);
 FUNC_5(VAR_11);

 FUNC_9(VAR_14);
}
