
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(vm_paddr_t VAR_1, size_t VAR_2, void **VAR_3)
{
 int VAR_4;
 vm_paddr_t VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_1 + VAR_4 * VAR_0;
  *VAR_3 = FUNC_0(FUNC_1(VAR_5), VAR_4);
 }
}
