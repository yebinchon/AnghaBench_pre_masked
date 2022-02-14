
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0)
{
 u32 VAR_1;


 asm("mrc p15, 0, %0, c1, c0, 1" : "=r" (VAR_1));
 *VAR_0++ = 1;
 *VAR_0++ = VAR_1;


 asm("mrc p15, 1, %0, c9, c0, 2" : "=r" (VAR_1));
 *VAR_0++ = 1;
 *VAR_0++ = VAR_1;
}
