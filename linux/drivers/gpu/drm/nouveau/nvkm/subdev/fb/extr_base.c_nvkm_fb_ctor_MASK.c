
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int regions; } ;
struct nvkm_fb_func {int default_bigpage; TYPE_2__ tile; } ;
struct TYPE_3__ {int regions; } ;
struct nvkm_fb {struct nvkm_fb_func const* func; int page; TYPE_1__ tile; int subdev; } ;
struct nvkm_device {int cfgopt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int *) ;

void
FUNC_2(const struct nvkm_fb_func *VAR_1, struct nvkm_device *VAR_2,
      int VAR_3, struct nvkm_fb *VAR_4)
{
 FUNC_1(&VAR_0, VAR_2, VAR_3, &VAR_4->subdev);
 VAR_4->func = VAR_1;
 VAR_4->tile.regions = VAR_4->func->tile.regions;
 VAR_4->page = FUNC_0(VAR_2->cfgopt, "NvFbBigPage",
    VAR_4->func->default_bigpage);
}
