
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dev; struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_plane {int layer; int base; } ;
struct atmel_hlcdc_layer_desc {scalar_t__ type; size_t id; TYPE_2__* formats; } ;
struct atmel_hlcdc_dc {int ** layers; TYPE_1__* hlcdc; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_4__ {int nformats; int formats; } ;
struct TYPE_3__ {int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct atmel_hlcdc_layer_desc const*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct atmel_hlcdc_plane*) ;
 struct atmel_hlcdc_plane* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*,int *,int ,int *,int ,int ,int *,int,int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_9,
        const struct atmel_hlcdc_layer_desc *VAR_10)
{
 struct atmel_hlcdc_dc *VAR_11 = VAR_9->dev_private;
 struct atmel_hlcdc_plane *VAR_12;
 enum drm_plane_type VAR_13;
 int VAR_14;

 VAR_12 = FUNC_2(VAR_9->dev, sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_5;

 FUNC_0(&VAR_12->layer, VAR_10, VAR_11->hlcdc->regmap);

 if (VAR_10->type == VAR_0)
  VAR_13 = VAR_4;
 else if (VAR_10->type == VAR_1)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_3;

 VAR_14 = FUNC_4(VAR_9, &VAR_12->base, 0,
           &VAR_8,
           VAR_10->formats->formats,
           VAR_10->formats->nformats,
           ((void*)0), VAR_13, ((void*)0));
 if (VAR_14)
  return VAR_14;

 FUNC_3(&VAR_12->base,
        &VAR_7);


 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_11->layers[VAR_10->id] = &VAR_12->layer;

 return 0;
}
