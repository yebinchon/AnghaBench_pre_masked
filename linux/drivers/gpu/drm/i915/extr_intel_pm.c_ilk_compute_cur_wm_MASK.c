
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int crtc_w; TYPE_2__* fb; } ;
struct intel_plane_state {TYPE_5__ base; } ;
struct TYPE_8__ {int crtc_htotal; } ;
struct TYPE_9__ {TYPE_3__ adjusted_mode; } ;
struct intel_crtc_state {TYPE_4__ base; int pixel_rate; } ;
struct TYPE_7__ {TYPE_1__* format; } ;
struct TYPE_6__ {int* cpp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (struct intel_crtc_state const*,struct intel_plane_state const*) ;

__attribute__((used)) static u32 FUNC_2(const struct intel_crtc_state *VAR_1,
         const struct intel_plane_state *VAR_2,
         u32 VAR_3)
{
 int VAR_4;

 if (VAR_3 == 0)
  return VAR_0;

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;

 VAR_4 = VAR_2->base.fb->format->cpp[0];

 return FUNC_0(VAR_1->pixel_rate,
         VAR_1->base.adjusted_mode.crtc_htotal,
         VAR_2->base.crtc_w, VAR_4, VAR_3);
}
