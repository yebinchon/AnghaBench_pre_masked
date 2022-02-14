
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;
 int FUNC_1 (struct nvkm_therm*,int*,int*,int*) ;

int
FUNC_2(struct nvkm_therm *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->subdev.device;
 int VAR_5, VAR_6, VAR_7 = FUNC_1(VAR_0, &VAR_1, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4, 0x00e114 + (VAR_6 * 8), VAR_2);
 FUNC_0(VAR_4, 0x00e118 + (VAR_6 * 8), VAR_3 | 0x80000000);
 return 0;
}
