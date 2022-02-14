
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {unsigned long ip; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct unwind_state*) ;

unsigned long FUNC_2(struct unwind_state *VAR_0)
{
 if (FUNC_1(VAR_0))
  return 0;

 return FUNC_0(VAR_0->ip) ? VAR_0->ip : 0;
}
