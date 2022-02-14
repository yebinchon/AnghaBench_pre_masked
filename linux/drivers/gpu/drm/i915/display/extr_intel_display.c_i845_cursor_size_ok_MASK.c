
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc_w; } ;
struct intel_plane_state {TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct intel_plane_state const*) ;

__attribute__((used)) static bool FUNC_2(const struct intel_plane_state *VAR_0)
{
 int VAR_1 = VAR_0->base.crtc_w;





 return FUNC_1(VAR_0) && FUNC_0(VAR_1, 64);
}
