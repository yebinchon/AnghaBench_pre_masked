
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_parallel_display {int mode; int bus_flags; scalar_t__ edid; int panel; TYPE_1__* dev; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct imx_parallel_display* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,scalar_t__) ;
 int FUNC_2 (struct drm_connector*,scalar_t__) ;
 int FUNC_3 (struct drm_display_mode*,int *) ;
 struct drm_display_mode* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_4)
{
 struct imx_parallel_display *VAR_5 = FUNC_0(VAR_4);
 struct device_node *VAR_6 = VAR_5->dev->of_node;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_5->panel);
 if (VAR_7 > 0)
  return VAR_7;

 if (VAR_5->edid) {
  FUNC_2(VAR_4, VAR_5->edid);
  VAR_7 = FUNC_1(VAR_4, VAR_5->edid);
 }

 if (VAR_6) {
  struct drm_display_mode *VAR_8 = FUNC_4(VAR_4->dev);
  int VAR_9;

  if (!VAR_8)
   return -VAR_2;

  VAR_9 = FUNC_7(VAR_6, &VAR_5->mode,
           &VAR_5->bus_flags,
           VAR_3);
  if (VAR_9)
   return VAR_9;

  FUNC_3(VAR_8, &VAR_5->mode);
  VAR_8->type |= VAR_0 | VAR_1,
  FUNC_5(VAR_4, VAR_8);
  VAR_7++;
 }

 return VAR_7;
}
