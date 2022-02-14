
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int gamma_enable; int cgm_mode; int gamma_mode; int c8_planes; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_crtc_state*) ;
 int FUNC_1 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state*) ;
 int FUNC_3 (struct intel_crtc_state*) ;

__attribute__((used)) static int FUNC_4(struct intel_crtc_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;





 VAR_1->gamma_enable =
  FUNC_2(VAR_1) &&
  !VAR_1->c8_planes;

 VAR_1->gamma_mode = VAR_0;

 VAR_1->cgm_mode = FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
