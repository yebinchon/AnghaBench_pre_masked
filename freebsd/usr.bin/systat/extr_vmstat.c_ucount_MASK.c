
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {scalar_t__ ut_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct utmpx* FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_1 = 0;
 struct utmpx *VAR_2;

 FUNC_2();
 while ((VAR_2 = FUNC_1()) != ((void*)0))
  if (VAR_2->ut_type == VAR_0)
   VAR_1++;
 FUNC_0();

 return (VAR_1);
}
