
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_3__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_1__ base; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,int,char*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct gk104_fifo *VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_1(VAR_4, 0x04014c + (VAR_2 * 0x2000));
 u32 VAR_6 = FUNC_1(VAR_4, 0x040148 + (VAR_2 * 0x2000)) & VAR_5;
 u32 VAR_7 = FUNC_1(VAR_4, 0x040120 + (VAR_2 * 0x2000)) & 0xfff;
 char VAR_8[128];

 if (VAR_6) {
  FUNC_2(VAR_8, sizeof(VAR_8), VAR_0, VAR_6);
  FUNC_0(VAR_3, "PBDMA%d: %08x [%s] ch %d %08x %08x\n",
      VAR_2, VAR_6, VAR_8, VAR_7,
      FUNC_1(VAR_4, 0x040150 + (VAR_2 * 0x2000)),
      FUNC_1(VAR_4, 0x040154 + (VAR_2 * 0x2000)));
 }

 FUNC_3(VAR_4, 0x040148 + (VAR_2 * 0x2000), VAR_6);
}
