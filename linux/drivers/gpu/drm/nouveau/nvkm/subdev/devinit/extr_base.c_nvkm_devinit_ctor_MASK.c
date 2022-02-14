
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_devinit_func {int dummy; } ;
struct nvkm_devinit {int force_post; struct nvkm_devinit_func const* func; int subdev; } ;
struct nvkm_device {int cfgopt; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int *) ;

void
FUNC_2(const struct nvkm_devinit_func *VAR_1,
    struct nvkm_device *VAR_2, int VAR_3,
    struct nvkm_devinit *VAR_4)
{
 FUNC_1(&VAR_0, VAR_2, VAR_3, &VAR_4->subdev);
 VAR_4->func = VAR_1;
 VAR_4->force_post = FUNC_0(VAR_2->cfgopt, "NvForcePost", 0);
}
