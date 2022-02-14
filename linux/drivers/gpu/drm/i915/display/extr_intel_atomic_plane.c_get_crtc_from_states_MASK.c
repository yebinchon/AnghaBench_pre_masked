
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ crtc; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;


 struct intel_crtc* FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct intel_crtc *
FUNC_1(const struct intel_plane_state *VAR_0,
       const struct intel_plane_state *VAR_1)
{
 if (VAR_1->base.crtc)
  return FUNC_0(VAR_1->base.crtc);

 if (VAR_0->base.crtc)
  return FUNC_0(VAR_0->base.crtc);

 return ((void*)0);
}
