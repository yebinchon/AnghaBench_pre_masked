
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;

 FUNC_1(VAR_1, 0x1200a8, 0x0);


 FUNC_1(VAR_1, 0x12004c, 0x4);
 FUNC_1(VAR_1, 0x122204, 0x2);
 FUNC_0(VAR_1, 0x122204);


 FUNC_1(VAR_1, 0x009080, 0x800186a0);

 return 0;
}
