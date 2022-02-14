
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pixel_blend_mode; TYPE_2__* fb; } ;
struct intel_plane_state {TYPE_3__ base; } ;
struct TYPE_5__ {TYPE_1__* format; } ;
struct TYPE_4__ {int has_alpha; } ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_1(const struct intel_plane_state *VAR_3)
{
 if (!VAR_3->base.fb->format->has_alpha)
  return VAR_0;

 switch (VAR_3->base.pixel_blend_mode) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_2;
 case 130:
  return VAR_1;
 default:
  FUNC_0(VAR_3->base.pixel_blend_mode);
  return VAR_0;
 }
}
