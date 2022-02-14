
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ oclass; } ;
struct TYPE_4__ {TYPE_1__ object; } ;
struct nouveau_display {void* color_vibrance_property; void* vibrant_hue_property; void* underscan_vborder_property; void* underscan_hborder_property; int underscan_property; int dithering_depth; int dithering_mode; TYPE_2__ disp; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct drm_device*,int ,char*,int ,int) ;
 struct nouveau_display* FUNC_2 (struct drm_device*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct drm_device *VAR_5)
{
 struct nouveau_display *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_6->disp.object.oclass < VAR_1)
  VAR_7 = 0;
 else
 if (VAR_6->disp.object.oclass < VAR_0)
  VAR_7 = 1;
 else
  VAR_7 = 2;

 FUNC_0(VAR_6->dithering_mode, VAR_7, "dithering mode", VAR_3);
 FUNC_0(VAR_6->dithering_depth, VAR_7, "dithering depth", VAR_2);
 FUNC_0(VAR_6->underscan_property, VAR_7, "underscan", VAR_4);

 VAR_6->underscan_hborder_property =
  FUNC_1(VAR_5, 0, "underscan hborder", 0, 128);

 VAR_6->underscan_vborder_property =
  FUNC_1(VAR_5, 0, "underscan vborder", 0, 128);

 if (VAR_7 < 1)
  return;


 VAR_6->vibrant_hue_property =
  FUNC_1(VAR_5, 0, "vibrant hue", 0, 180);


 VAR_6->color_vibrance_property =
  FUNC_1(VAR_5, 0, "color vibrance", 0, 200);
}
