
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_engine {int dummy; } ;
struct drm_plane {int dummy; } ;
struct sun8i_vi_layer {struct drm_plane plane; } ;
struct sun8i_ui_layer {struct drm_plane plane; } ;
struct sun8i_mixer {TYPE_1__* cfg; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int vi_num; int ui_num; } ;


 int VAR_0 ;
 struct drm_plane** FUNC_0 (struct sun8i_vi_layer*) ;
 struct drm_plane** FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct sun8i_vi_layer*) ;
 int FUNC_3 (int ,char*,...) ;
 struct drm_plane** FUNC_4 (int ,int,int,int ) ;
 struct sun8i_mixer* FUNC_5 (struct sunxi_engine*) ;
 struct sun8i_vi_layer* FUNC_6 (struct drm_device*,struct sun8i_mixer*,int) ;
 struct sun8i_vi_layer* FUNC_7 (struct drm_device*,struct sun8i_mixer*,int) ;

__attribute__((used)) static struct drm_plane **FUNC_8(struct drm_device *VAR_2,
         struct sunxi_engine *VAR_3)
{
 struct drm_plane **VAR_4;
 struct sun8i_mixer *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2->dev,
         VAR_5->cfg->vi_num + VAR_5->cfg->ui_num + 1,
         sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_5->cfg->vi_num; VAR_6++) {
  struct sun8i_vi_layer *VAR_7;

  VAR_7 = FUNC_7(VAR_2, VAR_5, VAR_6);
  if (FUNC_2(VAR_7)) {
   FUNC_3(VAR_2->dev,
    "Couldn't initialize overlay plane\n");
   return FUNC_0(VAR_7);
  };

  VAR_4[VAR_6] = &VAR_7->plane;
 };

 for (VAR_6 = 0; VAR_6 < VAR_5->cfg->ui_num; VAR_6++) {
  struct sun8i_ui_layer *VAR_8;

  VAR_8 = FUNC_6(VAR_2, VAR_5, VAR_6);
  if (FUNC_2(VAR_8)) {
   FUNC_3(VAR_2->dev, "Couldn't initialize %s plane\n",
    VAR_6 ? "overlay" : "primary");
   return FUNC_0(VAR_8);
  };

  VAR_4[VAR_5->cfg->vi_num + VAR_6] = &VAR_8->plane;
 };

 return VAR_4;
}
