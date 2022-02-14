
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(struct radeon_device *VAR_2, int VAR_3)
{
 struct radeon_crtc *VAR_4 = VAR_2->mode_info.crtcs[VAR_3];


 return !!(FUNC_0(VAR_0 + VAR_4->crtc_offset) &
  VAR_1);
}
