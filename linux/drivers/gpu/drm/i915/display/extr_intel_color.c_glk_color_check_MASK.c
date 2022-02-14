
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ctm; scalar_t__ degamma_lut; scalar_t__ gamma_lut; } ;
struct intel_crtc_state {int gamma_enable; int csc_enable; scalar_t__ output_format; scalar_t__ csc_mode; int gamma_mode; scalar_t__ limited_color_range; TYPE_1__ base; int c8_planes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_crtc_state*) ;
 int FUNC_1 (struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_crtc_state*) ;

__attribute__((used)) static int FUNC_3(struct intel_crtc_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->gamma_enable =
  VAR_1->base.gamma_lut &&
  !VAR_1->c8_planes;


 VAR_1->csc_enable =
  VAR_1->base.degamma_lut ||
  VAR_1->output_format != VAR_0 ||
  VAR_1->base.ctm || VAR_1->limited_color_range;

 VAR_1->gamma_mode = FUNC_1(VAR_1);

 VAR_1->csc_mode = 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
