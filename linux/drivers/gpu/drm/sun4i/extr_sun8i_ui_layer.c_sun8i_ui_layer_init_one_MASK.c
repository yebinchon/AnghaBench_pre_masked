
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun8i_ui_layer {int channel; scalar_t__ overlay; struct sun8i_mixer* mixer; int plane; } ;
struct sun8i_mixer {TYPE_1__* cfg; } ;
struct drm_device {int dev; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_2__ {int vi_num; unsigned int ui_num; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sun8i_ui_layer* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 struct sun8i_ui_layer* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *,int,int ,unsigned int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*,int *,int ,int *,int ,int ,int *,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct sun8i_ui_layer *FUNC_7(struct drm_device *VAR_7,
            struct sun8i_mixer *VAR_8,
            int VAR_9)
{
 enum drm_plane_type VAR_10 = VAR_0;
 int VAR_11 = VAR_8->cfg->vi_num + VAR_9;
 struct sun8i_ui_layer *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(VAR_7->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return FUNC_1(-VAR_2);

 if (VAR_9 == 0)
  VAR_10 = VAR_1;


 VAR_14 = FUNC_6(VAR_7, &VAR_12->plane, 0,
           &VAR_5,
           VAR_4,
           FUNC_0(VAR_4),
           ((void*)0), VAR_10, ((void*)0));
 if (VAR_14) {
  FUNC_2(VAR_7->dev, "Couldn't initialize layer\n");
  return FUNC_1(VAR_14);
 }

 VAR_13 = VAR_8->cfg->ui_num + VAR_8->cfg->vi_num;

 VAR_14 = FUNC_4(&VAR_12->plane, VAR_11,
          0, VAR_13 - 1);
 if (VAR_14) {
  FUNC_2(VAR_7->dev, "Couldn't add zpos property\n");
  return FUNC_1(VAR_14);
 }

 FUNC_5(&VAR_12->plane, &VAR_6);
 VAR_12->mixer = VAR_8;
 VAR_12->channel = VAR_11;
 VAR_12->overlay = 0;

 return VAR_12;
}
