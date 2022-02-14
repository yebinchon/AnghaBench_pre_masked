
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int output_types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(const struct intel_crtc_state *VAR_3)
{
 return VAR_3->output_types &
  ((1 << VAR_0) |
   (1 << VAR_1) |
   (1 << VAR_2));
}
