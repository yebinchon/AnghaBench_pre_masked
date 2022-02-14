
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_hw_breakpoint {unsigned long address; int len; } ;


 unsigned long VAR_0 ;
 unsigned int FUNC_0 (int ) ;

int FUNC_1(struct arch_hw_breakpoint *VAR_1)
{
 unsigned int VAR_2;
 unsigned long VAR_3;

 VAR_3 = VAR_1->address;
 VAR_2 = FUNC_0(VAR_1->len);

 return (VAR_3 >= VAR_0) && ((VAR_3 + VAR_2 - 1) >= VAR_0);
}
