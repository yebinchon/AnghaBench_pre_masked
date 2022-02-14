
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct repaper_epd {int enabled; unsigned int height; scalar_t__ border; struct spi_device* spi; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct repaper_epd* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct repaper_epd*) ;
 int FUNC_5 (struct repaper_epd*,int,int *,int,int *,int ) ;
 int FUNC_6 (struct spi_device*,int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_simple_display_pipe *VAR_2)
{
 struct repaper_epd *VAR_3 = FUNC_1(VAR_2->crtc.dev);
 struct spi_device *VAR_4 = VAR_3->spi;
 unsigned int VAR_5;
 if (!VAR_3->enabled)
  return;

 FUNC_0("\n");

 VAR_3->enabled = 0;


 for (VAR_5 = 0; VAR_5 < VAR_3->height; VAR_5++)
  FUNC_5(VAR_3, 0x7fffu, ((void*)0), 0x00, ((void*)0),
     VAR_0);


 if (VAR_3->border) {

  FUNC_5(VAR_3, 0x7fffu, ((void*)0), 0x00, ((void*)0),
     VAR_0);
  FUNC_3(25);
  FUNC_2(VAR_3->border, 0);
  FUNC_3(200);
  FUNC_2(VAR_3->border, 1);
 } else {

  FUNC_5(VAR_3, 0x7fffu, ((void*)0), 0x00, ((void*)0),
     VAR_1);
  FUNC_3(200);
 }


 FUNC_6(VAR_4, 0x0b, 0x00);

 FUNC_6(VAR_4, 0x03, 0x01);

 FUNC_6(VAR_4, 0x05, 0x03);

 FUNC_6(VAR_4, 0x05, 0x01);
 FUNC_3(120);

 FUNC_6(VAR_4, 0x04, 0x80);

 FUNC_6(VAR_4, 0x05, 0x00);

 FUNC_6(VAR_4, 0x07, 0x01);
 FUNC_3(50);

 FUNC_4(VAR_3);
}
