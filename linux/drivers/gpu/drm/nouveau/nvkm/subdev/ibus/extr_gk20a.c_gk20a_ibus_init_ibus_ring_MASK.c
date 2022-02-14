
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_subdev *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 FUNC_0(VAR_1, 0x137250, 0x3f, 0);

 FUNC_0(VAR_1, 0x000200, 0x20, 0);
 FUNC_3(20);
 FUNC_0(VAR_1, 0x000200, 0x20, 0x20);

 FUNC_2(VAR_1, 0x12004c, 0x4);
 FUNC_2(VAR_1, 0x122204, 0x2);
 FUNC_1(VAR_1, 0x122204);





 FUNC_2(VAR_1, 0x122354, 0x800);
 FUNC_2(VAR_1, 0x128328, 0x800);
 FUNC_2(VAR_1, 0x124320, 0x800);
}
