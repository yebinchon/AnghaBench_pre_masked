
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc_state {int gamma_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state*) ;

__attribute__((used)) static u32 FUNC_1(struct intel_crtc_state *VAR_2)
{
 if (!VAR_2->gamma_enable ||
     FUNC_0(VAR_2))
  return VAR_1;
 else
  return VAR_0;
}
