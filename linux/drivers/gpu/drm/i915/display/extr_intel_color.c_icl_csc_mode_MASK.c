
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ ctm; } ;
struct intel_crtc_state {scalar_t__ output_format; scalar_t__ limited_color_range; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct intel_crtc_state *VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3->base.ctm)
  VAR_4 |= VAR_0;

 if (VAR_3->output_format != VAR_2 ||
     VAR_3->limited_color_range)
  VAR_4 |= VAR_1;

 return VAR_4;
}
