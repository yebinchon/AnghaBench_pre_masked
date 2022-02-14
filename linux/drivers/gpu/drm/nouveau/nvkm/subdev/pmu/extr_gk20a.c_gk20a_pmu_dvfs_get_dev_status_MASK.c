
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_falcon {int dummy; } ;
struct gk20a_pmu_dvfs_dev_status {void* total; void* busy; } ;
struct TYPE_2__ {struct nvkm_falcon* falcon; } ;
struct gk20a_pmu {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct nvkm_falcon*,int) ;

__attribute__((used)) static void
FUNC_1(struct gk20a_pmu *VAR_2,
         struct gk20a_pmu_dvfs_dev_status *VAR_3)
{
 struct nvkm_falcon *VAR_4 = VAR_2->base.falcon;

 VAR_3->busy = FUNC_0(VAR_4, 0x508 + (VAR_0 * 0x10));
 VAR_3->total= FUNC_0(VAR_4, 0x508 + (VAR_1 * 0x10));
}
