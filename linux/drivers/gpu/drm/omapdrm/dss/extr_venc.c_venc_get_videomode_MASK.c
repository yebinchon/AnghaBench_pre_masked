
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int flags; scalar_t__ clock; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
typedef enum venc_videomode { ____Placeholder_venc_videomode } venc_videomode ;
struct TYPE_4__ {scalar_t__ clock; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct TYPE_3__ {scalar_t__ clock; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static enum venc_videomode FUNC_0(const struct drm_display_mode *VAR_6)
{
 if (!(VAR_6->flags & VAR_0))
  return VAR_3;

 if (VAR_6->clock == VAR_5.clock &&
     VAR_6->hdisplay == VAR_5.hdisplay &&
     VAR_6->vdisplay == VAR_5.vdisplay)
  return VAR_2;

 if (VAR_6->clock == VAR_4.clock &&
     VAR_6->hdisplay == VAR_4.hdisplay &&
     VAR_6->vdisplay == VAR_4.vdisplay)
  return VAR_1;

 return VAR_3;
}
