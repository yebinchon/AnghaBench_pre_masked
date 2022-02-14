
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {scalar_t__ ut_type; int ut_line; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct utmpx* FUNC_0 () ;
 int FUNC_1 (struct utmpx*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct utmpx *VAR_4;

 while ((VAR_4 = FUNC_0()) != ((void*)0)) {
  if (((VAR_2 || !VAR_3) && VAR_4->ut_type == VAR_1) ||
      (VAR_3 && VAR_4->ut_type == VAR_0))
   if (FUNC_2(VAR_4->ut_line) == 0)
    FUNC_1(VAR_4);
 }
}
