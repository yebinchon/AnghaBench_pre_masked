
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

uint64_t FUNC_2(void)
{
 static uint64_t VAR_0;
 if (VAR_0 > 1) {

  return VAR_0 + FUNC_1();
 } else if (VAR_0 == 1) {

  return FUNC_0();
 } else {

  uint64_t VAR_1 = FUNC_0();
  uint64_t VAR_2 = FUNC_1();
  if (VAR_2)
   VAR_0 = VAR_1 - VAR_2;
  else
   VAR_0 = 1;
  return VAR_1;
 }
}
