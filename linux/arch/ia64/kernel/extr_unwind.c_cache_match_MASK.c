
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_script {unsigned long ip; unsigned long pr_val; unsigned long pr_mask; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline long
FUNC_2 (struct unw_script *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(&VAR_0->lock);
 if (VAR_1 == VAR_0->ip && ((VAR_2 ^ VAR_0->pr_val) & VAR_0->pr_mask) == 0)

  return 1;
 FUNC_1(&VAR_0->lock);
 return 0;
}
