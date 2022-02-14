
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psb_mmu_pd {int p; } ;
struct psb_mmu_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct psb_mmu_pd* FUNC_1 (struct psb_mmu_driver*) ;

uint32_t FUNC_2(struct psb_mmu_driver *VAR_1)
{
 struct psb_mmu_pd *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2->p) << VAR_0;
}
