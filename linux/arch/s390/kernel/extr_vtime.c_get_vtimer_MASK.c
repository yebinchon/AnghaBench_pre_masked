
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static inline u64 FUNC_0(void)
{
 u64 VAR_0;

 asm volatile("stpt %0" : "=Q" (VAR_0));
 return VAR_0;
}
