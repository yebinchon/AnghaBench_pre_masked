
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
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;
 struct mipi_dbi_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct mipi_dbi*,int ,...) ;
 int FUNC_5 (struct mipi_dbi_dev*,struct drm_crtc_state*,struct drm_plane_state*) ;
 int FUNC_6 (struct mipi_dbi_dev*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct drm_simple_display_pipe *VAR_19,
        struct drm_crtc_state *VAR_20,
        struct drm_plane_state *VAR_21)
{
 struct mipi_dbi_dev *VAR_22 = FUNC_3(VAR_19->crtc.dev);
 struct mipi_dbi *VAR_23 = &VAR_22->dbi;
 u8 VAR_24;
 int VAR_25, VAR_26;

 if (!FUNC_1(VAR_19->crtc.dev, &VAR_26))
  return;

 FUNC_0("\n");

 VAR_25 = FUNC_6(VAR_22);
 if (VAR_25 < 0)
  goto out_exit;
 if (VAR_25 == 1)
  goto out_enable;


 FUNC_4(VAR_23, VAR_5, 0xFF, 0x83, 0x57);
 FUNC_7(150);


 FUNC_4(VAR_23, VAR_10, 0x00, 0x00, 0x06, 0x06);


 FUNC_4(VAR_23, VAR_3, 0x25);


 FUNC_4(VAR_23, VAR_7, 0x68);


 FUNC_4(VAR_23, VAR_8, 0x05);

 FUNC_4(VAR_23, VAR_9,
    0x00,
    0x15,
    0x1C,
    0x1C,
    0x83,
    0xAA);

 FUNC_4(VAR_23, VAR_11,
    0x50,
    0x50,
    0x01,
    0x3C,
    0x1E,
    0x08);

 FUNC_4(VAR_23, VAR_4,
    0x02,
    0x40,
    0x00,
    0x2A,
    0x2A,
    0x0D,
    0x78);

 FUNC_4(VAR_23, VAR_6,
    0x02,
    0x0A,
    0x11,
    0x1d,
    0x23,
    0x35,
    0x41,
    0x4b,
    0x4b,
    0x42,
    0x3A,
    0x27,
    0x1B,
    0x08,
    0x09,
    0x03,
    0x02,
    0x0A,
    0x11,
    0x1d,
    0x23,
    0x35,
    0x41,
    0x4b,
    0x4b,
    0x42,
    0x3A,
    0x27,
    0x1B,
    0x08,
    0x09,
    0x03,
    0x00,
    0x01);


 FUNC_4(VAR_23, VAR_16,
    VAR_13);


 FUNC_4(VAR_23, VAR_17, 0x00);


 FUNC_4(VAR_23, VAR_18, 0x00, 0x02);


 FUNC_4(VAR_23, VAR_12);
 FUNC_7(150);


 FUNC_4(VAR_23, VAR_15);
 FUNC_8(5000, 7000);

out_enable:
 switch (VAR_22->rotation) {
 default:
  VAR_24 = VAR_1 | VAR_2;
  break;
 case 90:
  VAR_24 = VAR_0 | VAR_2;
  break;
 case 180:
  VAR_24 = 0;
  break;
 case 270:
  VAR_24 = VAR_0 | VAR_1;
  break;
 }
 FUNC_4(VAR_23, VAR_14, VAR_24);
 FUNC_5(VAR_22, VAR_20, VAR_21);
out_exit:
 FUNC_2(VAR_26);
}
