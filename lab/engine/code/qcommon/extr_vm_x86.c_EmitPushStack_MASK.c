
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(vm_t *VAR_6)
{
 if (!VAR_5)
 {
  if(VAR_2 == VAR_0)
  {
   VAR_3 -= 3;
   VAR_6->instructionPointers[VAR_4 - 1] = VAR_3;
   return;
  }
  if(VAR_2 == VAR_1)
  {
   VAR_3 -= 3;
   VAR_6->instructionPointers[VAR_4 - 1] = VAR_3;
   FUNC_0(1);
   return;
  }
 }

 FUNC_1(1);
}
