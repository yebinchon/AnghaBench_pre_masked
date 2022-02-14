
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_encoder_phys {scalar_t__ enable_state; scalar_t__ split_role; TYPE_2__* parent; } ;
struct dpu_crtc_state {scalar_t__ num_mixers; } ;
typedef enum dpu_3d_blend_mode { ____Placeholder_dpu_3d_blend_mode } dpu_3d_blend_mode ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dpu_crtc_state* FUNC_0 (int ) ;

__attribute__((used)) static inline enum dpu_3d_blend_mode FUNC_1(
  struct dpu_encoder_phys *VAR_5)
{
 struct dpu_crtc_state *VAR_6;

 if (!VAR_5 || VAR_5->enable_state == VAR_3)
  return VAR_1;

 VAR_6 = FUNC_0(VAR_5->parent->crtc->state);

 if (VAR_5->split_role == VAR_4 &&
     VAR_6->num_mixers == VAR_2)
  return VAR_0;

 return VAR_1;
}
