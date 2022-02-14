
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int crtc; } ;
struct intel_crtc_state {int c8_planes; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 struct intel_crtc_state* FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_atomic_state* FUNC_1 (int ) ;
 struct intel_crtc* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_2(VAR_0->base.crtc);
 struct intel_atomic_state *VAR_2 =
  FUNC_1(VAR_0->base.state);
 const struct intel_crtc_state *VAR_3 =
  FUNC_0(VAR_2, VAR_1);

 return !VAR_3->c8_planes != !VAR_0->c8_planes;
}
