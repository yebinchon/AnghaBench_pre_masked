
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_10__ {TYPE_3__* client; } ;
struct nvkm_fifo_chan {TYPE_4__ object; TYPE_2__* inst; } ;
struct nvkm_device {scalar_t__ sw; } ;
struct TYPE_7__ {struct nvkm_subdev subdev; } ;
struct TYPE_11__ {TYPE_1__ engine; } ;
struct gk104_fifo {TYPE_5__ base; } ;
typedef int msg ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,int,char*,int,int ,char*,int,int,int) ;
 struct nvkm_fifo_chan* FUNC_1 (TYPE_5__*,int,unsigned long*) ;
 int FUNC_2 (TYPE_5__*,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (char*,int,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int,int,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct gk104_fifo *VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_3(VAR_4, 0x04010c + (VAR_2 * 0x2000));
 u32 VAR_6 = FUNC_3(VAR_4, 0x040108 + (VAR_2 * 0x2000)) & VAR_5;
 u32 VAR_7 = FUNC_3(VAR_4, 0x0400c0 + (VAR_2 * 0x2000));
 u32 VAR_8 = FUNC_3(VAR_4, 0x0400c4 + (VAR_2 * 0x2000));
 u32 VAR_9 = FUNC_3(VAR_4, 0x040120 + (VAR_2 * 0x2000)) & 0xfff;
 u32 VAR_10 = (VAR_7 & 0x00070000) >> 16;
 u32 VAR_11 = (VAR_7 & 0x00003ffc);
 u32 VAR_12 = VAR_6;
 struct nvkm_fifo_chan *VAR_13;
 unsigned long VAR_14;
 char VAR_15[128];

 if (VAR_6 & 0x00800000) {
  if (VAR_4->sw) {
   if (FUNC_5(VAR_4->sw, VAR_9, VAR_10, VAR_11, VAR_8))
    VAR_12 &= ~0x00800000;
  }
 }

 FUNC_6(VAR_4, 0x0400c0 + (VAR_2 * 0x2000), 0x80600008);

 if (VAR_12) {
  FUNC_4(VAR_15, sizeof(VAR_15), VAR_0, VAR_12);
  VAR_13 = FUNC_1(&VAR_1->base, VAR_9, &VAR_14);
  FUNC_0(VAR_3, "PBDMA%d: %08x [%s] ch %d [%010llx %s] "
       "subc %d mthd %04x data %08x\n",
      VAR_2, VAR_12, VAR_15, VAR_9, VAR_13 ? VAR_13->inst->addr : 0,
      VAR_13 ? VAR_13->object.client->name : "unknown",
      VAR_10, VAR_11, VAR_8);
  FUNC_2(&VAR_1->base, VAR_14, &VAR_13);
 }

 FUNC_6(VAR_4, 0x040108 + (VAR_2 * 0x2000), VAR_6);
}
