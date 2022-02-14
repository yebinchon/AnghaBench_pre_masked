
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int csc_mode; int gamma_mode; } ;


 int FUNC_0 (struct intel_crtc_state*) ;
 int FUNC_1 (struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_crtc_state*) ;

__attribute__((used)) static int FUNC_3(struct intel_crtc_state *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_0->gamma_mode = FUNC_2(VAR_0);

 VAR_0->csc_mode = FUNC_1(VAR_0);

 return 0;
}
