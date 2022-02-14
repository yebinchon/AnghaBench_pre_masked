
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_gpio *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 u32 VAR_4 = FUNC_0(VAR_3, 0x00e054);
 u32 VAR_5 = FUNC_0(VAR_3, 0x00e050) & VAR_4;
 *VAR_2 = (VAR_5 & 0xffff0000) >> 16;
 *VAR_1 = (VAR_5 & 0x0000ffff);
 FUNC_1(VAR_3, 0x00e054, VAR_4);
}
