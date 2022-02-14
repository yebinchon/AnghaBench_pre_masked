
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct ast_private {scalar_t__ chip; scalar_t__ support_wide_screen; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_connector *VAR_9,
     struct drm_display_mode *VAR_10)
{
 struct ast_private *VAR_11 = VAR_9->dev->dev_private;
 int VAR_12 = VAR_7;
 uint32_t VAR_13;

 if (VAR_11->support_wide_screen) {
  if ((VAR_10->hdisplay == 1680) && (VAR_10->vdisplay == 1050))
   return VAR_8;
  if ((VAR_10->hdisplay == 1280) && (VAR_10->vdisplay == 800))
   return VAR_8;
  if ((VAR_10->hdisplay == 1440) && (VAR_10->vdisplay == 900))
   return VAR_8;
  if ((VAR_10->hdisplay == 1360) && (VAR_10->vdisplay == 768))
   return VAR_8;
  if ((VAR_10->hdisplay == 1600) && (VAR_10->vdisplay == 900))
   return VAR_8;

  if ((VAR_11->chip == VAR_1) || (VAR_11->chip == VAR_2) ||
      (VAR_11->chip == VAR_3) || (VAR_11->chip == VAR_4) ||
      (VAR_11->chip == VAR_5) || (VAR_11->chip == VAR_0)) {
   if ((VAR_10->hdisplay == 1920) && (VAR_10->vdisplay == 1080))
    return VAR_8;

   if ((VAR_10->hdisplay == 1920) && (VAR_10->vdisplay == 1200)) {
    VAR_13 = FUNC_0(VAR_11, VAR_6, 0xd1, 0xff);
    if (VAR_13 & 0x01)
     return VAR_7;
    else
     return VAR_8;
   }
  }
 }
 switch (VAR_10->hdisplay) {
 case 640:
  if (VAR_10->vdisplay == 480) VAR_12 = VAR_8;
  break;
 case 800:
  if (VAR_10->vdisplay == 600) VAR_12 = VAR_8;
  break;
 case 1024:
  if (VAR_10->vdisplay == 768) VAR_12 = VAR_8;
  break;
 case 1280:
  if (VAR_10->vdisplay == 1024) VAR_12 = VAR_8;
  break;
 case 1600:
  if (VAR_10->vdisplay == 1200) VAR_12 = VAR_8;
  break;
 default:
  return VAR_12;
 }

 return VAR_12;
}
