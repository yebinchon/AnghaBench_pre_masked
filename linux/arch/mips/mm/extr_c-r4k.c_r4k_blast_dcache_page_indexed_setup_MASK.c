
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 () ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned long VAR_6 = FUNC_0();

 if (VAR_6 == 0)
  VAR_5 = (void *)VAR_4;
 else if (VAR_6 == 16)
  VAR_5 = VAR_1;
 else if (VAR_6 == 32)
  VAR_5 = VAR_2;
 else if (VAR_6 == 64)
  VAR_5 = VAR_3;
 else if (VAR_6 == 128)
  VAR_5 = VAR_0;
}
