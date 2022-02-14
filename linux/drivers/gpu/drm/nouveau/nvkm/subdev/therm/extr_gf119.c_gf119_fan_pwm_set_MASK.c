
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;
 int FUNC_2 (struct nvkm_therm*,int) ;

int
FUNC_3(struct nvkm_therm *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->subdev.device;
 int VAR_5 = FUNC_2(VAR_0, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 else if (VAR_5 < 2) {
  FUNC_1(VAR_4, 0x00e114 + (VAR_5 * 8), VAR_2);
  FUNC_1(VAR_4, 0x00e118 + (VAR_5 * 8), VAR_3 | 0x80000000);
 } else if (VAR_5 == 2) {
  FUNC_0(VAR_4, 0x0200d8, 0x1fff, VAR_2);
  FUNC_1(VAR_4, 0x0200dc, VAR_3 | 0x40000000);
 }
 return 0;
}
