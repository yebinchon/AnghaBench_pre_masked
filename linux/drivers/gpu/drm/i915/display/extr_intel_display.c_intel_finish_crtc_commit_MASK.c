
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int private_flags; } ;
struct TYPE_4__ {TYPE_1__ mode; } ;
struct intel_crtc_state {TYPE_2__ base; scalar_t__ update_pipe; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 int VAR_0 ;
 struct intel_crtc_state* FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc_state* FUNC_1 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_2 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_3 (struct intel_crtc_state*) ;
 int FUNC_4 (struct intel_crtc_state*) ;

__attribute__((used)) static void FUNC_5(struct intel_atomic_state *VAR_1,
         struct intel_crtc *VAR_2)
{
 struct intel_crtc_state *VAR_3 =
  FUNC_1(VAR_1, VAR_2);
 struct intel_crtc_state *VAR_4 =
  FUNC_0(VAR_1, VAR_2);

 FUNC_3(VAR_4);

 if (VAR_4->update_pipe &&
     !FUNC_4(VAR_4) &&
     VAR_3->base.mode.private_flags & VAR_0)
  FUNC_2(VAR_2, VAR_4);
}
