
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device_tegra {int gpu_speedo; int vdd; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct TYPE_6__ {int vid_nr; TYPE_2__* vid; int subdev; } ;
struct gk20a_volt {TYPE_3__ base; int vdd; } ;
struct cvb_coef {int dummy; } ;
struct TYPE_5__ {int vid; int uv; } ;
struct TYPE_4__ {struct nvkm_device_tegra* (* tegra ) (struct nvkm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cvb_coef const*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,struct nvkm_device*,int,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 struct nvkm_device_tegra* FUNC_5 (struct nvkm_device*) ;

int
FUNC_6(struct nvkm_device *VAR_1, int VAR_2,
  const struct cvb_coef *VAR_3, int VAR_4,
  int VAR_5, struct gk20a_volt *VAR_6)
{
 struct nvkm_device_tegra *VAR_7 = VAR_1->func->tegra(VAR_1);
 int VAR_8, VAR_9;

 FUNC_3(&VAR_0, VAR_1, VAR_2, &VAR_6->base);

 VAR_9 = FUNC_4(VAR_7->vdd);
 FUNC_2(&VAR_6->base.subdev, "the default voltage is %duV\n", VAR_9);

 VAR_6->vdd = VAR_7->vdd;

 VAR_6->base.vid_nr = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_6->base.vid_nr; VAR_8++) {
  VAR_6->base.vid[VAR_8].vid = VAR_8;
  VAR_6->base.vid[VAR_8].uv = FUNC_1(
   FUNC_0(&VAR_3[VAR_8], VAR_7->gpu_speedo),
   VAR_5);
  FUNC_2(&VAR_6->base.subdev, "%2d: vid=%d, uv=%d\n", VAR_8,
      VAR_6->base.vid[VAR_8].vid, VAR_6->base.vid[VAR_8].uv);
 }

 return 0;
}
