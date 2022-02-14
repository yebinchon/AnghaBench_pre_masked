
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_disp {TYPE_2__ engine; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nvkm_disp*,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

int
FUNC_2(struct nvkm_disp *VAR_1, int VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->engine.subdev.device;
 if (!(FUNC_1(VAR_3, 0x610060) & (0x00000001 << VAR_2)))
  return 0;
 return FUNC_0(&VAR_0, VAR_1, VAR_2);
}
