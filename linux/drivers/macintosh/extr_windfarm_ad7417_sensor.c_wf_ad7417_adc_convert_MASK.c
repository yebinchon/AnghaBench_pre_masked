
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_ad7417_priv {TYPE_1__* mpu; } ;
typedef int s32 ;
struct TYPE_2__ {int bdiode; int mdiode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct wf_ad7417_priv *VAR_3,
      int VAR_4, s32 VAR_5, s32 *VAR_6)
{
 switch(VAR_4) {
 case 1:
  *VAR_6 = (VAR_5 * (s32)VAR_3->mpu->mdiode +
   ((s32)VAR_3->mpu->bdiode << 12)) >> 2;
  break;
 case 2:
  *VAR_6 = VAR_5 * VAR_0;
  break;
 case 3:
  *VAR_6 = VAR_5 * VAR_2;
  break;
 case 4:
  *VAR_6 = VAR_5 * VAR_1;
  break;
 }
}
