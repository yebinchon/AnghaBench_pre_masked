
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {unsigned int link_nr; unsigned int link_bw; } ;
struct nouveau_encoder {TYPE_4__ dp; TYPE_3__* dcb; } ;
struct nouveau_connector {TYPE_1__* native_mode; struct nouveau_encoder* detected_encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {unsigned int clock; int flags; int vdisplay; int hdisplay; } ;
struct TYPE_11__ {int bpc; } ;
struct drm_connector {TYPE_5__ display_info; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_12__ {int (* mode_valid ) (struct drm_encoder*,struct drm_display_mode*) ;} ;
struct TYPE_8__ {unsigned int maxfreq; } ;
struct TYPE_9__ {int type; TYPE_2__ crtconf; } ;
struct TYPE_7__ {int vdisplay; int hdisplay; } ;


 int FUNC_0 () ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_1 (struct drm_encoder*) ;
 unsigned int FUNC_2 (struct drm_connector*) ;
 struct nouveau_connector* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_encoder*,struct drm_display_mode*) ;
 struct drm_encoder* FUNC_5 (struct nouveau_encoder*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_6(struct drm_connector *VAR_7,
        struct drm_display_mode *VAR_8)
{
 struct nouveau_connector *VAR_9 = FUNC_3(VAR_7);
 struct nouveau_encoder *VAR_10 = VAR_9->detected_encoder;
 struct drm_encoder *VAR_11 = FUNC_5(VAR_10);
 unsigned VAR_12 = 25000, VAR_13 = VAR_12;
 unsigned VAR_14 = VAR_8->clock;

 switch (VAR_10->dcb->type) {
 case 130:
  if (VAR_9->native_mode &&
      (VAR_8->hdisplay > VAR_9->native_mode->hdisplay ||
       VAR_8->vdisplay > VAR_9->native_mode->vdisplay))
   return VAR_6;

  VAR_12 = 0;
  VAR_13 = 400000;
  break;
 case 129:
  VAR_13 = FUNC_2(VAR_7);
  break;
 case 132:
  VAR_13 = VAR_10->dcb->crtconf.maxfreq;
  if (!VAR_13)
   VAR_13 = 350000;
  break;
 case 128:
  return FUNC_1(VAR_11)->mode_valid(VAR_11, VAR_8);
 case 131:
  VAR_13 = VAR_10->dp.link_nr;
  VAR_13 *= VAR_10->dp.link_bw;
  VAR_14 = VAR_14 * (VAR_7->display_info.bpc * 3) / 10;
  break;
 default:
  FUNC_0();
  return VAR_2;
 }

 if ((VAR_8->flags & VAR_1) == VAR_0)
  VAR_14 *= 2;

 if (VAR_14 < VAR_12)
  return VAR_4;

 if (VAR_14 > VAR_13)
  return VAR_3;

 return VAR_5;
}
