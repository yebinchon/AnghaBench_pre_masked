
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 FUNC_0(VAR_1, 0x122310, 0x0003ffff, 0x00000800);
 FUNC_1(VAR_1, 0x12232c, 0x00100064);
 FUNC_1(VAR_1, 0x122330, 0x00100064);
 FUNC_1(VAR_1, 0x122334, 0x00100064);
 FUNC_0(VAR_1, 0x122348, 0x0003ffff, 0x00000100);
 return 0;
}
