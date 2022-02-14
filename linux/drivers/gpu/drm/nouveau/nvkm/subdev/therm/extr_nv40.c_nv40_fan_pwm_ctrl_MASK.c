
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_therm *VAR_1, int VAR_2, bool VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = VAR_3 ? 0x80000000 : 0x00000000;
 if (VAR_2 == 2) FUNC_1(VAR_5, 0x0010f0, 0x80000000, VAR_6);
 else if (VAR_2 == 9) FUNC_1(VAR_5, 0x0015f4, 0x80000000, VAR_6);
 else {
  FUNC_0(VAR_4, "unknown pwm ctrl for gpio %d\n", VAR_2);
  return -VAR_0;
 }
 return 0;
}
