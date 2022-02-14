
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

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_7 = FUNC_0();

 if (FUNC_1() != VAR_0)
  VAR_6 = (void *)VAR_5;
 else if (VAR_7 == 16)
  VAR_6 = VAR_2;
 else if (VAR_7 == 32)
  VAR_6 = VAR_3;
 else if (VAR_7 == 64)
  VAR_6 = VAR_4;
 else if (VAR_7 == 128)
  VAR_6 = VAR_1;
}
