
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_page_bits_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline void
FUNC_4(vm_page_t VAR_1, vm_page_bits_t *VAR_2, vm_page_bits_t VAR_3)
{
 uintptr_t VAR_4;
 int VAR_5;

 VAR_4 = (uintptr_t)VAR_2;





 VAR_5 = VAR_4 & (sizeof(uint32_t) - 1);

 VAR_5 = (sizeof(uint32_t) - sizeof(vm_page_bits_t) - VAR_5) * VAR_0;



 VAR_4 &= ~(sizeof(uint32_t) - 1);
 FUNC_1((uint32_t *)VAR_4, VAR_3 << VAR_5);

}
