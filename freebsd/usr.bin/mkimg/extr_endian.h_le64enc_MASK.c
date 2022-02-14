
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static __inline void
FUNC_1(void *VAR_0, uint64_t VAR_1)
{
 uint8_t *VAR_2 = (uint8_t *)VAR_0;

 FUNC_0(VAR_2, (uint32_t)(VAR_1 & 0xffffffffU));
 FUNC_0(VAR_2 + 4, (uint32_t)(VAR_1 >> 32));
}
