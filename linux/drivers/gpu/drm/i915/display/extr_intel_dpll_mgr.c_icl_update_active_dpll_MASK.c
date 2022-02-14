
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {scalar_t__ type; int base; } ;
struct intel_digital_port {scalar_t__ tc_mode; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;
typedef enum icl_port_dpll_id { ____Placeholder_icl_port_dpll_id } icl_port_dpll_id ;
struct TYPE_2__ {struct intel_digital_port* primary; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct intel_digital_port* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (struct intel_crtc_state*,int) ;
 struct intel_crtc_state* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*) ;

__attribute__((used)) static void FUNC_4(struct intel_atomic_state *VAR_5,
       struct intel_crtc *VAR_6,
       struct intel_encoder *VAR_7)
{
 struct intel_crtc_state *VAR_8 =
  FUNC_3(VAR_5, VAR_6);
 struct intel_digital_port *VAR_9;
 enum icl_port_dpll_id VAR_10 = VAR_0;

 VAR_9 = VAR_7->type == VAR_2 ?
  FUNC_1(&VAR_7->base)->primary :
  FUNC_0(&VAR_7->base);

 if (VAR_9 &&
     (VAR_9->tc_mode == VAR_3 ||
      VAR_9->tc_mode == VAR_4))
  VAR_10 = VAR_1;

 FUNC_2(VAR_8, VAR_10);
}
