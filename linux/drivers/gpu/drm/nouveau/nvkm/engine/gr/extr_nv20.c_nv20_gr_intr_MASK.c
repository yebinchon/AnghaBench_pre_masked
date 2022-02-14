
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_gr {int dummy; } ;
struct TYPE_8__ {TYPE_3__* client; } ;
struct nvkm_fifo_chan {TYPE_4__ object; } ;
struct nvkm_device {int fifo; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct nv20_gr {TYPE_2__ base; } ;
typedef int sta ;
typedef int src ;
typedef int msg ;
struct TYPE_7__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nv20_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,char*,int,char*,int,char*,int,char*,int,int,int,int) ;
 struct nvkm_fifo_chan* FUNC_2 (int ,int,unsigned long*) ;
 int FUNC_3 (int ,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (char*,int,int ,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;

void
FUNC_7(struct nvkm_gr *VAR_9)
{
 struct nv20_gr *VAR_10 = FUNC_0(VAR_9);
 struct nvkm_subdev *VAR_11 = &VAR_10->base.engine.subdev;
 struct nvkm_device *VAR_12 = VAR_11->device;
 struct nvkm_fifo_chan *VAR_13;
 u32 VAR_14 = FUNC_4(VAR_12, VAR_0);
 u32 VAR_15 = FUNC_4(VAR_12, VAR_1);
 u32 VAR_16 = FUNC_4(VAR_12, VAR_2);
 u32 VAR_17 = FUNC_4(VAR_12, VAR_4);
 u32 VAR_18 = (VAR_17 & 0x01f00000) >> 20;
 u32 VAR_19 = (VAR_17 & 0x00070000) >> 16;
 u32 VAR_20 = (VAR_17 & 0x00001ffc);
 u32 VAR_21 = FUNC_4(VAR_12, VAR_5);
 u32 VAR_22 = FUNC_4(VAR_12, 0x400160 + VAR_19 * 4) & 0xfff;
 u32 VAR_23 = VAR_14;
 char VAR_24[128], VAR_25[128], VAR_26[128];
 unsigned long VAR_27;

 VAR_13 = FUNC_2(VAR_12->fifo, VAR_18, &VAR_27);

 FUNC_6(VAR_12, VAR_0, VAR_14);
 FUNC_6(VAR_12, VAR_3, 0x00000001);

 if (VAR_23) {
  FUNC_5(VAR_24, sizeof(VAR_24), VAR_7, VAR_23);
  FUNC_5(VAR_25, sizeof(VAR_25), VAR_6, VAR_15);
  FUNC_5(VAR_26, sizeof(VAR_26), VAR_8, VAR_16);
  FUNC_1(VAR_11, "intr %08x [%s] nsource %08x [%s] "
       "nstatus %08x [%s] ch %d [%s] subc %d "
       "class %04x mthd %04x data %08x\n",
      VAR_23, VAR_24, VAR_15, VAR_25, VAR_16, VAR_26, VAR_18,
      VAR_13 ? VAR_13->object.client->name : "unknown",
      VAR_19, VAR_22, VAR_20, VAR_21);
 }

 FUNC_3(VAR_12->fifo, VAR_27, &VAR_13);
}
