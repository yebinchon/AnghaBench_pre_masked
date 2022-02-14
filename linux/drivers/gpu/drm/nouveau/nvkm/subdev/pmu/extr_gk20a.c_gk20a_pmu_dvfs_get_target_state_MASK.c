
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_clk {int pstate; int state_nr; } ;
struct gk20a_pmu_dvfs_data {int p_load_max; int p_load_target; } ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {TYPE_3__ subdev; } ;
struct gk20a_pmu {TYPE_2__ base; struct gk20a_pmu_dvfs_data* data; } ;
struct TYPE_4__ {struct nvkm_clk* clk; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,char*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct gk20a_pmu *VAR_0,
    int *VAR_1, int VAR_2)
{
 struct gk20a_pmu_dvfs_data *VAR_3 = VAR_0->data;
 struct nvkm_clk *VAR_4 = VAR_0->base.subdev.device->clk;
 int VAR_5, VAR_6;


 VAR_6 = VAR_5 = VAR_4->pstate;

 if (VAR_2 > VAR_3->p_load_max) {
  VAR_6 = FUNC_1(VAR_4->state_nr - 1, VAR_6 + (VAR_4->state_nr / 3));
 } else {
  VAR_6 += ((VAR_2 - VAR_3->p_load_target) * 10 /
    VAR_3->p_load_target) / 2;
  VAR_6 = FUNC_0(0, VAR_6);
  VAR_6 = FUNC_1(VAR_4->state_nr - 1, VAR_6);
 }

 FUNC_2(&VAR_0->base.subdev, "cur level = %d, new level = %d\n",
     VAR_5, VAR_6);

 *VAR_1 = VAR_6;

 return (VAR_6 != VAR_5);
}
