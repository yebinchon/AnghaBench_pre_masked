
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_therm*,int*,int*,int*) ;

int
FUNC_2(struct nvkm_therm *VAR_1, int VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_1->subdev.device;
 int VAR_6, VAR_7, VAR_8 = FUNC_1(VAR_1, &VAR_2, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_0(VAR_5, VAR_6) & (1 << VAR_2)) {
  *VAR_3 = FUNC_0(VAR_5, 0x00e114 + (VAR_7 * 8));
  *VAR_4 = FUNC_0(VAR_5, 0x00e118 + (VAR_7 * 8));
  return 0;
 }

 return -VAR_0;
}
