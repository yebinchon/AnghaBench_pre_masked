
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_hw_breakpoint {unsigned long address; int len; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct arch_hw_breakpoint *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->address;
 VAR_3 = FUNC_1(VAR_1->len);
 FUNC_0(VAR_3 < 0);





 return (VAR_2 >= VAR_0) || ((VAR_2 + VAR_3 - 1) >= VAR_0);
}
