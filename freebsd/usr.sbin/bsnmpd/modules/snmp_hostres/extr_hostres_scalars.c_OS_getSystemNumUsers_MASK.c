
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct utmpx {scalar_t__ ut_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 struct utmpx* FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(uint32_t *VAR_2)
{
 struct utmpx *VAR_3;

 FUNC_2();
 *VAR_2 = 0;
 while ((VAR_3 = FUNC_1()) != ((void*)0)) {
  if (VAR_3->ut_type == VAR_1)
   (*VAR_2)++;
 }
 FUNC_0();

 return (VAR_0);
}
