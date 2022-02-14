
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;
 struct mipi_dbi_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct mipi_dbi*,int ,...) ;
 int FUNC_5 (struct mipi_dbi_dev*,struct drm_crtc_state*,struct drm_plane_state*) ;
 int FUNC_6 (struct mipi_dbi_dev*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct drm_simple_display_pipe *VAR_27,
       struct drm_crtc_state *VAR_28,
       struct drm_plane_state *VAR_29)
{
 struct mipi_dbi_dev *VAR_30 = FUNC_3(VAR_27->crtc.dev);
 struct mipi_dbi *VAR_31 = &VAR_30->dbi;
 u8 VAR_32;
 int VAR_33, VAR_34;

 if (!FUNC_1(VAR_27->crtc.dev, &VAR_34))
  return;

 FUNC_0("\n");

 VAR_33 = FUNC_6(VAR_30);
 if (VAR_33 < 0)
  goto out_exit;
 if (VAR_33 == 1)
  goto out_enable;

 FUNC_4(VAR_31, VAR_23);

 FUNC_4(VAR_31, VAR_16, 0x00, 0x83, 0x30);
 FUNC_4(VAR_31, VAR_17, 0x64, 0x03, 0x12, 0x81);
 FUNC_4(VAR_31, VAR_1, 0x85, 0x01, 0x79);
 FUNC_4(VAR_31, VAR_15, 0x39, 0x2c, 0x00, 0x34, 0x02);
 FUNC_4(VAR_31, VAR_12, 0x20);
 FUNC_4(VAR_31, VAR_2, 0x00, 0x00);


 FUNC_4(VAR_31, VAR_13, 0x26);
 FUNC_4(VAR_31, VAR_14, 0x11);

 FUNC_4(VAR_31, VAR_18, 0x35, 0x3e);
 FUNC_4(VAR_31, VAR_19, 0xbe);


 FUNC_4(VAR_31, VAR_26, VAR_21);


 FUNC_4(VAR_31, VAR_5, 0x00, 0x1b);


 FUNC_4(VAR_31, VAR_3, 0x08);
 FUNC_4(VAR_31, VAR_25, 0x01);
 FUNC_4(VAR_31, VAR_11,
         0x1f, 0x1a, 0x18, 0x0a, 0x0f, 0x06, 0x45, 0x87,
         0x32, 0x0a, 0x07, 0x02, 0x07, 0x05, 0x00);
 FUNC_4(VAR_31, VAR_10,
         0x00, 0x25, 0x27, 0x05, 0x10, 0x09, 0x3a, 0x78,
         0x4d, 0x05, 0x18, 0x0d, 0x38, 0x3a, 0x1f);


 FUNC_4(VAR_31, VAR_4, 0x07);


 FUNC_4(VAR_31, VAR_0, 0x0a, 0x82, 0x27, 0x00);
 FUNC_4(VAR_31, VAR_20);
 FUNC_7(100);

 FUNC_4(VAR_31, VAR_24);
 FUNC_7(100);

out_enable:






 switch (VAR_30->rotation) {
 default:
  VAR_32 = VAR_7 | VAR_9 |
       VAR_8;
  break;
 case 90:
  VAR_32 = VAR_9;
  break;
 case 180:
  VAR_32 = VAR_7;
  break;
 case 270:
  VAR_32 = VAR_8;
  break;
 }
 VAR_32 |= VAR_6;
 FUNC_4(VAR_31, VAR_22, VAR_32);
 FUNC_5(VAR_30, VAR_28, VAR_29);
out_exit:
 FUNC_2(VAR_34);
}
