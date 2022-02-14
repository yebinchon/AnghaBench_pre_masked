
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int crystal; } ;


 int FUNC_0 (struct nvkm_therm*,int) ;

int
FUNC_1(struct nvkm_therm *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 int VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return 0;
 else if (VAR_3 < 2)
  return (VAR_2->crystal * 1000) / 20;
 else
  return VAR_2->crystal * 1000 / 10;
}
