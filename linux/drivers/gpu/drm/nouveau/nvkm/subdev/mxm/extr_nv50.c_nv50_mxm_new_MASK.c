
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_mxm {int action; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_mxm*) ;
 int FUNC_1 (struct nvkm_device*,int,struct nvkm_mxm**) ;

int
FUNC_2(struct nvkm_device *VAR_1, int VAR_2, struct nvkm_subdev **VAR_3)
{
 struct nvkm_mxm *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (VAR_4)
  *VAR_3 = &VAR_4->subdev;
 if (VAR_5)
  return VAR_5;

 if (VAR_4->action & VAR_0)
  FUNC_0(VAR_4);

 return 0;
}
