
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; scalar_t__ status; } ;
typedef TYPE_1__ status_entry_single ;
typedef int st ;
typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (scalar_t__*,int *,char*) ;
 int FUNC_9 (int *,int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

void FUNC_11(void)
{
 status_entry_single VAR_3;
 char *VAR_4[] = {
  "!file",
  "#blah",
  "[blah]",
  "[attr]",
  "[attr]blah",
  ((void*)0)
 };
 int VAR_5;

 for (VAR_5 = 0; *(VAR_4 + VAR_5) != ((void*)0); VAR_5++) {
  git_buf VAR_6 = VAR_0;
  char *VAR_7 = *(VAR_4 + VAR_5);
  git_repository *VAR_8 = FUNC_4("empty_standard_repo");

  FUNC_2(FUNC_7(&VAR_6, "empty_standard_repo", VAR_7));
  FUNC_1(FUNC_5(&VAR_6), "Please don't ignore me!");

  FUNC_10(&VAR_3, 0, sizeof(VAR_3));
  FUNC_2(FUNC_9(VAR_8, VAR_2, &VAR_3));
  FUNC_0(VAR_3.count == 1);
  FUNC_0(VAR_3.status == VAR_1);

  FUNC_2(FUNC_8(&VAR_3.status, VAR_8, VAR_7));
  FUNC_0(VAR_3.status == VAR_1);

  FUNC_3();
  FUNC_6(&VAR_6);
 }
}
