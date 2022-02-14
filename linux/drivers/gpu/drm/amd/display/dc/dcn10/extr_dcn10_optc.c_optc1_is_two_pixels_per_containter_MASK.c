
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ycbcr422_simple; } ;
struct TYPE_3__ {scalar_t__ DSC; } ;
struct dc_crtc_timing {scalar_t__ pixel_encoding; TYPE_2__ dsc_cfg; TYPE_1__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(const struct dc_crtc_timing *VAR_2)
{
 bool VAR_3 = VAR_2->pixel_encoding == VAR_0;





 return VAR_3;
}
