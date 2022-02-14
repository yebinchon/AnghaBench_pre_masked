
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device_tegra {int clk; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct nvkm_clk_func {int nr_pstates; TYPE_2__* pstates; } ;
struct gk20a_clk_pllg_params {int dummy; } ;
struct TYPE_6__ {int subdev; } ;
struct gk20a_clk {int parent_rate; TYPE_3__ base; struct gk20a_clk_pllg_params const* params; } ;
struct TYPE_5__ {int pstate; int list; } ;
struct TYPE_4__ {struct nvkm_device_tegra* (* tegra ) (struct nvkm_device*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_clk_func const*,struct nvkm_device*,int,int,TYPE_3__*) ;
 int FUNC_3 (int *,char*,int) ;
 struct nvkm_device_tegra* FUNC_4 (struct nvkm_device*) ;

int
FUNC_5(struct nvkm_device *VAR_1, int VAR_2,
  const struct nvkm_clk_func *VAR_3,
  const struct gk20a_clk_pllg_params *VAR_4,
  struct gk20a_clk *VAR_5)
{
 struct nvkm_device_tegra *VAR_6 = VAR_1->func->tegra(VAR_1);
 int VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_3->nr_pstates; VAR_8++) {
  FUNC_0(&VAR_3->pstates[VAR_8].list);
  VAR_3->pstates[VAR_8].pstate = VAR_8 + 1;
 }

 VAR_5->params = VAR_4;
 VAR_5->parent_rate = FUNC_1(VAR_6->clk);

 VAR_7 = FUNC_2(VAR_3, VAR_1, VAR_2, 1, &VAR_5->base);
 if (VAR_7)
  return VAR_7;

 FUNC_3(&VAR_5->base.subdev, "parent clock rate: %d Khz\n",
     VAR_5->parent_rate / VAR_0);

 return 0;
}
