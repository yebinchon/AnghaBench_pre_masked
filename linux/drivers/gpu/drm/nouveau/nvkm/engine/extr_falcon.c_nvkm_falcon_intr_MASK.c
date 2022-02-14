
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct nvkm_falcon {int addr; TYPE_2__* func; TYPE_1__ engine; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int fifo; } ;
struct TYPE_4__ {int (* intr ) (struct nvkm_falcon*,struct nvkm_fifo_chan*) ;} ;


 int FUNC_0 (struct nvkm_subdev*,char*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 struct nvkm_falcon* FUNC_2 (struct nvkm_engine*) ;
 struct nvkm_fifo_chan* FUNC_3 (int ,int,unsigned long*) ;
 int FUNC_4 (int ,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_5 (struct nvkm_device*,int const) ;
 int FUNC_6 (struct nvkm_device*,int const,int) ;
 int FUNC_7 (struct nvkm_falcon*,struct nvkm_fifo_chan*) ;

__attribute__((used)) static void
FUNC_8(struct nvkm_engine *VAR_0)
{
 struct nvkm_falcon *VAR_1 = FUNC_2(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 const u32 VAR_4 = VAR_1->addr;
 u32 VAR_5 = FUNC_5(VAR_3, VAR_4 + 0x01c);
 u32 VAR_6 = FUNC_5(VAR_3, VAR_4 + 0x008) & VAR_5 & ~(VAR_5 >> 16);
 u32 VAR_7 = FUNC_5(VAR_3, VAR_4 + 0x050) & 0x3fffffff;
 struct nvkm_fifo_chan *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_3(VAR_3->fifo, (u64)VAR_7 << 12, &VAR_9);

 if (VAR_6 & 0x00000040) {
  if (VAR_1->func->intr) {
   VAR_1->func->intr(VAR_1, VAR_8);
   FUNC_6(VAR_3, VAR_4 + 0x004, 0x00000040);
   VAR_6 &= ~0x00000040;
  }
 }

 if (VAR_6 & 0x00000010) {
  FUNC_0(VAR_2, "ucode halted\n");
  FUNC_6(VAR_3, VAR_4 + 0x004, 0x00000010);
  VAR_6 &= ~0x00000010;
 }

 if (VAR_6) {
  FUNC_1(VAR_2, "intr %08x\n", VAR_6);
  FUNC_6(VAR_3, VAR_4 + 0x004, VAR_6);
 }

 FUNC_4(VAR_3->fifo, VAR_9, &VAR_8);
}
