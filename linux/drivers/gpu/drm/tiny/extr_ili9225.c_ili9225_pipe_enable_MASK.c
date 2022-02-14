
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mipi_dbi {int dummy; } ;
struct mipi_dbi_dev {int rotation; int enabled; struct mipi_dbi dbi; } ;
struct TYPE_4__ {TYPE_2__* dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;
struct drm_rect {int y2; int y1; int x2; int x1; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_crtc_state {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*,char*,int) ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 (int) ;
 struct mipi_dbi_dev* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct mipi_dbi*,int ,int) ;
 int FUNC_6 (struct drm_framebuffer*,struct drm_rect*) ;
 int FUNC_7 (struct mipi_dbi*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct drm_simple_display_pipe *VAR_32,
    struct drm_crtc_state *VAR_33,
    struct drm_plane_state *VAR_34)
{
 struct mipi_dbi_dev *VAR_35 = FUNC_4(VAR_32->crtc.dev);
 struct drm_framebuffer *VAR_36 = VAR_34->fb;
 struct device *VAR_37 = VAR_32->crtc.dev->dev;
 struct mipi_dbi *VAR_38 = &VAR_35->dbi;
 struct drm_rect VAR_39 = {
  .x1 = 0,
  .x2 = VAR_36->width,
  .y1 = 0,
  .y2 = VAR_36->height,
 };
 int VAR_40, VAR_41;
 u8 VAR_42;

 if (!FUNC_2(VAR_32->crtc.dev, &VAR_41))
  return;

 FUNC_0("\n");

 FUNC_7(VAR_38);







 VAR_40 = FUNC_5(VAR_38, VAR_21, 0x0000);
 if (VAR_40) {
  FUNC_1(VAR_37, "Error sending command %d\n", VAR_40);
  goto out_exit;
 }
 FUNC_5(VAR_38, VAR_22, 0x0000);
 FUNC_5(VAR_38, VAR_23, 0x0000);
 FUNC_5(VAR_38, VAR_24, 0x0000);
 FUNC_5(VAR_38, VAR_25, 0x0000);

 FUNC_8(40);

 FUNC_5(VAR_38, VAR_22, 0x0018);
 FUNC_5(VAR_38, VAR_23, 0x6121);
 FUNC_5(VAR_38, VAR_24, 0x006f);
 FUNC_5(VAR_38, VAR_25, 0x495f);
 FUNC_5(VAR_38, VAR_21, 0x0800);

 FUNC_8(10);

 FUNC_5(VAR_38, VAR_22, 0x103b);

 FUNC_8(50);

 switch (VAR_35->rotation) {
 default:
  VAR_42 = 0x30;
  break;
 case 90:
  VAR_42 = 0x18;
  break;
 case 180:
  VAR_42 = 0x00;
  break;
 case 270:
  VAR_42 = 0x28;
  break;
 }
 FUNC_5(VAR_38, VAR_2, 0x011c);
 FUNC_5(VAR_38, VAR_17, 0x0100);
 FUNC_5(VAR_38, VAR_3, 0x1000 | VAR_42);
 FUNC_5(VAR_38, VAR_1, 0x0000);
 FUNC_5(VAR_38, VAR_0, 0x0808);
 FUNC_5(VAR_38, VAR_4, 0x1100);
 FUNC_5(VAR_38, VAR_16, 0x0000);
 FUNC_5(VAR_38, VAR_18, 0x0d01);
 FUNC_5(VAR_38, VAR_28, 0x0020);
 FUNC_5(VAR_38, VAR_26, 0x0000);
 FUNC_5(VAR_38, VAR_27, 0x0000);

 FUNC_5(VAR_38, VAR_15, 0x0000);
 FUNC_5(VAR_38, VAR_29, 0x00db);
 FUNC_5(VAR_38, VAR_30, 0x0000);
 FUNC_5(VAR_38, VAR_31, 0x0000);
 FUNC_5(VAR_38, VAR_19, 0x00db);
 FUNC_5(VAR_38, VAR_20, 0x0000);

 FUNC_5(VAR_38, VAR_5, 0x0000);
 FUNC_5(VAR_38, VAR_7, 0x0808);
 FUNC_5(VAR_38, VAR_8, 0x080a);
 FUNC_5(VAR_38, VAR_9, 0x000a);
 FUNC_5(VAR_38, VAR_10, 0x0a08);
 FUNC_5(VAR_38, VAR_11, 0x0808);
 FUNC_5(VAR_38, VAR_12, 0x0000);
 FUNC_5(VAR_38, VAR_13, 0x0a00);
 FUNC_5(VAR_38, VAR_14, 0x0710);
 FUNC_5(VAR_38, VAR_6, 0x0710);

 FUNC_5(VAR_38, VAR_1, 0x0012);

 FUNC_8(50);

 FUNC_5(VAR_38, VAR_1, 0x1017);

 VAR_35->enabled = 1;
 FUNC_6(VAR_36, &VAR_39);
out_exit:
 FUNC_3(VAR_41);
}
