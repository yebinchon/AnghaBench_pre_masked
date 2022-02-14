
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
struct TYPE_9__ {int dst; TYPE_1__* fb; } ;
struct intel_plane_state {TYPE_4__ base; } ;
struct TYPE_7__ {int crtc_htotal; } ;
struct TYPE_8__ {TYPE_2__ adjusted_mode; } ;
struct intel_crtc_state {TYPE_3__ base; int pixel_rate; } ;
struct TYPE_10__ {int* cpp; } ;
struct TYPE_6__ {TYPE_5__* format; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 int FUNC_3 (struct intel_crtc_state const*,struct intel_plane_state const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static u32 FUNC_5(const struct intel_crtc_state *VAR_1,
         const struct intel_plane_state *VAR_2,
         u32 VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 if (VAR_3 == 0)
  return VAR_0;

 if (!FUNC_3(VAR_1, VAR_2))
  return 0;

 VAR_7 = VAR_2->base.fb->format->cpp[0];

 VAR_5 = FUNC_1(VAR_1->pixel_rate, VAR_7, VAR_3);

 if (!VAR_4)
  return VAR_5;

 VAR_6 = FUNC_2(VAR_1->pixel_rate,
     VAR_1->base.adjusted_mode.crtc_htotal,
     FUNC_0(&VAR_2->base.dst),
     VAR_7, VAR_3);

 return FUNC_4(VAR_5, VAR_6);
}
