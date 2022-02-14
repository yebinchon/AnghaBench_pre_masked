
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_crtc_scaler_state {TYPE_2__* scalers; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {struct intel_crtc_scaler_state scaler_state; TYPE_1__ base; } ;
struct intel_crtc {int num_scalers; } ;
struct TYPE_4__ {int in_use; } ;


 int FUNC_0 (struct intel_crtc*,int) ;
 struct intel_crtc* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_1(VAR_0->base.crtc);
 const struct intel_crtc_scaler_state *VAR_2 =
  &VAR_0->scaler_state;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1->num_scalers; VAR_3++) {
  if (!VAR_2->scalers[VAR_3].in_use)
   FUNC_0(VAR_1, VAR_3);
 }
}
