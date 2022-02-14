
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 asm(".byte 0x0F,0xA7,0xC0 /* xstore %%edi (addr=%0) */"
  : "=m" (*VAR_0), "=a" (VAR_2), "+d" (VAR_1), "+D" (VAR_0));

 return VAR_2;
}
