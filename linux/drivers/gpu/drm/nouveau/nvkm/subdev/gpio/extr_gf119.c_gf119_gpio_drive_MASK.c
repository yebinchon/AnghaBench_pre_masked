
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

int
FUNC_1(struct nvkm_gpio *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->subdev.device;
 u32 VAR_5 = ((VAR_2 ^ 1) << 13) | (VAR_3 << 12);
 FUNC_0(VAR_4, 0x00d610 + (VAR_1 * 4), 0x00003000, VAR_5);
 FUNC_0(VAR_4, 0x00d604, 0x00000001, 0x00000001);
 return 0;
}
