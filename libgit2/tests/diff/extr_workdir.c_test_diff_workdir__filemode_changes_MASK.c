
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_diff ;
typedef int exp ;
struct TYPE_5__ {int hunks; int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *,int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

void FUNC_12(void)
{
 git_diff *VAR_6 = ((void*)0);
 diff_expects VAR_7;
 int VAR_8;

 if (!FUNC_4())
  return;

 VAR_5 = FUNC_3("issue_592");

 FUNC_5(VAR_5, "core.filemode", 1);



 FUNC_2(FUNC_10(&VAR_6, VAR_5, ((void*)0), ((void*)0)));

 for (VAR_8 = 0; VAR_8 <= 1; VAR_8++) {
  FUNC_11(&VAR_7, 0, sizeof(VAR_7));

  if (VAR_8)
   FUNC_2(FUNC_7(
    VAR_6, VAR_2, VAR_1, VAR_3, VAR_4, &VAR_7));
  else
   FUNC_2(FUNC_8(
    VAR_6, VAR_2, VAR_1, VAR_3, VAR_4, &VAR_7));

  FUNC_1(0, VAR_7.files);
  FUNC_1(0, VAR_7.file_status[VAR_0]);
  FUNC_1(0, VAR_7.hunks);
 }

 FUNC_9(VAR_6);



 FUNC_0(FUNC_6("issue_592/a.txt"));

 FUNC_2(FUNC_10(&VAR_6, VAR_5, ((void*)0), ((void*)0)));

 for (VAR_8 = 0; VAR_8 <= 1; VAR_8++) {
  FUNC_11(&VAR_7, 0, sizeof(VAR_7));

  if (VAR_8)
   FUNC_2(FUNC_7(
    VAR_6, VAR_2, VAR_1, VAR_3, VAR_4, &VAR_7));
  else
   FUNC_2(FUNC_8(
    VAR_6, VAR_2, VAR_1, VAR_3, VAR_4, &VAR_7));

  FUNC_1(1, VAR_7.files);
  FUNC_1(1, VAR_7.file_status[VAR_0]);
  FUNC_1(0, VAR_7.hunks);
 }

 FUNC_9(VAR_6);

 FUNC_0(FUNC_6("issue_592/a.txt"));
}
