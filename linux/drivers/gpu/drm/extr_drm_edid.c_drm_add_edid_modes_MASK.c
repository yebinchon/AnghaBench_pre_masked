
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct edid {int features; } ;
struct TYPE_4__ {int bpc; } ;
struct drm_connector {TYPE_2__ display_info; int name; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_1 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_2 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_3 (struct drm_connector*,struct edid*,int) ;
 scalar_t__ FUNC_4 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_5 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_6 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_7 (struct drm_connector*,struct edid*) ;
 int FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (struct drm_connector*,struct edid*) ;
 int FUNC_11 (struct edid*) ;
 int FUNC_12 (struct drm_connector*,struct edid*) ;
 int FUNC_13 (struct drm_connector*,int) ;

int FUNC_14(struct drm_connector *VAR_7, struct edid *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10;

 if (VAR_8 == ((void*)0)) {
  FUNC_8(VAR_7);
  return 0;
 }
 if (!FUNC_11(VAR_8)) {
  FUNC_8(VAR_7);
  FUNC_9(VAR_7->dev->dev, "%s: EDID invalid.\n",
    VAR_7->name);
  return 0;
 }

 FUNC_12(VAR_7, VAR_8);






 VAR_10 = FUNC_10(VAR_7, VAR_8);
 VAR_9 += FUNC_3(VAR_7, VAR_8, VAR_10);
 VAR_9 += FUNC_2(VAR_7, VAR_8);
 VAR_9 += FUNC_7(VAR_7, VAR_8);
 VAR_9 += FUNC_5(VAR_7, VAR_8);
 VAR_9 += FUNC_1(VAR_7, VAR_8);
 VAR_9 += FUNC_0(VAR_7, VAR_8);
 VAR_9 += FUNC_4(VAR_7, VAR_8);
 if (VAR_8->features & VAR_0)
  VAR_9 += FUNC_6(VAR_7, VAR_8);

 if (VAR_10 & (VAR_5 | VAR_6))
  FUNC_13(VAR_7, VAR_10);

 if (VAR_10 & VAR_3)
  VAR_7->display_info.bpc = 6;

 if (VAR_10 & VAR_4)
  VAR_7->display_info.bpc = 8;

 if (VAR_10 & VAR_1)
  VAR_7->display_info.bpc = 10;

 if (VAR_10 & VAR_2)
  VAR_7->display_info.bpc = 12;

 return VAR_9;
}
