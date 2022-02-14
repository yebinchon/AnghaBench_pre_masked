
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 () ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned long VAR_6 = FUNC_0();

 switch (VAR_6) {
 case 0:
  VAR_2 = (void *)VAR_1;
  break;
 case 16:
  VAR_2 = VAR_0;
  break;
 case 32:
  VAR_2 = VAR_4;
  break;
 case 64:
  VAR_2 = VAR_5;
  break;
 case 128:
  VAR_2 = VAR_3;
  break;
 default:
  break;
 }
}
