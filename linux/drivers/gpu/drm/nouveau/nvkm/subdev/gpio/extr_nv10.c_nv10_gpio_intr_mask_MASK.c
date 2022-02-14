
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_gpio *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_2->subdev.device;
 u32 VAR_7 = FUNC_0(VAR_6, 0x001144);
 if (VAR_3 & VAR_1)
  VAR_7 = (VAR_7 & ~(VAR_4 << 16)) | (VAR_5 << 16);
 if (VAR_3 & VAR_0)
  VAR_7 = (VAR_7 & ~VAR_4) | VAR_5;
 FUNC_1(VAR_6, 0x001144, VAR_7);
}
