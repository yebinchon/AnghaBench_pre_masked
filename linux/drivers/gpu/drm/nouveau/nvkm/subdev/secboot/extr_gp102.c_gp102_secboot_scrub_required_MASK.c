
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_secboot {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static bool
FUNC_3(struct nvkm_secboot *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3;

 FUNC_2(VAR_2, 0x100cd0, 0x2);
 VAR_3 = FUNC_1(VAR_2, 0x100cd0);

 return (VAR_3 & FUNC_0(4));
}
