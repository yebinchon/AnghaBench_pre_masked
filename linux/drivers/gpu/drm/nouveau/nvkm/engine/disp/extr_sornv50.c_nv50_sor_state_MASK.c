
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ior_state {int proto_evo; int link; int head; void* proto; } ;
struct nvkm_ior {int id; struct nvkm_ior_state arm; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct nvkm_device*,int const) ;

void
FUNC_1(struct nvkm_ior *VAR_3, struct nvkm_ior_state *VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_3->disp->engine.subdev.device;
 const u32 VAR_6 = VAR_3->id * 8 + (VAR_4 == &VAR_3->arm) * 4;
 u32 VAR_7 = FUNC_0(VAR_5, 0x610b70 + VAR_6);

 VAR_4->proto_evo = (VAR_7 & 0x00000f00) >> 8;
 switch (VAR_4->proto_evo) {
 case 0: VAR_4->proto = VAR_0; VAR_4->link = 1; break;
 case 1: VAR_4->proto = VAR_1; VAR_4->link = 1; break;
 case 2: VAR_4->proto = VAR_1; VAR_4->link = 2; break;
 case 5: VAR_4->proto = VAR_1; VAR_4->link = 3; break;
 default:
  VAR_4->proto = VAR_2;
  break;
 }

 VAR_4->head = VAR_7 & 0x00000003;
}
