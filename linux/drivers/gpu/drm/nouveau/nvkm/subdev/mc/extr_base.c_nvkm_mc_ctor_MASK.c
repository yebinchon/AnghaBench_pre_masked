
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_mc_func {int dummy; } ;
struct nvkm_mc {struct nvkm_mc_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nvkm_device*,int,int *) ;

void
FUNC_1(const struct nvkm_mc_func *VAR_1, struct nvkm_device *VAR_2,
      int VAR_3, struct nvkm_mc *VAR_4)
{
 FUNC_0(&VAR_0, VAR_2, VAR_3, &VAR_4->subdev);
 VAR_4->func = VAR_1;
}
