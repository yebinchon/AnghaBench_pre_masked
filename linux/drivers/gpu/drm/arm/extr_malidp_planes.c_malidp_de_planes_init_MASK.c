
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct malidp_plane {int base; TYPE_4__* layer; TYPE_5__* hwdev; } ;
struct malidp_hw_regmap {int features; int n_pixel_formats; int n_layers; TYPE_4__* layers; TYPE_3__* pixel_formats; } ;
struct malidp_drm {TYPE_5__* dev; } ;
struct TYPE_7__ {int num_crtc; } ;
struct drm_device {TYPE_2__ mode_config; struct malidp_drm* dev_private; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
typedef enum drm_color_range { ____Placeholder_drm_color_range } drm_color_range ;
typedef enum drm_color_encoding { ____Placeholder_drm_color_encoding } drm_color_encoding ;
struct TYPE_10__ {TYPE_1__* hw; } ;
struct TYPE_9__ {int id; scalar_t__ base; } ;
struct TYPE_8__ {int layer; int format; } ;
struct TYPE_6__ {struct malidp_hw_regmap map; } ;


 int const VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (char*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned int,unsigned int,int,int) ;
 int FUNC_5 (int *,unsigned long,unsigned long) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct drm_device*,int *,unsigned long,int *,int *,int,int const*,int,int *) ;
 int * FUNC_8 (int,int,int ) ;
 int FUNC_9 (int *) ;
 struct malidp_plane* FUNC_10 (int,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_11 (struct malidp_plane*,int,int) ;
 int* VAR_29 ;
 int FUNC_12 (TYPE_5__*,int ,scalar_t__) ;

int FUNC_13(struct drm_device *VAR_30)
{
 struct malidp_drm *VAR_31 = VAR_30->dev_private;
 const struct malidp_hw_regmap *VAR_32 = &VAR_31->dev->hw->map;
 struct malidp_plane *VAR_33 = ((void*)0);
 enum drm_plane_type VAR_34;
 unsigned long VAR_35 = 1 << VAR_30->mode_config.num_crtc;
 unsigned long VAR_36 = VAR_15 | VAR_18 | VAR_16 |
         VAR_17 | VAR_13 | VAR_14;
 unsigned int VAR_37 = FUNC_0(VAR_11) |
      FUNC_0(VAR_12) |
      FUNC_0(VAR_10);
 u32 *VAR_38;
 int VAR_39, VAR_40 = 0, VAR_41 = 0, VAR_42;
 u64 VAR_43[VAR_26];
 const u64 *VAR_44;

 VAR_44 = VAR_29;

 if (!(VAR_32->features & VAR_24)) {




  while (*VAR_44 != VAR_9) {
   if (!(*VAR_44 & VAR_0))
    VAR_43[VAR_41++] = *VAR_44;

   VAR_44++;
  }
  VAR_43[VAR_41++] = VAR_9;
  VAR_44 = VAR_43;
 }

 VAR_38 = FUNC_8(VAR_32->n_pixel_formats, sizeof(*VAR_38), VAR_22);
 if (!VAR_38) {
  VAR_39 = -VAR_21;
  goto cleanup;
 }

 for (VAR_40 = 0; VAR_40 < VAR_32->n_layers; VAR_40++) {
  u8 VAR_45 = VAR_32->layers[VAR_40].id;

  VAR_33 = FUNC_10(sizeof(*VAR_33), VAR_22);
  if (!VAR_33) {
   VAR_39 = -VAR_21;
   goto cleanup;
  }


  for (VAR_42 = 0, VAR_41 = 0; VAR_41 < VAR_32->n_pixel_formats; VAR_41++) {
   if ((VAR_32->pixel_formats[VAR_41].layer & VAR_45) == VAR_45)
    VAR_38[VAR_42++] = VAR_32->pixel_formats[VAR_41].format;
  }

  VAR_34 = (VAR_40 == 0) ? VAR_20 :
     VAR_19;




  VAR_39 = FUNC_7(VAR_30, &VAR_33->base, VAR_35,
    &VAR_27, VAR_38, VAR_42,
    (VAR_45 == VAR_1) ? ((void*)0) : VAR_44, VAR_34,
    ((void*)0));

  if (VAR_39 < 0)
   goto cleanup;

  FUNC_6(&VAR_33->base,
         &VAR_28);
  VAR_33->hwdev = VAR_31->dev;
  VAR_33->layer = &VAR_32->layers[VAR_40];

  FUNC_2(&VAR_33->base);
  FUNC_3(&VAR_33->base, VAR_37);

  if (VAR_45 == VAR_1) {

   continue;
  }

  FUNC_5(&VAR_33->base, VAR_15, VAR_36);
  FUNC_12(VAR_31->dev, VAR_23,
    VAR_33->layer->base + VAR_25);


  if (VAR_45 & (VAR_2 | VAR_3)) {

   enum drm_color_encoding VAR_46 = VAR_5;
   enum drm_color_range VAR_47 = VAR_8;

   VAR_39 = FUNC_4(&VAR_33->base,
     FUNC_0(VAR_5) | FUNC_0(VAR_6) | FUNC_0(VAR_4),


     FUNC_0(VAR_8) | FUNC_0(VAR_7),

     VAR_46, VAR_47);
   if (!VAR_39)

    FUNC_11(VAR_33, VAR_46, VAR_47);
   else
    FUNC_1("Failed to create video layer %d color properties\n", VAR_45);
  }
 }

 FUNC_9(VAR_38);

 return 0;

cleanup:
 FUNC_9(VAR_38);

 return VAR_39;
}
