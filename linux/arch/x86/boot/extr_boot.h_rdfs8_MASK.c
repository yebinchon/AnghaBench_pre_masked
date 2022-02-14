
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int addr_t ;



__attribute__((used)) static inline u8 FUNC_0(addr_t VAR_0)
{
 u8 VAR_1;
 asm volatile("movb %%fs:%1,%0" : "=q" (VAR_1) : "m" (*(u8 *)VAR_0));
 return VAR_1;
}
