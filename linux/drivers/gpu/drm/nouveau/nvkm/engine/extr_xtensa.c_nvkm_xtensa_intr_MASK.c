
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct nvkm_xtensa {int addr; TYPE_2__* func; TYPE_1__ engine; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {int fifo_val; } ;


 int FUNC_0 (struct nvkm_subdev*,char*) ;
 int FUNC_1 (struct nvkm_device*,int,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int const) ;
 int FUNC_3 (struct nvkm_subdev*,char*) ;
 int FUNC_4 (struct nvkm_device*,int const,int) ;
 struct nvkm_xtensa* FUNC_5 (struct nvkm_engine*) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_engine *VAR_0)
{
 struct nvkm_xtensa *VAR_1 = FUNC_5(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 const u32 VAR_4 = VAR_1->addr;
 u32 VAR_5 = FUNC_2(VAR_3, VAR_4 + 0xd04);
 u32 VAR_6 = FUNC_2(VAR_3, VAR_4 + 0xc20);
 u32 VAR_7 = FUNC_2(VAR_3, VAR_4 + 0xc28);
 u32 VAR_8 = FUNC_2(VAR_3, VAR_4 + 0xd0c);

 if (VAR_6 & 0x10)
  FUNC_3(VAR_2, "Watchdog interrupt, engine hung.\n");
 FUNC_4(VAR_3, VAR_4 + 0xc20, VAR_6);
 VAR_6 = FUNC_2(VAR_3, VAR_4 + 0xc20);
 if (VAR_5 == 0x10001 && VAR_8 == 0x200 && VAR_7 && !VAR_6) {
  FUNC_0(VAR_2, "Enabling FIFO_CTRL\n");
  FUNC_1(VAR_3, VAR_1->addr + 0xd94, 0, VAR_1->func->fifo_val);
 }
}
