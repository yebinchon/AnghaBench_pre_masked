
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {unsigned long* bp; } ;


 unsigned long* FUNC_0 (struct unwind_state*) ;
 unsigned long* FUNC_1 (struct unwind_state*) ;

__attribute__((used)) static bool FUNC_2(struct unwind_state *VAR_0)
{
 unsigned long *VAR_1 = FUNC_1(VAR_0);
 unsigned long *VAR_2 = FUNC_0(VAR_0);
 return (VAR_0->bp == VAR_2 && *(VAR_2 + 1) == *(VAR_1 + 1));
}
