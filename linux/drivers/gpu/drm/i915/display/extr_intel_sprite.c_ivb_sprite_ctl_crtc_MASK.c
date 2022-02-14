
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc_state {scalar_t__ csc_enable; scalar_t__ gamma_enable; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(const struct intel_crtc_state *VAR_2)
{
 u32 VAR_3 = 0;

 if (VAR_2->gamma_enable)
  VAR_3 |= VAR_0;

 if (VAR_2->csc_enable)
  VAR_3 |= VAR_1;

 return VAR_3;
}
