
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_8 = FUNC_0();

 if (VAR_8 == 0)
  VAR_7 = (void *)VAR_5;
 else if (VAR_8 == 16)
  VAR_7 = VAR_2;
 else if (VAR_8 == 32 && FUNC_1() == VAR_0)
  VAR_7 = VAR_6;
 else if (VAR_8 == 32)
  VAR_7 = VAR_3;
 else if (VAR_8 == 64)
  VAR_7 = VAR_4;
 else if (VAR_8 == 128)
  VAR_7 = VAR_1;
}
