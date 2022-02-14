
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_10__ {int lock; struct nvkm_subdev subdev; } ;
struct nv31_mpeg {TYPE_5__ engine; TYPE_4__* chan; } ;
struct TYPE_8__ {TYPE_2__* client; } ;
struct TYPE_9__ {TYPE_3__ object; TYPE_1__* fifo; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {int chid; } ;


 struct nv31_mpeg* FUNC_0 (struct nvkm_engine*) ;
 scalar_t__ FUNC_1 (struct nv31_mpeg*,int,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,char*,int,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct nvkm_engine *VAR_0)
{
 struct nv31_mpeg *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_4(VAR_3, 0x00b100);
 u32 VAR_5 = FUNC_4(VAR_3, 0x00b230);
 u32 VAR_6 = FUNC_4(VAR_3, 0x00b234);
 u32 VAR_7 = FUNC_4(VAR_3, 0x00b238);
 u32 VAR_8 = VAR_4;
 unsigned long VAR_9;

 FUNC_6(&VAR_1->engine.lock, VAR_9);

 if (VAR_4 & 0x01000000) {

  if (VAR_5 == 0x00000020 && VAR_6 == 0x0000) {
   FUNC_3(VAR_3, 0x00b308, 0x00000000, 0x00000000);
   VAR_8 &= ~0x01000000;
  }

  if (VAR_5 == 0x00000010) {
   if (FUNC_1(VAR_1, VAR_6, VAR_7))
    VAR_8 &= ~0x01000000;
  }
 }

 FUNC_5(VAR_3, 0x00b100, VAR_4);
 FUNC_5(VAR_3, 0x00b230, 0x00000001);

 if (VAR_8) {
  FUNC_2(VAR_2, "ch %d [%s] %08x %08x %08x %08x\n",
      VAR_1->chan ? VAR_1->chan->fifo->chid : -1,
      VAR_1->chan ? VAR_1->chan->object.client->name :
      "unknown", VAR_4, VAR_5, VAR_6, VAR_7);
 }

 FUNC_7(&VAR_1->engine.lock, VAR_9);
}
