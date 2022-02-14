
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct repaper_epd {int enabled; int partial; int channel_select; int busy; scalar_t__ reset; scalar_t__ border; scalar_t__ panel_on; scalar_t__ discharge; struct spi_device* spi; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_crtc_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int) ;
 struct repaper_epd* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct repaper_epd*) ;
 int FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,int) ;
 int FUNC_12 (struct spi_device*) ;
 int FUNC_13 (struct spi_device*,int,int ,int) ;
 int FUNC_14 (struct spi_device*,int,int) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static void FUNC_16(struct drm_simple_display_pipe *VAR_1,
    struct drm_crtc_state *VAR_2,
    struct drm_plane_state *VAR_3)
{
 struct repaper_epd *VAR_4 = FUNC_5(VAR_1->crtc.dev);
 struct spi_device *VAR_5 = VAR_4->spi;
 struct device *VAR_6 = &VAR_5->dev;
 bool VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10;

 if (!FUNC_3(VAR_1->crtc.dev, &VAR_10))
  return;

 FUNC_0("\n");


 FUNC_7(VAR_4->reset, 0);
 FUNC_7(VAR_4->panel_on, 0);
 FUNC_7(VAR_4->discharge, 0);
 if (VAR_4->border)
  FUNC_7(VAR_4->border, 0);
 FUNC_12(VAR_5);
 FUNC_15(5000, 10000);

 FUNC_7(VAR_4->panel_on, 1);




 FUNC_15(10000, 15000);
 FUNC_7(VAR_4->reset, 1);
 if (VAR_4->border)
  FUNC_7(VAR_4->border, 1);
 FUNC_15(5000, 10000);
 FUNC_7(VAR_4->reset, 0);
 FUNC_15(5000, 10000);
 FUNC_7(VAR_4->reset, 1);
 FUNC_15(5000, 10000);


 for (VAR_8 = 100; VAR_8 > 0; VAR_8--) {
  if (!FUNC_6(VAR_4->busy))
   break;

  FUNC_15(10, 100);
 }

 if (!VAR_8) {
  FUNC_1(VAR_6, "timeout waiting for panel to become ready.\n");
  FUNC_9(VAR_4);
  goto out_exit;
 }

 FUNC_10(VAR_5);
 VAR_9 = FUNC_10(VAR_5);
 if (VAR_9 != VAR_0) {
  if (VAR_9 < 0)
   FUNC_2(VAR_6, "failed to read chip (%d)\n", VAR_9);
  else
   FUNC_2(VAR_6, "wrong COG ID 0x%02x\n", VAR_9);
  FUNC_9(VAR_4);
  goto out_exit;
 }


 FUNC_14(VAR_5, 0x02, 0x40);

 VAR_9 = FUNC_11(VAR_5, 0x0f);
 if (VAR_9 < 0 || !(VAR_9 & 0x80)) {
  if (VAR_9 < 0)
   FUNC_1(VAR_6, "failed to read chip (%d)\n", VAR_9);
  else
   FUNC_1(VAR_6, "panel is reported broken\n");
  FUNC_9(VAR_4);
  goto out_exit;
 }


 FUNC_14(VAR_5, 0x0b, 0x02);

 FUNC_13(VAR_5, 0x01, VAR_4->channel_select, 8);

 FUNC_14(VAR_5, 0x07, 0xd1);

 FUNC_14(VAR_5, 0x08, 0x02);

 FUNC_14(VAR_5, 0x09, 0xc2);

 FUNC_14(VAR_5, 0x04, 0x03);

 FUNC_14(VAR_5, 0x03, 0x01);

 FUNC_14(VAR_5, 0x03, 0x00);
 FUNC_15(5000, 10000);


 for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {

  FUNC_14(VAR_5, 0x05, 0x01);
  FUNC_8(240);


  FUNC_14(VAR_5, 0x05, 0x03);
  FUNC_8(40);


  FUNC_14(VAR_5, 0x05, 0x0f);
  FUNC_8(40);


  VAR_9 = FUNC_11(VAR_5, 0x0f);
  if (VAR_9 < 0) {
   FUNC_1(VAR_6, "failed to read chip (%d)\n", VAR_9);
   FUNC_9(VAR_4);
   goto out_exit;
  }

  if (VAR_9 & 0x40) {
   VAR_7 = 1;
   break;
  }
 }

 if (!VAR_7) {
  FUNC_1(VAR_6, "dc/dc failed\n");
  FUNC_9(VAR_4);
  goto out_exit;
 }





 FUNC_14(VAR_5, 0x02, 0x04);

 VAR_4->enabled = 1;
 VAR_4->partial = 0;
out_exit:
 FUNC_4(VAR_10);
}
