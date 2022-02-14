
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_mask_set {scalar_t__ gen; int used; int mask; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct cpu_mask_set *VAR_0)
{
 FUNC_0(&VAR_0->mask);
 FUNC_0(&VAR_0->used);
 VAR_0->gen = 0;
}
