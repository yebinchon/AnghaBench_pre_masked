
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
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct intel_crtc_state*,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_crtc *VAR_9,
        struct intel_crtc_state *VAR_10)
{
 VAR_10->dpll_hw_state.dpll = VAR_2 |
  VAR_4 | VAR_6;
 if (VAR_9->pipe != VAR_8)
  VAR_10->dpll_hw_state.dpll |= VAR_1;


 if (!FUNC_0(VAR_10, VAR_7))
  VAR_10->dpll_hw_state.dpll |= VAR_5 |
   VAR_0;

 VAR_10->dpll_hw_state.dpll_md =
  (VAR_10->pixel_multiplier - 1) << VAR_3;
}
