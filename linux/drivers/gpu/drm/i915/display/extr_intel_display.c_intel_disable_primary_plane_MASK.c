
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_plane {int (* disable_plane ) (struct intel_plane*,struct intel_crtc_state const*) ;} ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int primary; } ;
struct intel_crtc {TYPE_2__ base; } ;


 int FUNC_0 (struct intel_plane*,struct intel_crtc_state const*) ;
 struct intel_crtc* FUNC_1 (int ) ;
 struct intel_plane* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_1(VAR_0->base.crtc);
 struct intel_plane *VAR_2 = FUNC_2(VAR_1->base.primary);

 VAR_2->disable_plane(VAR_2, VAR_0);
}
