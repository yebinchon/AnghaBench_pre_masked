
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpll; int dpll_md; } ;
struct intel_crtc_state {int pixel_multiplier; TYPE_1__ dpll_hw_state; } ;
struct intel_crtc {scalar_t__ pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct intel_crtc_state*,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_crtc *VAR_8,
        struct intel_crtc_state *VAR_9)
{
 VAR_9->dpll_hw_state.dpll = VAR_3 |
  VAR_2 | VAR_5;
 if (VAR_8->pipe != VAR_7)
  VAR_9->dpll_hw_state.dpll |= VAR_0;


 if (!FUNC_0(VAR_9, VAR_6))
  VAR_9->dpll_hw_state.dpll |= VAR_4;

 VAR_9->dpll_hw_state.dpll_md =
  (VAR_9->pixel_multiplier - 1) << VAR_1;
}
