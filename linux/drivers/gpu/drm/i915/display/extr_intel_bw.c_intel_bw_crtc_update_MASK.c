
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {size_t pipe; } ;
struct intel_bw_state {int * num_active_planes; int * data_rate; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct intel_crtc_state const*) ;
 int FUNC_2 (struct intel_crtc_state const*) ;
 int FUNC_3 (size_t) ;
 struct intel_crtc* FUNC_4 (int ) ;

void FUNC_5(struct intel_bw_state *VAR_0,
     const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_4(VAR_1->base.crtc);

 VAR_0->data_rate[VAR_2->pipe] =
  FUNC_1(VAR_1);
 VAR_0->num_active_planes[VAR_2->pipe] =
  FUNC_2(VAR_1);

 FUNC_0("pipe %c data rate %u num active planes %u\n",
        FUNC_3(VAR_2->pipe),
        VAR_0->data_rate[VAR_2->pipe],
        VAR_0->num_active_planes[VAR_2->pipe]);
}
