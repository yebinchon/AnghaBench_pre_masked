
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_12 = FUNC_0();

 if (VAR_12 == 0)
  VAR_10 = (void *)VAR_8;
 else if (VAR_12 == 16)
  VAR_10 = VAR_4;
 else if (VAR_12 == 32) {
  if (VAR_1 && FUNC_1())
   VAR_10 = VAR_7;
  else if (VAR_2)
   VAR_10 = VAR_11;
  else if (FUNC_2() == VAR_0)
   VAR_10 = VAR_9;
  else
   VAR_10 = VAR_5;
 } else if (VAR_12 == 64)
  VAR_10 = VAR_6;
 else if (VAR_12 == 128)
  VAR_10 = VAR_3;
}
