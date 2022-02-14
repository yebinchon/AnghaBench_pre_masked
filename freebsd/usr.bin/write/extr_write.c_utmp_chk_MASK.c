
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {scalar_t__ ut_type; int ut_user; int ut_line; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct utmpx* FUNC_1 (struct utmpx*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(char *VAR_1, char *VAR_2)
{
 struct utmpx VAR_3, *VAR_4;

 FUNC_3(VAR_3.ut_line, VAR_2, sizeof VAR_3.ut_line);
 while ((VAR_4 = FUNC_1(&VAR_3)) != ((void*)0))
  if (VAR_4->ut_type == VAR_0 &&
      FUNC_2(VAR_1, VAR_4->ut_user) == 0) {
   FUNC_0();
   return(0);
  }
 FUNC_0();
 return(1);
}
