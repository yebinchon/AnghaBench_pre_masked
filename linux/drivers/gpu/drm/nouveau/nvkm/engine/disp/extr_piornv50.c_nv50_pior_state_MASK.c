
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ior_state {int proto_evo; int rgdiv; int head; int proto; } ;
struct nvkm_ior {int id; struct nvkm_ior_state arm; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_2__ subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_ior*,struct nvkm_ior_state*,int) ;
 int FUNC_1 (struct nvkm_device*,int const) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_ior *VAR_2, struct nvkm_ior_state *VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_2->disp->engine.subdev.device;
 const u32 VAR_5 = VAR_2->id * 8 + (VAR_3 == &VAR_2->arm) * 4;
 u32 VAR_6 = FUNC_1(VAR_4, 0x610b80 + VAR_5);

 VAR_3->proto_evo = (VAR_6 & 0x00000f00) >> 8;
 VAR_3->rgdiv = 1;
 switch (VAR_3->proto_evo) {
 case 0: VAR_3->proto = VAR_0; break;
 default:
  VAR_3->proto = VAR_1;
  break;
 }

 VAR_3->head = VAR_6 & 0x00000003;
 FUNC_0(VAR_2, VAR_3, VAR_6);
}
