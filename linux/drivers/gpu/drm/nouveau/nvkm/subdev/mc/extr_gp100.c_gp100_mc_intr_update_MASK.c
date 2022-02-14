
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gp100_mc {int mask; scalar_t__ intr; TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gp100_mc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.subdev.device;
 u32 VAR_2 = VAR_0->intr ? VAR_0->mask : 0, VAR_3;
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_0(VAR_1, 0x000180 + (VAR_3 * 0x04), ~VAR_2);
  FUNC_0(VAR_1, 0x000160 + (VAR_3 * 0x04), VAR_2);
 }
}
