
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_object {int dummy; } ;
struct drm_plane {struct drm_mode_object base; } ;
struct drm_device {struct armada_private* dev_private; } ;
struct armada_private {int saturation_prop; int contrast_prop; int brightness_prop; int colorkey_mode_prop; int colorkey_alpha_prop; int colorkey_val_prop; int colorkey_max_prop; int colorkey_min_prop; int colorkey_prop; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct drm_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct drm_mode_object*,int ,int) ;
 int FUNC_4 (struct drm_plane*,int,int,int ,int ) ;
 int FUNC_5 (struct drm_plane*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_plane*,unsigned long,int *,int ,int ,int *,int ,int *) ;
 int FUNC_7 (struct drm_plane*) ;
 struct drm_plane* FUNC_8 (int,int ) ;

int FUNC_9(struct drm_device *VAR_14, unsigned long VAR_15)
{
 struct armada_private *VAR_16 = VAR_14->dev_private;
 struct drm_mode_object *VAR_17;
 struct drm_plane *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_2(VAR_14);
 if (VAR_19)
  return VAR_19;

 VAR_18 = FUNC_8(sizeof(*VAR_18), VAR_10);
 if (!VAR_18)
  return -VAR_9;

 FUNC_5(VAR_18, &VAR_11);

 VAR_19 = FUNC_6(VAR_14, VAR_18, VAR_15,
           &VAR_13,
           VAR_12,
           FUNC_0(VAR_12),
           ((void*)0),
           VAR_8, ((void*)0));
 if (VAR_19) {
  FUNC_7(VAR_18);
  return VAR_19;
 }

 VAR_17 = &VAR_18->base;
 FUNC_3(VAR_17, VAR_16->colorkey_prop,
       0x0101fe);
 FUNC_3(VAR_17, VAR_16->colorkey_min_prop,
       0x0101fe);
 FUNC_3(VAR_17, VAR_16->colorkey_max_prop,
       0x0101fe);
 FUNC_3(VAR_17, VAR_16->colorkey_val_prop,
       0x0101fe);
 FUNC_3(VAR_17, VAR_16->colorkey_alpha_prop,
       0x000000);
 FUNC_3(VAR_17, VAR_16->colorkey_mode_prop,
       VAR_0);
 FUNC_3(VAR_17, VAR_16->brightness_prop,
       256 + VAR_1);
 FUNC_3(VAR_17, VAR_16->contrast_prop,
       VAR_2);
 FUNC_3(VAR_17, VAR_16->saturation_prop,
       VAR_4);

 VAR_19 = FUNC_4(VAR_18,
      FUNC_1(VAR_5) |
      FUNC_1(VAR_6),
      FUNC_1(VAR_7),
      VAR_3,
      VAR_7);

 return VAR_19;
}
