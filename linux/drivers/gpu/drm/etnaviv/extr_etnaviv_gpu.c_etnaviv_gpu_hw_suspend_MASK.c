
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int exec_state; int * mmu_context; int lock; scalar_t__ initialized; } ;


 int FUNC_0 (struct etnaviv_gpu*) ;
 int FUNC_1 (struct etnaviv_gpu*) ;
 int FUNC_2 (struct etnaviv_gpu*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct etnaviv_gpu *VAR_0)
{
 if (VAR_0->initialized && VAR_0->mmu_context) {

  FUNC_4(&VAR_0->lock);
  FUNC_0(VAR_0);
  FUNC_5(&VAR_0->lock);






  FUNC_2(VAR_0, 100);

  FUNC_3(VAR_0->mmu_context);
  VAR_0->mmu_context = ((void*)0);
 }

 VAR_0->exec_state = -1;

 return FUNC_1(VAR_0);
}
