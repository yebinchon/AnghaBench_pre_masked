
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_pm {TYPE_2__ engine; } ;
struct nvkm_perfdom {int mode; scalar_t__ addr; } ;
struct nvkm_perfctr {int logic_op; int* signal; int slot; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_pm *VAR_0, struct nvkm_perfdom *VAR_1,
     struct nvkm_perfctr *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->engine.subdev.device;
 u32 VAR_4 = VAR_2->logic_op;
 u32 VAR_5 = 0x00000000;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
  VAR_5 |= VAR_2->signal[VAR_6] << (VAR_6 * 8);

 FUNC_0(VAR_3, VAR_1->addr + 0x09c, 0x00040002 | (VAR_1->mode << 3));
 FUNC_0(VAR_3, VAR_1->addr + 0x100, 0x00000000);
 FUNC_0(VAR_3, VAR_1->addr + 0x040 + (VAR_2->slot * 0x08), VAR_5);
 FUNC_0(VAR_3, VAR_1->addr + 0x044 + (VAR_2->slot * 0x08), VAR_4);
}
