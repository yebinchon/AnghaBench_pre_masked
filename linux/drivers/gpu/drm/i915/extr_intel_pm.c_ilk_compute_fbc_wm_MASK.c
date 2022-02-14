
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dst; TYPE_2__* fb; } ;
struct intel_plane_state {TYPE_3__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_5__ {TYPE_1__* format; } ;
struct TYPE_4__ {int* cpp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct intel_crtc_state const*,struct intel_plane_state const*) ;

__attribute__((used)) static u32 FUNC_3(const struct intel_crtc_state *VAR_0,
         const struct intel_plane_state *VAR_1,
         u32 VAR_2)
{
 int VAR_3;

 if (!FUNC_2(VAR_0, VAR_1))
  return 0;

 VAR_3 = VAR_1->base.fb->format->cpp[0];

 return FUNC_1(VAR_2, FUNC_0(&VAR_1->base.dst), VAR_3);
}
