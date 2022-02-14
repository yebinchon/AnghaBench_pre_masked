
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu {int (* handler ) (void*,unsigned long,int) ;void* arg; } ;



__attribute__((used)) static inline void FUNC_0(struct msm_mmu *VAR_0, void *VAR_1,
  int (*VAR_2)(void *VAR_3, unsigned long VAR_4, int VAR_5))
{
 VAR_0->arg = VAR_1;
 VAR_0->handler = VAR_2;
}
