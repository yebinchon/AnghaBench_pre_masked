
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uiVersion; int uiTick; int fCameraTop; int fCameraFront; int fCameraPosition; int fAvatarTop; int fAvatarFront; int fAvatarPosition; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,float*,int) ;

void FUNC_2(float VAR_1[3], float VAR_2[3], float VAR_3[3],
  float VAR_4[3], float VAR_5[3], float VAR_6[3])
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->fAvatarPosition, VAR_1, sizeof(VAR_0->fAvatarPosition));
 FUNC_1(VAR_0->fAvatarFront, VAR_2, sizeof(VAR_0->fAvatarFront));
 FUNC_1(VAR_0->fAvatarTop, VAR_3, sizeof(VAR_0->fAvatarTop));
 FUNC_1(VAR_0->fCameraPosition, VAR_4, sizeof(VAR_0->fCameraPosition));
 FUNC_1(VAR_0->fCameraFront, VAR_5, sizeof(VAR_0->fCameraFront));
 FUNC_1(VAR_0->fCameraTop, VAR_6, sizeof(VAR_0->fCameraTop));
 VAR_0->uiVersion = 2;
 VAR_0->uiTick = FUNC_0();
}
