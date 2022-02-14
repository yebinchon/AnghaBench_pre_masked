
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_3(vm_t *VAR_2, int VAR_3)
{
 FUNC_2(VAR_3);

 FUNC_1("E8");


 if(VAR_1 == 2)
  FUNC_0(VAR_2->instructionPointers[VAR_3] - VAR_0 - 4);
 else
  VAR_0 += 4;
}
