
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc_state {scalar_t__ gamma_enable; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct intel_crtc_state *VAR_1)
{
 u32 VAR_2 = 0;

 if (VAR_1->gamma_enable)
  VAR_2 |= VAR_0;

 return VAR_2;
}
