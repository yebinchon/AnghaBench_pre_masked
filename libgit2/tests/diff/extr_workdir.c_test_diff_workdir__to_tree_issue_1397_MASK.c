
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_9__ {int context_lines; int interhunk_lines; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_10__ {int lines; int hunks; int files; } ;
typedef TYPE_2__ diff_expects ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_9 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int * FUNC_12 (int ,char const*) ;

void FUNC_13(void)
{
 const char *VAR_6 = "7f483a738";
 git_tree *VAR_7;
 git_diff_options VAR_8 = VAR_0;
 git_diff *VAR_9 = ((void*)0);
 git_diff *VAR_10 = ((void*)0);
 diff_expects VAR_11;

 VAR_5 = FUNC_2("issue_1397");

 FUNC_3(VAR_5, "core.autocrlf", 1);

 VAR_7 = FUNC_12(VAR_5, VAR_6);

 VAR_8.context_lines = 3;
 VAR_8.interhunk_lines = 1;

 FUNC_1(FUNC_9(&VAR_9, VAR_5, VAR_7, &VAR_8));

 FUNC_11(&VAR_11, 0, sizeof(VAR_11));
 FUNC_1(FUNC_4(
  VAR_9, VAR_2, VAR_1, VAR_3, VAR_4, &VAR_11));

 FUNC_0(0, VAR_11.files);
 FUNC_0(0, VAR_11.hunks);
 FUNC_0(0, VAR_11.lines);

 FUNC_5(VAR_9);
 VAR_9 = ((void*)0);

 FUNC_1(FUNC_8(&VAR_9, VAR_5, VAR_7, ((void*)0), &VAR_8));
 FUNC_1(FUNC_6(&VAR_10, VAR_5, ((void*)0), &VAR_8));
 FUNC_1(FUNC_7(VAR_9, VAR_10));
 FUNC_5(VAR_10);

 FUNC_11(&VAR_11, 0, sizeof(VAR_11));
 FUNC_1(FUNC_4(
  VAR_9, VAR_2, VAR_1, VAR_3, VAR_4, &VAR_11));

 FUNC_0(0, VAR_11.files);
 FUNC_0(0, VAR_11.hunks);
 FUNC_0(0, VAR_11.lines);

 FUNC_5(VAR_9);
 FUNC_10(VAR_7);
}
