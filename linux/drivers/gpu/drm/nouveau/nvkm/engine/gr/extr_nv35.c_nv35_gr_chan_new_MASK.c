
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
         VAR_2, 0x577c, 16, 1,
         &VAR_9->inst);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_9->inst);
 FUNC_6(VAR_9->inst, 0x0028, 0x00000001 | (VAR_9->chid << 24));
 FUNC_6(VAR_9->inst, 0x040c, 0x00000101);
 FUNC_6(VAR_9->inst, 0x0420, 0x00000111);
 FUNC_6(VAR_9->inst, 0x0424, 0x00000060);
 FUNC_6(VAR_9->inst, 0x0440, 0x00000080);
 FUNC_6(VAR_9->inst, 0x0444, 0xffff0000);
 FUNC_6(VAR_9->inst, 0x0448, 0x00000001);
 FUNC_6(VAR_9->inst, 0x045c, 0x44400000);
 FUNC_6(VAR_9->inst, 0x0488, 0xffff0000);
 for (VAR_11 = 0x04dc; VAR_11 < 0x04e4; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x0fff0000);
 FUNC_6(VAR_9->inst, 0x04e8, 0x00011100);
 for (VAR_11 = 0x0504; VAR_11 < 0x0544; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x07ff0000);
 FUNC_6(VAR_9->inst, 0x054c, 0x4b7fffff);
 FUNC_6(VAR_9->inst, 0x0588, 0x00000080);
 FUNC_6(VAR_9->inst, 0x058c, 0x30201000);
 FUNC_6(VAR_9->inst, 0x0590, 0x70605040);
 FUNC_6(VAR_9->inst, 0x0594, 0xb8a89888);
 FUNC_6(VAR_9->inst, 0x0598, 0xf8e8d8c8);
 FUNC_6(VAR_9->inst, 0x05ac, 0xb0000000);
 for (VAR_11 = 0x0604; VAR_11 < 0x0644; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00010588);
 for (VAR_11 = 0x0644; VAR_11 < 0x0684; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00030303);
 for (VAR_11 = 0x06c4; VAR_11 < 0x0704; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x0008aae4);
 for (VAR_11 = 0x0704; VAR_11 < 0x0744; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x01012000);
 for (VAR_11 = 0x0744; VAR_11 < 0x0784; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00080008);
 FUNC_6(VAR_9->inst, 0x0860, 0x00040000);
 FUNC_6(VAR_9->inst, 0x0864, 0x00010000);
 for (VAR_11 = 0x0868; VAR_11 < 0x0878; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x00040004);
 for (VAR_11 = 0x1f1c; VAR_11 <= 0x308c ; VAR_11 += 16) {
  FUNC_6(VAR_9->inst, VAR_11 + 0, 0x10700ff9);
  FUNC_6(VAR_9->inst, VAR_11 + 4, 0x0436086c);
  FUNC_6(VAR_9->inst, VAR_11 + 8, 0x000c001b);
 }
 for (VAR_11 = 0x30bc; VAR_11 < 0x30cc; VAR_11 += 4)
  FUNC_6(VAR_9->inst, VAR_11, 0x0000ffff);
 FUNC_6(VAR_9->inst, 0x3450, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x380c, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x3820, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x384c, 0x40000000);
 FUNC_6(VAR_9->inst, 0x3850, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x3854, 0x3f000000);
 FUNC_6(VAR_9->inst, 0x385c, 0x40000000);
 FUNC_6(VAR_9->inst, 0x3860, 0x3f800000);
 FUNC_6(VAR_9->inst, 0x3868, 0xbf800000);
 FUNC_6(VAR_9->inst, 0x3870, 0xbf800000);
 FUNC_2(VAR_9->inst);
 return 0;
}
