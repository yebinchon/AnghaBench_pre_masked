
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static __inline int
FUNC_0(void *VAR_0)
{
 uint8_t *VAR_1 = VAR_0;


 uint16_t VAR_2 = ((uint16_t)VAR_1[1] << 8) + (uint16_t)VAR_1[0];
 uint16_t VAR_3 = ((uint16_t)VAR_1[3] << 8) + (uint16_t)VAR_1[2];




 return (VAR_2 + VAR_3);
}
