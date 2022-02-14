
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int context_lines; int interhunk_lines; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

void FUNC_9(void)
{
 git_diff_options VAR_7 = VAR_1;
 git_diff *VAR_8 = ((void*)0);
 diff_expects VAR_9;

 VAR_6 = FUNC_3("issue_1397");

 FUNC_4(VAR_6, "core.autocrlf", 1);

 VAR_7.context_lines = 3;
 VAR_7.interhunk_lines = 1;

 FUNC_1(FUNC_7(&VAR_8, VAR_6, ((void*)0), &VAR_7));

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 FUNC_1(FUNC_5(
  VAR_8, VAR_3, VAR_2, VAR_4, VAR_5, &VAR_9));

 FUNC_0(0, VAR_9.files);
 FUNC_0(0, VAR_9.hunks);
 FUNC_0(0, VAR_9.lines);

 FUNC_6(VAR_8);
 VAR_8 = ((void*)0);

 FUNC_2("issue_1397/crlf_file.txt",
  "first line\r\nsecond line modified\r\nboth with crlf");

 FUNC_1(FUNC_7(&VAR_8, VAR_6, ((void*)0), &VAR_7));

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 FUNC_1(FUNC_5(
  VAR_8, VAR_3, VAR_2, VAR_4, VAR_5, &VAR_9));

 FUNC_0(1, VAR_9.files);
 FUNC_0(1, VAR_9.file_status[VAR_0]);

 FUNC_0(1, VAR_9.hunks);

 FUNC_0(5, VAR_9.lines);
 FUNC_0(3, VAR_9.line_ctxt);
 FUNC_0(1, VAR_9.line_adds);
 FUNC_0(1, VAR_9.line_dels);

 FUNC_6(VAR_8);
}
