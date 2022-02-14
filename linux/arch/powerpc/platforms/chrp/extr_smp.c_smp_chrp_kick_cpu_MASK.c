
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 *(unsigned long *)VAR_0 = VAR_1;
 asm volatile("dcbf 0,%0"::"r"(VAR_0):"memory");

 return 0;
}
