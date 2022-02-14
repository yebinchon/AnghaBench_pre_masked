
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_therm *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 struct nvkm_subdev *VAR_3 = &VAR_1->subdev;
 u32 VAR_4 = FUNC_0(VAR_2, 0x020460);
 u32 VAR_5 = (VAR_4 & 0x0001fff8);


 if (VAR_4 & 0x40000000)
  FUNC_1(VAR_3, "reading temperature from SHADOWed sensor\n");


 if (VAR_4 & 0x20000000)
  return (VAR_5 >> 8);
 else
  return -VAR_0;
}
