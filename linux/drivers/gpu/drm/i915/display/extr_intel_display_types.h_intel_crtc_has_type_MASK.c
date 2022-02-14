
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int output_types; } ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;



__attribute__((used)) static inline bool
FUNC_0(const struct intel_crtc_state *VAR_0,
      enum intel_output_type VAR_1)
{
 return VAR_0->output_types & (1 << VAR_1);
}
