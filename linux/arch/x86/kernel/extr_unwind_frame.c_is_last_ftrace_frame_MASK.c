
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {unsigned long* bp; } ;


 unsigned long* FUNC_0 (struct unwind_state*) ;

__attribute__((used)) static bool FUNC_1(struct unwind_state *VAR_0)
{
 unsigned long *VAR_1 = FUNC_0(VAR_0);
 unsigned long *VAR_2 = VAR_1 - 3;
 return (VAR_0->bp == VAR_2 &&
  *VAR_0->bp == *(VAR_0->bp + 2) &&
  *(VAR_0->bp + 1) == *(VAR_0->bp + 4));
}
