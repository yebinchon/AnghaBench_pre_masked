
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int dummy; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct unwind_state*,unsigned long,int) ;

__attribute__((used)) static bool FUNC_2(struct unwind_state *VAR_0, unsigned long VAR_1,
       unsigned long *VAR_2)
{
 if (!FUNC_1(VAR_0, VAR_1, sizeof(long)))
  return 0;

 *VAR_2 = FUNC_0(*(unsigned long *)VAR_1);
 return 1;
}
