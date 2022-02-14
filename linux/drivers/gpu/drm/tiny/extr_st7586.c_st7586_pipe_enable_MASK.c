
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mipi_dbi {int dummy; } ;
struct mipi_dbi_dev {int rotation; int enabled; struct mipi_dbi dbi; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;
struct drm_rect {int y2; int y1; int x2; int x1; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_crtc_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;
 struct mipi_dbi_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct mipi_dbi*,int ,...) ;
 int FUNC_5 (struct mipi_dbi_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_framebuffer*,struct drm_rect*) ;

__attribute__((used)) static void FUNC_8(struct drm_simple_display_pipe *VAR_22,
          struct drm_crtc_state *VAR_23,
          struct drm_plane_state *VAR_24)
{
 struct mipi_dbi_dev *VAR_25 = FUNC_3(VAR_22->crtc.dev);
 struct drm_framebuffer *VAR_26 = VAR_24->fb;
 struct mipi_dbi *VAR_27 = &VAR_25->dbi;
 struct drm_rect VAR_28 = {
  .x1 = 0,
  .x2 = VAR_26->width,
  .y1 = 0,
  .y2 = VAR_26->height,
 };
 int VAR_29, VAR_30;
 u8 VAR_31;

 if (!FUNC_1(VAR_22->crtc.dev, &VAR_29))
  return;

 FUNC_0("\n");

 VAR_30 = FUNC_5(VAR_25);
 if (VAR_30)
  goto out_exit;

 FUNC_4(VAR_27, VAR_6, 0x9f);
 FUNC_4(VAR_27, VAR_14, 0x00);

 FUNC_6(10);

 FUNC_4(VAR_27, VAR_13);

 FUNC_6(20);

 FUNC_4(VAR_27, VAR_12);
 FUNC_4(VAR_27, VAR_1);
 FUNC_4(VAR_27, VAR_3);

 FUNC_6(50);

 FUNC_4(VAR_27, VAR_21, 0x00);
 FUNC_4(VAR_27, VAR_20, 0xe3, 0x00);
 FUNC_4(VAR_27, VAR_15, 0x02);
 FUNC_4(VAR_27, VAR_16, 0x04);
 FUNC_4(VAR_27, VAR_10, 0x1d);
 FUNC_4(VAR_27, VAR_18, 0x00);
 FUNC_4(VAR_27, VAR_9);
 FUNC_4(VAR_27, VAR_11, 0x02);

 switch (VAR_25->rotation) {
 default:
  VAR_31 = 0x00;
  break;
 case 90:
  VAR_31 = VAR_8;
  break;
 case 180:
  VAR_31 = VAR_7 | VAR_8;
  break;
 case 270:
  VAR_31 = VAR_7;
  break;
 }
 FUNC_4(VAR_27, VAR_2, VAR_31);

 FUNC_4(VAR_27, VAR_17, 0x7f);
 FUNC_4(VAR_27, VAR_19, 0xa0);
 FUNC_4(VAR_27, VAR_5, 0x00, 0x00, 0x00, 0x77);
 FUNC_4(VAR_27, VAR_0);

 FUNC_6(100);

 VAR_25->enabled = 1;
 FUNC_7(VAR_26, &VAR_28);

 FUNC_4(VAR_27, VAR_4);
out_exit:
 FUNC_2(VAR_29);
}
