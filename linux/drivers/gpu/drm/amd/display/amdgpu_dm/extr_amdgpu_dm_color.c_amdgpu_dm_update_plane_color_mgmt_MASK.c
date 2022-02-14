
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_color_lut {int dummy; } ;
struct TYPE_3__ {int degamma_lut; } ;
struct dm_crtc_state {scalar_t__ cm_is_degamma_srgb; TYPE_1__ base; scalar_t__ cm_has_degamma; } ;
struct dc_plane_state {TYPE_2__* in_transfer_func; } ;
struct TYPE_4__ {void* tf; int type; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 struct drm_color_lut* FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,struct drm_color_lut const*,scalar_t__) ;

int FUNC_3(struct dm_crtc_state *VAR_6,
          struct dc_plane_state *VAR_7)
{
 const struct drm_color_lut *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 if (VAR_6->cm_has_degamma) {
  VAR_8 = FUNC_1(VAR_6->base.degamma_lut,
       &VAR_9);
  FUNC_0(VAR_9 == VAR_0);

  VAR_7->in_transfer_func->type =
   VAR_2;
  if (VAR_6->cm_is_degamma_srgb)
   VAR_7->in_transfer_func->tf =
    VAR_5;
  else
   VAR_7->in_transfer_func->tf =
    VAR_4;

  VAR_10 = FUNC_2(VAR_7->in_transfer_func,
       VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;
 } else if (VAR_6->cm_is_degamma_srgb) {




  VAR_7->in_transfer_func->type = VAR_3;
  VAR_7->in_transfer_func->tf = VAR_5;
 } else {

  VAR_7->in_transfer_func->type = VAR_1;
  VAR_7->in_transfer_func->tf = VAR_4;
 }

 return 0;
}
