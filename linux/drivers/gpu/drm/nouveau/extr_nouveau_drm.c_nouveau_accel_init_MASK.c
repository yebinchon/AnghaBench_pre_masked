
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvif_sclass {int oclass; } ;
struct TYPE_3__ {scalar_t__ family; } ;
struct nvif_device {TYPE_1__ info; int object; } ;
struct TYPE_4__ {struct nvif_device device; } ;
struct nouveau_drm {TYPE_2__ client; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int) ;



 int FUNC_1 (struct nouveau_drm*) ;
 int FUNC_2 (struct nouveau_drm*) ;
 int FUNC_3 (struct nouveau_drm*) ;
 int FUNC_4 (struct nouveau_drm*) ;
 int FUNC_5 (struct nouveau_drm*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct nouveau_drm*) ;
 int FUNC_7 (struct nouveau_drm*) ;
 int FUNC_8 (struct nouveau_drm*) ;
 int FUNC_9 (struct nouveau_drm*) ;
 int FUNC_10 (struct nouveau_drm*) ;
 int FUNC_11 (struct nouveau_drm*) ;
 int FUNC_12 (int *,struct nvif_sclass**) ;
 int FUNC_13 (struct nvif_sclass**) ;
 int FUNC_14 (struct nvif_device*) ;

__attribute__((used)) static void
FUNC_15(struct nouveau_drm *VAR_3)
{
 struct nvif_device *VAR_4 = &VAR_3->client.device;
 struct nvif_sclass *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 if (VAR_2)
  return;


 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6)
  return;




 VAR_6 = VAR_8 = FUNC_12(&VAR_4->object, &VAR_5);
 if (VAR_6 < 0)
  return;

 for (VAR_6 = -VAR_0, VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  switch (VAR_5[VAR_7].oclass) {
  case 135:
   VAR_6 = FUNC_6(VAR_3);
   break;
  case 134:
   VAR_6 = FUNC_7(VAR_3);
   break;
  case 133:
  case 132:
   VAR_6 = FUNC_8(VAR_3);
   break;
  case 131:
   VAR_6 = FUNC_9(VAR_3);
   break;
  case 139:
   VAR_6 = FUNC_10(VAR_3);
   break;
  case 140:
  case 138:
  case 137:
  case 136:
  case 130:
  case 128:
  case 129:
   VAR_6 = FUNC_11(VAR_3);
   break;
  default:
   break;
  }
 }

 FUNC_13(&VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_3, "failed to initialise sync subsystem, %d\n", VAR_6);
  FUNC_2(VAR_3);
  return;
 }


 if (VAR_3->client.device.info.family >= VAR_1) {
  VAR_6 = FUNC_14(VAR_4);
  if (VAR_6)
   return;
 }


 FUNC_3(VAR_3);
 FUNC_1(VAR_3);


 FUNC_4(VAR_3);
}
