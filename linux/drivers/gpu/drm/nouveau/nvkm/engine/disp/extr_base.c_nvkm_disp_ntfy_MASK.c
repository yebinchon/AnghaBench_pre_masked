
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int engine; } ;
struct nvkm_event {int dummy; } ;
struct nvkm_disp {struct nvkm_event hpd; struct nvkm_event vblank; } ;


 int VAR_0 ;


 struct nvkm_disp* FUNC_0 (int ) ;

int
FUNC_1(struct nvkm_object *VAR_1, u32 VAR_2, struct nvkm_event **VAR_3)
{
 struct nvkm_disp *VAR_4 = FUNC_0(VAR_1->engine);
 switch (VAR_2) {
 case 128:
  *VAR_3 = &VAR_4->vblank;
  return 0;
 case 129:
  *VAR_3 = &VAR_4->hpd;
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
