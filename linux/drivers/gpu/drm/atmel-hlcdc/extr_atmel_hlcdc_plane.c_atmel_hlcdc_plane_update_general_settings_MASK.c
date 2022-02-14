
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_format_info {scalar_t__ format; scalar_t__ has_alpha; } ;
struct TYPE_8__ {int alpha; TYPE_1__* fb; } ;
struct atmel_hlcdc_plane_state {unsigned int ahb_id; scalar_t__ disc_w; scalar_t__ disc_h; TYPE_3__ base; } ;
struct TYPE_10__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct atmel_hlcdc_plane {TYPE_5__ layer; TYPE_2__ base; } ;
struct TYPE_9__ {int general_config; } ;
struct atmel_hlcdc_layer_desc {TYPE_4__ layout; } ;
struct TYPE_6__ {struct drm_format_info* format; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (TYPE_5__*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct atmel_hlcdc_plane *VAR_13,
     struct atmel_hlcdc_plane_state *VAR_14)
{
 unsigned int VAR_15 = VAR_2 | VAR_14->ahb_id;
 const struct atmel_hlcdc_layer_desc *VAR_16 = VAR_13->layer.desc;
 const struct drm_format_info *VAR_17 = VAR_14->base.fb->format;





 if (VAR_17->format == VAR_11)
  VAR_15 |= VAR_4;

 FUNC_1(&VAR_13->layer, VAR_3,
        VAR_15);

 VAR_15 = VAR_1 | VAR_10;

 if (VAR_13->base.type != VAR_12) {
  VAR_15 |= VAR_9 | VAR_7 |
         VAR_6;

  if (VAR_17->has_alpha)
   VAR_15 |= VAR_8;
  else
   VAR_15 |= VAR_5 |
          FUNC_0(VAR_14->base.alpha);
 }

 if (VAR_14->disc_h && VAR_14->disc_w)
  VAR_15 |= VAR_0;

 FUNC_1(&VAR_13->layer, VAR_16->layout.general_config,
        VAR_15);
}
