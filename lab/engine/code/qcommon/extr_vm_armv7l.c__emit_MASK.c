
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ codeLength; scalar_t__ codeBase; } ;
typedef TYPE_1__ vm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned int*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,unsigned int*,int) ;

void FUNC_3(vm_t *VAR_3, unsigned VAR_4, int VAR_5)
{
 if (VAR_5)
  FUNC_0(VAR_3->codeBase+VAR_3->codeLength, &VAR_4, 4);
 VAR_3->codeLength+=4;
}
