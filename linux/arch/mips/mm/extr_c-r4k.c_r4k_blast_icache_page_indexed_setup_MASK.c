
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
 scalar_t__ VAR_7 ;
 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_11 = FUNC_0();

 if (VAR_11 == 0)
  VAR_9 = (void *)VAR_7;
 else if (VAR_11 == 16)
  VAR_9 = VAR_3;
 else if (VAR_11 == 32) {
  if (VAR_1 && FUNC_1())
   VAR_9 =
    VAR_5;
  else if (VAR_2)
   VAR_9 =
    VAR_10;
  else if (FUNC_2() == VAR_0)
   VAR_9 =
    VAR_8;
  else
   VAR_9 =
    VAR_4;
 } else if (VAR_11 == 64)
  VAR_9 = VAR_6;
}
