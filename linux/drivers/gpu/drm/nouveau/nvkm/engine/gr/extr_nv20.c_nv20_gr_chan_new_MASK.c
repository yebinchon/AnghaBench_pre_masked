
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
struct nv20_gr_chan {int chid; int inst; struct nvkm_object object; struct nv20_gr* gr; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv20_gr {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nv20_gr_chan* FUNC_0 (int,int ) ;
 struct nv20_gr* FUNC_1 (struct nvkm_gr*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int,int,int *) ;
 int FUNC_5 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_gr *VAR_4, struct nvkm_fifo_chan *VAR_5,
   const struct nvkm_oclass *VAR_6, struct nvkm_object **VAR_7)
{
 struct nv20_gr *VAR_8 = FUNC_1(VAR_4);
 struct nv20_gr_chan *VAR_9;
 int VAR_10, VAR_11;

 if (!(VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 FUNC_5(&VAR_3, VAR_6, &VAR_9->object);
 VAR_9->gr = VAR_8;
 VAR_9->chid = VAR_5->chid;
 *VAR_7 = &VAR_9->object;

 VAR_10 = FUNC_4(VAR_8->base.engine.subdev.device,
         VAR_2, 0x37f0, 16, 1,
         &VAR_9->inst);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_9->inst);
 FUNC_6(VAR_9->inst, 0x0000, 0x00000001 | (VAR_9->chid << 24));
 FUNC_6(VAR_9->inst, 0x033c, 0xffff0000);
 FUNC_6(VAR_9->inst, 0x03a0, 0x0fff0000);
 FUNC_6(VAR_9->inst, 0x03a4, 0x0fff0000);
 FUNC_6(VAR_9->inst, 0x047c, 0x00000101);
 FUNC_6(VAR_9->inst, 0x0490, 0x00000111);
 FUNC_6(VAR_9->inst, 0x04a8, 0x44400000);
 for (VAR_11 = 0x04d4; VAR_11 <= 0x04e0; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00030303);
 for (VAR_11 = 0x04f4; VAR_11 <= 0x0500; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00080000);
 for (VAR_11 = 0x050c; VAR_11 <= 0x0518; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x01012000);
 for (VAR_11 = 0x051c; VAR_11 <= 0x0528; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x000105b8);
 for (VAR_11 = 0x052c; VAR_11 <= 0x0538; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00080008);
 for (VAR_11 = 0x055c; VAR_11 <= 0x0598; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x07ff0000);
 FUNC_6(VAR_9->inst, 0x05a4, 0x4b7fffff);
 FUNC_6(VAR_9->inst, 0x05fc, 0x00000001);
 FUNC_6(VAR_9->inst, 0x0604, 0x00004000);
 FUNC_6(VAR_9->inst, 0x0610, 0x00000001);
 FUNC_6(VAR_9->inst, 0x0618, 0x00040000);
 FUNC_6(VAR_9->inst, 0x061c, 0x00010000);
 for (VAR_11 = 0x1c1c; VAR_11 <= 0x248c; VAR_11 += 16) {
  FUNC_6(VAR_9->inst, (VAR_11 + 0), 0x10700ff9);
  FUNC_6(VAR_9->inst, (VAR_11 + 4), 0x0436086c);
  FUNC_6(VAR_9->inst, (VAR_11 + 8), 0x000c001b);
 }
 FUNC_6(VAR_9->inst, 0x281c, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x2830, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x285c, 0x40000000);
 FUNC_6(VAR_9->inst, 0x2860, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x2864, 0x3f000000);
 FUNC_6(VAR_9->inst, 0x286c, 0x40000000);
 FUNC_6(VAR_9->inst, 0x2870, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x2878, 0xbf800000);
 FUNC_6(VAR_9->inst, 0x2880, 0xbf800000);
 FUNC_6(VAR_9->inst, 0x34a4, 0x000fe000);
 FUNC_6(VAR_9->inst, 0x3530, 0x000003f8);
 FUNC_6(VAR_9->inst, 0x3540, 0x002fe000);
 for (VAR_11 = 0x355c; VAR_11 <= 0x3578; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x001c527c);
 FUNC_2(VAR_9->inst);
 return 0;
}
