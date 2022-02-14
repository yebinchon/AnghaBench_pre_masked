
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct TYPE_3__ {int crtc_clock; int flags; } ;
struct TYPE_4__ {TYPE_1__ adjusted_mode; } ;
struct intel_crtc_state {int port_clock; TYPE_2__ base; int output_types; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_1,
     struct intel_crtc_state *VAR_2)
{
 VAR_2->output_types |= FUNC_0(VAR_0);

 VAR_2->base.adjusted_mode.flags |= FUNC_1(VAR_1);

 VAR_2->base.adjusted_mode.crtc_clock = VAR_2->port_clock;
}
