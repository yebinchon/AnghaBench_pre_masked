
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {unsigned long brk; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;

unsigned long FUNC_2(struct mm_struct *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = FUNC_0(VAR_0->brk + FUNC_1());
 return (VAR_1 > VAR_0->brk) ? VAR_1 : VAR_0->brk;
}
