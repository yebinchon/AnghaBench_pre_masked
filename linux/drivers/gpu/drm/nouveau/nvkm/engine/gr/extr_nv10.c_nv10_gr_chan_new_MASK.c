
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_fifo_chan {int chid; } ;
struct nvkm_device {scalar_t__ card_type; int chipset; } ;
struct nv10_gr_chan {int chid; struct nvkm_object object; struct nv10_gr* gr; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {int lock; struct nv10_gr_chan** chan; TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,int) ;
 struct nv10_gr_chan* FUNC_2 (int,int ) ;
 struct nv10_gr* FUNC_3 (struct nvkm_gr*) ;
 int VAR_6 ;
 int FUNC_4 (struct nv10_gr_chan*) ;
 int FUNC_5 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int
FUNC_9(struct nvkm_gr *VAR_7, struct nvkm_fifo_chan *VAR_8,
   const struct nvkm_oclass *VAR_9, struct nvkm_object **VAR_10)
{
 struct nv10_gr *VAR_11 = FUNC_3(VAR_7);
 struct nv10_gr_chan *VAR_12;
 struct nvkm_device *VAR_13 = VAR_11->base.engine.subdev.device;
 unsigned long VAR_14;

 if (!(VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1)))
  return -VAR_0;
 FUNC_5(&VAR_6, VAR_9, &VAR_12->object);
 VAR_12->gr = VAR_11;
 VAR_12->chid = VAR_8->chid;
 *VAR_10 = &VAR_12->object;

 FUNC_1(0x00400e88, 0x08000000);
 FUNC_1(0x00400e9c, 0x4b7fffff);
 FUNC_1(VAR_2, 0x0001ffff);
 FUNC_1(0x00400e10, 0x00001000);
 FUNC_1(0x00400e14, 0x00001000);
 FUNC_1(0x00400e30, 0x00080008);
 FUNC_1(0x00400e34, 0x00080008);
 if (VAR_13->card_type >= VAR_5 && VAR_13->chipset >= 0x17) {

  FUNC_0(VAR_4,
          FUNC_6(VAR_13, VAR_4));
  FUNC_0(0x004006b0, FUNC_6(VAR_13, 0x004006b0));
  FUNC_0(0x00400eac, 0x0fff0000);
  FUNC_0(0x00400eb0, 0x0fff0000);
  FUNC_0(0x00400ec0, 0x00000080);
  FUNC_0(0x00400ed0, 0x00000080);
 }
 FUNC_1(VAR_3, VAR_12->chid << 24);

 FUNC_4(VAR_12);

 FUNC_7(&VAR_11->lock, VAR_14);
 VAR_11->chan[VAR_12->chid] = VAR_12;
 FUNC_8(&VAR_11->lock, VAR_14);
 return 0;
}
