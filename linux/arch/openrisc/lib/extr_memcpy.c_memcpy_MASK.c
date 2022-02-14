
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int __kernel_size_t ;



void *FUNC_0(void *VAR_0, __const void *VAR_1, __kernel_size_t VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *)VAR_0, *VAR_4 = (unsigned char *)VAR_1;
 uint32_t *VAR_5 = (uint32_t *)VAR_0, *VAR_6 = (uint32_t *)VAR_1;


 if (!((unsigned int)VAR_5 & 3) && !((unsigned int)VAR_6 & 3)) {
  for (; VAR_2 >= 4; VAR_2 -= 4)
   *VAR_5++ = *VAR_6++;
 }

 VAR_3 = (unsigned char *)VAR_5;
 VAR_4 = (unsigned char *)VAR_6;


 for (; VAR_2 >= 1; VAR_2 -= 1)
  *VAR_3++ = *VAR_4++;

 return VAR_0;

}
