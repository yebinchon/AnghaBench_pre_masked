
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dummy; } ;


 int FUNC_0 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state const*) ;

__attribute__((used)) static void
FUNC_3(struct intel_encoder *VAR_0,
   const struct intel_crtc_state *VAR_1)
{
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
