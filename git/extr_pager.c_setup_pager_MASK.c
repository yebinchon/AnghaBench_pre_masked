
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {int in; int env_array; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (char*,int,char*,int ) ;

void FUNC_12(void)
{
 const char *VAR_3 = FUNC_4(FUNC_5(1));

 if (!VAR_3)
  return;






 {
  char VAR_4[64];
  FUNC_11(VAR_4, sizeof(VAR_4), "%d", FUNC_10());
  FUNC_7("COLUMNS", VAR_4, 0);
 }

 FUNC_7("GIT_PAGER_IN_USE", "true", 1);


 FUNC_6(&VAR_0, VAR_3);
 VAR_0.in = -1;
 FUNC_0(&VAR_0.env_array, "GIT_PAGER_IN_USE");
 if (FUNC_9(&VAR_0))
  return;


 FUNC_3(VAR_0.in, 1);
 if (FUNC_5(2))
  FUNC_3(VAR_0.in, 2);
 FUNC_2(VAR_0.in);


 FUNC_8(VAR_2);
 FUNC_1(VAR_1);
}
