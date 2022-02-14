
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
 u32 VAR_4 = FUNC_0(VAR_3, 0x00dc00);
 u32 VAR_5 = FUNC_0(VAR_3, 0x00dc80);
 u32 VAR_6 = FUNC_0(VAR_3, 0x00dc08) & VAR_4;
 u32 VAR_7 = FUNC_0(VAR_3, 0x00dc88) & VAR_5;
 *VAR_2 = (VAR_7 & 0xffff0000) | (VAR_6 >> 16);
 *VAR_1 = (VAR_7 << 16) | (VAR_6 & 0x0000ffff);
 FUNC_1(VAR_3, 0x00dc00, VAR_4);
 FUNC_1(VAR_3, 0x00dc80, VAR_5);
}
