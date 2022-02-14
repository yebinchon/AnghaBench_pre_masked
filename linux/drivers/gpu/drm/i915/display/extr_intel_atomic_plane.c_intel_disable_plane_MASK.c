
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_plane {int (* disable_plane ) (struct intel_plane*,struct intel_crtc_state const*) ;int base; } ;
struct TYPE_2__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;


 int FUNC_0 (struct intel_plane*,struct intel_crtc_state const*) ;
 struct intel_crtc* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct intel_crtc*) ;

void FUNC_3(struct intel_plane *VAR_0,
    const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_1(VAR_1->base.crtc);

 FUNC_2(&VAR_0->base, VAR_2);
 VAR_0->disable_plane(VAR_0, VAR_1);
}
