
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opregion_asle {int tche; int ardy; } ;
struct TYPE_2__ {struct opregion_asle* asle; } ;
struct drm_psb_private {TYPE_1__ opregion; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_psb_private*,int,int ) ;
 scalar_t__ VAR_5 ;

void FUNC_1(struct drm_device *VAR_6)
{
 struct drm_psb_private *VAR_7 = VAR_6->dev_private;
 struct opregion_asle *VAR_8 = VAR_7->opregion.asle;

 if (VAR_8 && VAR_5 ) {


  FUNC_0(VAR_7, 0, VAR_4);
  FUNC_0(VAR_7, 1, VAR_4);

  VAR_8->tche = VAR_0 | VAR_1 | VAR_2
        | VAR_3;
  VAR_8->ardy = 1;
 }
}
