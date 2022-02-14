
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
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* client; } ;
struct nv04_gr_chan {TYPE_4__ object; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct nv04_gr {int lock; struct nv04_gr_chan** chan; TYPE_2__ base; } ;
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
 struct nv04_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct nv04_gr*) ;
 int VAR_9 ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct nvkm_subdev*,char*,int,char*,int,char*,int,char*,int,char*,int,int,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (char*,int,int ,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct nvkm_gr *VAR_12)
{
 struct nv04_gr *VAR_13 = FUNC_0(VAR_12);
 struct nvkm_subdev *VAR_14 = &VAR_13->base.engine.subdev;
 struct nvkm_device *VAR_15 = VAR_14->device;
 u32 VAR_16 = FUNC_4(VAR_15, VAR_0);
 u32 VAR_17 = FUNC_4(VAR_15, VAR_1);
 u32 VAR_18 = FUNC_4(VAR_15, VAR_3);
 u32 VAR_19 = FUNC_4(VAR_15, VAR_5);
 u32 VAR_20 = (VAR_19 & 0x0f000000) >> 24;
 u32 VAR_21 = (VAR_19 & 0x0000e000) >> 13;
 u32 VAR_22 = (VAR_19 & 0x00001ffc);
 u32 VAR_23 = FUNC_4(VAR_15, VAR_6);
 u32 VAR_24 = FUNC_4(VAR_15, 0x400180 + VAR_21 * 4) & 0xff;
 u32 VAR_25 = (FUNC_4(VAR_15, 0x40016c) & 0xffff) << 4;
 u32 VAR_26 = VAR_16;
 char VAR_27[128], VAR_28[128], VAR_29[128];
 struct nv04_gr_chan *VAR_30;
 unsigned long VAR_31;

 FUNC_7(&VAR_13->lock, VAR_31);
 VAR_30 = VAR_13->chan[VAR_20];

 if (VAR_16 & VAR_8) {
  if (VAR_30 && (VAR_17 & VAR_2)) {
   if (!FUNC_2(VAR_15, VAR_25, VAR_22, VAR_23))
    VAR_26 &= ~VAR_8;
  }
 }

 if (VAR_16 & VAR_7) {
  FUNC_6(VAR_15, VAR_0, VAR_7);
  VAR_16 &= ~VAR_7;
  VAR_26 &= ~VAR_7;
  FUNC_1(VAR_13);
 }

 FUNC_6(VAR_15, VAR_0, VAR_16);
 FUNC_6(VAR_15, VAR_4, 0x00000001);

 if (VAR_26) {
  FUNC_5(VAR_27, sizeof(VAR_27), VAR_9, VAR_26);
  FUNC_5(VAR_28, sizeof(VAR_28), VAR_10, VAR_17);
  FUNC_5(VAR_29, sizeof(VAR_29), VAR_11, VAR_18);
  FUNC_3(VAR_14, "intr %08x [%s] nsource %08x [%s] "
       "nstatus %08x [%s] ch %d [%s] subc %d "
       "class %04x mthd %04x data %08x\n",
      VAR_26, VAR_27, VAR_17, VAR_28, VAR_18, VAR_29, VAR_20,
      VAR_30 ? VAR_30->object.client->name : "unknown",
      VAR_21, VAR_24, VAR_22, VAR_23);
 }

 FUNC_8(&VAR_13->lock, VAR_31);
}
