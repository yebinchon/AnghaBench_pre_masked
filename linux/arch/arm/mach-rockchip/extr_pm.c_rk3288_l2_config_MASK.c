
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(void)
{
 u32 VAR_0;

 asm("mrc p15, 1, %0, c9, c0, 2" : "=r" (VAR_0));
 return VAR_0;
}
