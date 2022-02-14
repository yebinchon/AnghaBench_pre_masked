
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_device_tegra {scalar_t__ gpu_speedo_id; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct nvkm_clk {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {int parent_rate; int div_to_pl; int pl_to_div; struct nvkm_clk base; } ;
struct gm20b_clk {int * dvfs_params; TYPE_2__ base; } ;
struct gk20a_clk_pllg_params {scalar_t__ max_m; scalar_t__ min_m; int max_u; } ;
struct TYPE_3__ {struct nvkm_device_tegra* (* tegra ) (struct nvkm_device*) ;} ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nvkm_device*,int,int *,struct gk20a_clk_pllg_params*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (struct gm20b_clk*) ;
 int FUNC_3 (struct gm20b_clk*) ;
 int FUNC_4 (struct nvkm_device*,int,struct nvkm_clk**) ;
 int VAR_5 ;
 struct gk20a_clk_pllg_params VAR_6 ;
 int FUNC_5 (struct gm20b_clk*) ;
 struct gm20b_clk* FUNC_6 (int,int ) ;
 int FUNC_7 (struct nvkm_subdev*,char*) ;
 int VAR_7 ;
 struct nvkm_device_tegra* FUNC_8 (struct nvkm_device*) ;

int
FUNC_9(struct nvkm_device *VAR_8, int VAR_9, struct nvkm_clk **VAR_10)
{
 struct nvkm_device_tegra *VAR_11 = VAR_8->func->tegra(VAR_8);
 struct gm20b_clk *VAR_12;
 struct nvkm_subdev *VAR_13;
 struct gk20a_clk_pllg_params *VAR_14;
 int VAR_15;


 if (VAR_11->gpu_speedo_id == 0)
  return FUNC_4(VAR_8, VAR_9, VAR_10);


 VAR_12 = FUNC_6(sizeof(*VAR_12) + sizeof(*VAR_14), VAR_1);
 if (!VAR_12)
  return -VAR_0;
 *VAR_10 = &VAR_12->base.base;
 VAR_13 = &VAR_12->base.base.subdev;


 VAR_14 = (void *) (VAR_12 + 1);
 *VAR_14 = VAR_6;
 VAR_15 = FUNC_1(VAR_8, VAR_9, &VAR_4, VAR_14,
        &VAR_12->base);
 if (VAR_15)
  return VAR_15;





 VAR_14->max_m = VAR_14->min_m = FUNC_0(VAR_14->max_u,
      (VAR_12->base.parent_rate / VAR_2));
 if (VAR_14->max_m == 0) {
  FUNC_7(VAR_13, "cannot use NAPLL, using legacy clock...\n");
  FUNC_5(VAR_12);
  return FUNC_4(VAR_8, VAR_9, VAR_10);
 }

 VAR_12->base.pl_to_div = VAR_7;
 VAR_12->base.div_to_pl = VAR_3;

 VAR_12->dvfs_params = &VAR_5;

 VAR_15 = FUNC_2(VAR_12);




 if (VAR_15)
  FUNC_7(VAR_13, "no fused calibration parameters\n");

 VAR_15 = FUNC_3(VAR_12);
 if (VAR_15)
  return VAR_15;

 return 0;
}
