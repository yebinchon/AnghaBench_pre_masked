
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 unsigned int VAR_1;
 asm volatile ("mrc p15, 0, %0, c0, c0, 5" : "=r" (VAR_1));
 return VAR_1 & VAR_0;
}
