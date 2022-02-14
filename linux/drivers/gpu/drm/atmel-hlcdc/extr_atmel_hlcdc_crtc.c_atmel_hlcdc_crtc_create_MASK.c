
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {struct atmel_hlcdc_dc* dev_private; } ;
struct TYPE_6__ {int possible_crtcs; } ;
struct atmel_hlcdc_plane {TYPE_2__ base; } ;
struct atmel_hlcdc_dc {int * crtc; TYPE_4__** layers; } ;
struct atmel_hlcdc_crtc {int id; int base; struct atmel_hlcdc_dc* dc; } ;
struct TYPE_7__ {TYPE_1__* desc; } ;
struct TYPE_5__ {int type; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 struct atmel_hlcdc_plane* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,int *,TYPE_2__*,TYPE_2__*,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct atmel_hlcdc_crtc* FUNC_8 (int,int ) ;
 int VAR_6 ;

int FUNC_9(struct drm_device *VAR_7)
{
 struct atmel_hlcdc_plane *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct atmel_hlcdc_dc *VAR_10 = VAR_7->dev_private;
 struct atmel_hlcdc_crtc *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_11->dc = VAR_10;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (!VAR_10->layers[VAR_13])
   continue;

  switch (VAR_10->layers[VAR_13]->desc->type) {
  case 129:
   VAR_8 = FUNC_1(VAR_10->layers[VAR_13]);
   break;

  case 128:
   VAR_9 = FUNC_1(VAR_10->layers[VAR_13]);
   break;

  default:
   break;
  }
 }

 VAR_12 = FUNC_5(VAR_7, &VAR_11->base, &VAR_8->base,
     &VAR_9->base, &VAR_5,
     ((void*)0));
 if (VAR_12 < 0)
  goto fail;

 VAR_11->id = FUNC_4(&VAR_11->base);

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  struct atmel_hlcdc_plane *VAR_14;

  if (VAR_10->layers[VAR_13] &&
      VAR_10->layers[VAR_13]->desc->type == VAR_2) {
   VAR_14 = FUNC_1(VAR_10->layers[VAR_13]);
   VAR_14->base.possible_crtcs = 1 << VAR_11->id;
  }
 }

 FUNC_3(&VAR_11->base, &VAR_6);
 FUNC_6(&VAR_11->base);

 FUNC_7(&VAR_11->base, VAR_0);
 FUNC_2(&VAR_11->base, 0, 0,
       VAR_0);

 VAR_10->crtc = &VAR_11->base;

 return 0;

fail:
 FUNC_0(&VAR_11->base);
 return VAR_12;
}
