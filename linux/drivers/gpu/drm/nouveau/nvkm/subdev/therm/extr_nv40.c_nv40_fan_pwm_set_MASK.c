
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
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_therm *VAR_1, int VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_1->subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 if (VAR_2 == 2) {
  FUNC_1(VAR_6, 0x0010f0, 0x7fff7fff, (VAR_4 << 16) | VAR_3);
 } else
 if (VAR_2 == 9) {
  FUNC_2(VAR_6, 0x0015f8, VAR_3);
  FUNC_1(VAR_6, 0x0015f4, 0x7fffffff, VAR_4);
 } else {
  FUNC_0(VAR_5, "unknown pwm ctrl for gpio %d\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
