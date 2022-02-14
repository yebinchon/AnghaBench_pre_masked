
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(uint32_t VAR_1, vm_offset_t *VAR_2)
{
 void *VAR_3;
 int VAR_4;

 if (VAR_1 % 8 != 0)
  return (-1);

 VAR_3 = (void *)FUNC_2(VAR_1, VAR_0);
 if (FUNC_0(VAR_3) != 0)
  return (-1);






 VAR_4 = FUNC_1((void *)VAR_3);





 FUNC_3((vm_offset_t)VAR_3, VAR_0);
 VAR_3 = (void *)FUNC_2(VAR_1, VAR_4);
 *VAR_2 = (vm_offset_t)VAR_3;

 return (0);
}
