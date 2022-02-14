
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_engine {int dummy; } ;
struct drm_plane {int dummy; } ;
struct sun4i_layer {int id; struct drm_plane plane; } ;
struct sun4i_backend {int dummy; } ;
struct drm_device {int dev; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_plane** FUNC_0 (struct sun4i_layer*) ;
 struct drm_plane** FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sun4i_layer*) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,char*) ;
 struct drm_plane** FUNC_4 (int ,int,int,int ) ;
 struct sun4i_backend* FUNC_5 (struct sunxi_engine*) ;
 struct sun4i_layer* FUNC_6 (struct drm_device*,struct sun4i_backend*,int) ;

struct drm_plane **FUNC_7(struct drm_device *VAR_5,
         struct sunxi_engine *VAR_6)
{
 struct drm_plane **VAR_7;
 struct sun4i_backend *VAR_8 = FUNC_5(VAR_6);
 int VAR_9;


 VAR_7 = FUNC_4(VAR_5->dev, VAR_4 + 1,
         sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return FUNC_1(-VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  enum drm_plane_type VAR_10 = VAR_9 ? VAR_0 : VAR_1;
  struct sun4i_layer *VAR_11;

  VAR_11 = FUNC_6(VAR_5, VAR_8, VAR_10);
  if (FUNC_2(VAR_11)) {
   FUNC_3(VAR_5->dev, "Couldn't initialize %s plane\n",
    VAR_9 ? "overlay" : "primary");
   return FUNC_0(VAR_11);
  };

  VAR_11->id = VAR_9;
  VAR_7[VAR_9] = &VAR_11->plane;
 };

 return VAR_7;
}
