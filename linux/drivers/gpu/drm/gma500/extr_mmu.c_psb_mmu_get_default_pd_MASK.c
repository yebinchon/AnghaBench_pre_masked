
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_mmu_pd {int dummy; } ;
struct psb_mmu_driver {int sem; struct psb_mmu_pd* default_pd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct psb_mmu_pd *FUNC_2(struct psb_mmu_driver *VAR_0)
{
 struct psb_mmu_pd *VAR_1;

 FUNC_0(&VAR_0->sem);
 VAR_1 = VAR_0->default_pd;
 FUNC_1(&VAR_0->sem);

 return VAR_1;
}
