
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct TYPE_2__ {scalar_t__ active; } ;
struct intel_crtc_state {int lane_count; TYPE_1__ base; } ;
struct intel_crtc {scalar_t__ active; } ;
struct intel_atomic_state {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct intel_crtc_state* FUNC_2 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;

__attribute__((used)) static void
FUNC_5(struct intel_atomic_state *VAR_0,
    struct intel_encoder *VAR_1,
    struct intel_crtc *VAR_2)
{
 struct intel_crtc_state *VAR_3 =
  VAR_2 ? FUNC_2(VAR_0, VAR_2) : ((void*)0);
 int VAR_4 = VAR_3 ? VAR_3->lane_count : 1;

 FUNC_0(VAR_2 && VAR_2->active);

 FUNC_3(FUNC_1(&VAR_1->base), VAR_4);
 if (VAR_3 && VAR_3->base.active)
  FUNC_4(VAR_0, VAR_2, VAR_1);
}
