
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_1(vm_t *VAR_13)
{
 if(!VAR_11)
 {
  if(VAR_1 == VAR_0)
  {
   VAR_9 -= 3;
   VAR_13->instructionPointers[VAR_10 - 1] = VAR_9;
   FUNC_0("89 C1");
   return;
  }
  if(VAR_12 == VAR_2 || VAR_12 == VAR_3 || VAR_12 == VAR_4 || VAR_12 == VAR_5 ||
   VAR_12 == VAR_8 || VAR_12 == VAR_7 || VAR_12 == VAR_6)
  {
   FUNC_0("89 C1");
   return;
  }
 }

 FUNC_0("8B 0C 9F");
}
