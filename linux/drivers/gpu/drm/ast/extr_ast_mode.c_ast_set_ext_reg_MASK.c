
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_2__* primary; TYPE_1__* dev; } ;
struct ast_vbios_mode_info {int dummy; } ;
struct ast_private {scalar_t__ chip; } ;
struct TYPE_6__ {int* cpp; } ;
struct TYPE_5__ {struct drm_framebuffer* fb; } ;
struct TYPE_4__ {struct ast_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_8, struct drm_display_mode *VAR_9,
        struct ast_vbios_mode_info *VAR_10)
{
 struct ast_private *VAR_11 = VAR_8->dev->dev_private;
 const struct drm_framebuffer *VAR_12 = VAR_8->primary->fb;
 u8 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

 switch (VAR_12->format->cpp[0] * 8) {
 case 8:
  VAR_13 = 0x70;
  VAR_14 = 0x01;
  VAR_15 = 0x00;
  break;
 case 15:
 case 16:
  VAR_13 = 0x70;
  VAR_14 = 0x04;
  VAR_15 = 0x02;
  break;
 case 32:
  VAR_13 = 0x70;
  VAR_14 = 0x08;
  VAR_15 = 0x02;
  break;
 }

 FUNC_1(VAR_11, VAR_7, 0xa0, 0x8f, VAR_13);
 FUNC_1(VAR_11, VAR_7, 0xa3, 0xf0, VAR_14);
 FUNC_1(VAR_11, VAR_7, 0xa8, 0xfd, VAR_15);


 if (VAR_11->chip == VAR_4 || VAR_11->chip == VAR_5 ||
     VAR_11->chip == VAR_6) {
  FUNC_0(VAR_11, VAR_7, 0xa7, 0x78);
  FUNC_0(VAR_11, VAR_7, 0xa6, 0x60);
 } else if (VAR_11->chip == VAR_1 ||
     VAR_11->chip == VAR_0 ||
     VAR_11->chip == VAR_3 ||
     VAR_11->chip == VAR_2) {
  FUNC_0(VAR_11, VAR_7, 0xa7, 0x3f);
  FUNC_0(VAR_11, VAR_7, 0xa6, 0x2f);
 } else {
  FUNC_0(VAR_11, VAR_7, 0xa7, 0x2f);
  FUNC_0(VAR_11, VAR_7, 0xa6, 0x1f);
 }
}
