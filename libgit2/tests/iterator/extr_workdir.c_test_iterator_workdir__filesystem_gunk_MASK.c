
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_iterator ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int,int *,int,int *) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,int ,int) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int **,char*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

void FUNC_14(void)
{
 git_iterator *VAR_3;
 git_buf VAR_4 = VAR_0;
 int VAR_5;

 if (!FUNC_3("GITTEST_INVASIVE_SPEED"))
  FUNC_4();

 VAR_2 = FUNC_2("testrepo");

 for (VAR_5 = 0; VAR_5 < 100000; VAR_5++) {
  FUNC_6(&VAR_4);
  FUNC_9(&VAR_4, "%s/refs/heads/foo/%d/subdir",
   FUNC_13(VAR_2), VAR_5);
  FUNC_0(!FUNC_8(&VAR_4));

  FUNC_1(FUNC_10(VAR_4.ptr, 0775, VAR_1));
 }

 FUNC_1(FUNC_11(&VAR_3, "testrepo/.git/refs", ((void*)0)));




 FUNC_5(VAR_3, 16, ((void*)0), 15, ((void*)0));
 FUNC_12(VAR_3);
 FUNC_7(&VAR_4);
}
