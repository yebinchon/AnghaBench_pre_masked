
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ram {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {int size; TYPE_2__* fb; } ;
struct mcp77_ram {int poller_base; TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 struct mcp77_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_ram *VAR_0)
{
 struct mcp77_ram *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.fb->subdev.device;
 u32 VAR_3 = ((VAR_1->base.size - (VAR_1->poller_base + 0x00)) >> 5) - 1;
 u32 VAR_4 = ((VAR_1->base.size - (VAR_1->poller_base + 0x20)) >> 5) - 1;
 u32 VAR_5 = ((VAR_1->base.size - (VAR_1->poller_base + 0x40)) >> 5) - 1;




 FUNC_2(VAR_2, 0x100c18, VAR_3);
 FUNC_1(VAR_2, 0x100c14, 0x00000000, 0x00000001);
 FUNC_2(VAR_2, 0x100c1c, VAR_4);
 FUNC_1(VAR_2, 0x100c14, 0x00000000, 0x00000002);
 FUNC_2(VAR_2, 0x100c24, VAR_5);
 FUNC_1(VAR_2, 0x100c14, 0x00000000, 0x00010000);
 return 0;
}
