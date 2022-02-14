
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_3__ {unsigned int dirty; int * TexState; int ContextState; int BufferState; } ;
typedef TYPE_1__ drm_i810_sarea_t ;
struct TYPE_4__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_i810_private_t ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_4)
{
 drm_i810_private_t *VAR_5 = VAR_4->dev_private;
 drm_i810_sarea_t *VAR_6 = VAR_5->sarea_priv;
 unsigned int VAR_7 = VAR_6->dirty;

 FUNC_0("%x\n", VAR_7);

 if (VAR_7 & VAR_0) {
  FUNC_2(VAR_4, VAR_6->BufferState);
  VAR_6->dirty &= ~VAR_0;
 }

 if (VAR_7 & VAR_1) {
  FUNC_1(VAR_4, VAR_6->ContextState);
  VAR_6->dirty &= ~VAR_1;
 }

 if (VAR_7 & VAR_2) {
  FUNC_3(VAR_4, VAR_6->TexState[0]);
  VAR_6->dirty &= ~VAR_2;
 }

 if (VAR_7 & VAR_3) {
  FUNC_3(VAR_4, VAR_6->TexState[1]);
  VAR_6->dirty &= ~VAR_3;
 }
}
