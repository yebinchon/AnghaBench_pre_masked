
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mipi_dbi {int dummy; } ;
struct mipi_dbi_dev {int rotation; struct mipi_dbi dbi; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;
struct drm_plane_state {int dummy; } ;
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
 int FUNC_5 (struct mipi_dbi_dev*,struct drm_crtc_state*,struct drm_plane_state*) ;
 int FUNC_6 (struct mipi_dbi_dev*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct drm_simple_display_pipe *VAR_22,
          struct drm_crtc_state *VAR_23,
          struct drm_plane_state *VAR_24)
{
 struct mipi_dbi_dev *VAR_25 = FUNC_3(VAR_22->crtc.dev);
 struct mipi_dbi *VAR_26 = &VAR_25->dbi;
 int VAR_27, VAR_28;
 u8 VAR_29;

 if (!FUNC_1(VAR_22->crtc.dev, &VAR_28))
  return;

 FUNC_0("\n");

 VAR_27 = FUNC_6(VAR_25);
 if (VAR_27)
  goto out_exit;

 FUNC_7(150);

 FUNC_4(VAR_26, VAR_2);
 FUNC_7(500);

 FUNC_4(VAR_26, VAR_7, 0x01, 0x2c, 0x2d);
 FUNC_4(VAR_26, VAR_8, 0x01, 0x2c, 0x2d);
 FUNC_4(VAR_26, VAR_9, 0x01, 0x2c, 0x2d, 0x01, 0x2c,
    0x2d);
 FUNC_4(VAR_26, VAR_12, 0x07);
 FUNC_4(VAR_26, VAR_16, 0xa2, 0x02, 0x84);
 FUNC_4(VAR_26, VAR_17, 0xc5);
 FUNC_4(VAR_26, VAR_18, 0x0a, 0x00);
 FUNC_4(VAR_26, VAR_19, 0x8a, 0x2a);
 FUNC_4(VAR_26, VAR_20, 0x8a, 0xee);
 FUNC_4(VAR_26, VAR_21, 0x0e);
 FUNC_4(VAR_26, VAR_1);
 switch (VAR_25->rotation) {
 default:
  VAR_29 = VAR_14 | VAR_15;
  break;
 case 90:
  VAR_29 = VAR_14 | VAR_13;
  break;
 case 180:
  VAR_29 = 0;
  break;
 case 270:
  VAR_29 = VAR_15 | VAR_13;
  break;
 }
 FUNC_4(VAR_26, VAR_4, VAR_29);
 FUNC_4(VAR_26, VAR_6,
    VAR_3);
 FUNC_4(VAR_26, VAR_11, 0x02, 0x1c, 0x07, 0x12, 0x37,
    0x32, 0x29, 0x2d, 0x29, 0x25, 0x2b, 0x39, 0x00, 0x01,
    0x03, 0x10);
 FUNC_4(VAR_26, VAR_10, 0x03, 0x1d, 0x07, 0x06, 0x2e,
    0x2c, 0x29, 0x2d, 0x2e, 0x2e, 0x37, 0x3f, 0x00, 0x00,
    0x02, 0x10);
 FUNC_4(VAR_26, VAR_5);

 FUNC_7(100);

 FUNC_4(VAR_26, VAR_0);

 FUNC_7(20);

 FUNC_5(VAR_25, VAR_23, VAR_24);
out_exit:
 FUNC_2(VAR_28);
}
