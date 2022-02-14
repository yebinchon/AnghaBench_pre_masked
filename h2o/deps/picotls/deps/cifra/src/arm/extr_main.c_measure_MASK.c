
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int (* measure_fn ) () ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(measure_fn VAR_0)
{
  FUNC_0();
  uint32_t VAR_1 = FUNC_5();
  VAR_0();
  uint32_t VAR_2 = FUNC_3();
  uint32_t VAR_3 = FUNC_4();

  FUNC_1("cycles = ");
  FUNC_2(VAR_2 - VAR_1);
  FUNC_1("\n");
  FUNC_1("stack = ");
  FUNC_2(VAR_3 << 2);
  FUNC_1("\n");
}
