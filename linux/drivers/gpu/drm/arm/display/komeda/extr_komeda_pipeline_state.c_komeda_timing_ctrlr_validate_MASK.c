
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_timing_ctrlr_state {int base; } ;
struct komeda_timing_ctrlr {int base; } ;
struct komeda_data_flow_cfg {int input; } ;
struct TYPE_2__ {int state; struct drm_crtc* crtc; } ;
struct komeda_crtc_state {TYPE_1__ base; } ;
struct komeda_component_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 scalar_t__ FUNC_0 (struct komeda_component_state*) ;
 int FUNC_1 (struct komeda_component_state*) ;
 int FUNC_2 (int *,int *,int ) ;
 struct komeda_component_state* FUNC_3 (int *,int ,struct drm_crtc*,struct drm_crtc*) ;
 int FUNC_4 (int *,int *,int ) ;
 struct komeda_timing_ctrlr_state* FUNC_5 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_6(struct komeda_timing_ctrlr *VAR_0,
        struct komeda_crtc_state *VAR_1,
        struct komeda_data_flow_cfg *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_1->base.crtc;
 struct komeda_timing_ctrlr_state *VAR_4;
 struct komeda_component_state *VAR_5;

 VAR_5 = FUNC_3(&VAR_0->base,
   VAR_1->base.state, VAR_3, VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_5(VAR_5);

 FUNC_2(&VAR_4->base, &VAR_2->input, 0);
 FUNC_4(&VAR_2->input, &VAR_0->base, 0);

 return 0;
}
