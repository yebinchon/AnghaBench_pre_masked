
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_10__ {TYPE_1__ pathspec; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_11__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

void FUNC_10(void)
{
 git_diff_options VAR_9 = VAR_3;
 git_diff *VAR_10 = ((void*)0);
 diff_expects VAR_11;
 char *VAR_12 = "current_file";
 int VAR_13;

 VAR_8 = FUNC_4("status");

 VAR_9.pathspec.strings = &VAR_12;
 VAR_9.pathspec.count = 1;

 FUNC_2(FUNC_8(&VAR_10, VAR_8, ((void*)0), &VAR_9));

 for (VAR_13 = 0; VAR_13 <= 1; VAR_13++) {
  FUNC_9(&VAR_11, 0, sizeof(VAR_11));

  if (VAR_13)
   FUNC_2(FUNC_5(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_11));
  else
   FUNC_2(FUNC_6(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_11));

  FUNC_0(0, VAR_11.files);
  FUNC_0(0, VAR_11.file_status[VAR_0]);
  FUNC_0(0, VAR_11.file_status[VAR_1]);
  FUNC_0(0, VAR_11.file_status[VAR_2]);
  FUNC_0(0, VAR_11.hunks);
  FUNC_0(0, VAR_11.lines);
  FUNC_0(0, VAR_11.line_ctxt);
  FUNC_0(0, VAR_11.line_adds);
  FUNC_0(0, VAR_11.line_dels);
 }

 FUNC_7(VAR_10);

 FUNC_1("status/current_file", "\n");

 FUNC_2(FUNC_8(&VAR_10, VAR_8, ((void*)0), &VAR_9));

 for (VAR_13 = 0; VAR_13 <= 1; VAR_13++) {
  FUNC_9(&VAR_11, 0, sizeof(VAR_11));

  if (VAR_13)
   FUNC_2(FUNC_5(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_11));
  else
   FUNC_2(FUNC_6(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_11));

  FUNC_0(1, VAR_11.files);
  FUNC_0(0, VAR_11.file_status[VAR_0]);
  FUNC_0(0, VAR_11.file_status[VAR_1]);
  FUNC_0(1, VAR_11.file_status[VAR_2]);
  FUNC_0(1, VAR_11.hunks);
  FUNC_0(2, VAR_11.lines);
  FUNC_0(1, VAR_11.line_ctxt);
  FUNC_0(1, VAR_11.line_adds);
  FUNC_0(0, VAR_11.line_dels);
 }

 FUNC_7(VAR_10);

 FUNC_3("status/current_file", "current_file");

 FUNC_2(FUNC_8(&VAR_10, VAR_8, ((void*)0), &VAR_9));

 for (VAR_13 = 0; VAR_13 <= 1; VAR_13++) {
  FUNC_9(&VAR_11, 0, sizeof(VAR_11));

  if (VAR_13)
   FUNC_2(FUNC_5(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_11));
  else
   FUNC_2(FUNC_6(
    VAR_10, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_11));

  FUNC_0(1, VAR_11.files);
  FUNC_0(0, VAR_11.file_status[VAR_0]);
  FUNC_0(0, VAR_11.file_status[VAR_1]);
  FUNC_0(1, VAR_11.file_status[VAR_2]);
  FUNC_0(1, VAR_11.hunks);
  FUNC_0(3, VAR_11.lines);
  FUNC_0(0, VAR_11.line_ctxt);
  FUNC_0(1, VAR_11.line_adds);
  FUNC_0(2, VAR_11.line_dels);
 }

 FUNC_7(VAR_10);
}
