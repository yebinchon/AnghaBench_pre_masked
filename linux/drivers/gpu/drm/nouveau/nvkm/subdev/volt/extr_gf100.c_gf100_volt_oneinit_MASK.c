
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_volt {scalar_t__ speedo; struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*) ;

int
FUNC_1(struct nvkm_volt *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 if (VAR_0->speedo <= 0)
  FUNC_0(VAR_1, "couldn't find speedo value, volting not "
      "possible\n");
 return 0;
}
