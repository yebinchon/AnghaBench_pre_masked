
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dbi_dev {int enabled; scalar_t__ regulator; scalar_t__ backlight; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 struct mipi_dbi_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct mipi_dbi_dev*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct drm_simple_display_pipe *VAR_0)
{
 struct mipi_dbi_dev *VAR_1 = FUNC_2(VAR_0->crtc.dev);

 if (!VAR_1->enabled)
  return;

 FUNC_0("\n");

 VAR_1->enabled = 0;

 if (VAR_1->backlight)
  FUNC_1(VAR_1->backlight);
 else
  FUNC_3(VAR_1);

 if (VAR_1->regulator)
  FUNC_4(VAR_1->regulator);
}
