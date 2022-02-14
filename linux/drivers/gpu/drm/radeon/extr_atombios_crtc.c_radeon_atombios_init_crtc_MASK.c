
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; int base; int * connector; int * encoder; scalar_t__ adjusted_clock; int pll_id; scalar_t__ crtc_offset; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct drm_device *VAR_10,
          struct radeon_crtc *VAR_11)
{
 struct radeon_device *VAR_12 = VAR_10->dev_private;

 if (FUNC_0(VAR_12)) {
  switch (VAR_11->crtc_id) {
  case 0:
  default:
   VAR_11->crtc_offset = VAR_3;
   break;
  case 1:
   VAR_11->crtc_offset = VAR_4;
   break;
  case 2:
   VAR_11->crtc_offset = VAR_5;
   break;
  case 3:
   VAR_11->crtc_offset = VAR_6;
   break;
  case 4:
   VAR_11->crtc_offset = VAR_7;
   break;
  case 5:
   VAR_11->crtc_offset = VAR_8;
   break;
  }
 } else {
  if (VAR_11->crtc_id == 1)
   VAR_11->crtc_offset =
    VAR_2 - VAR_1;
  else
   VAR_11->crtc_offset = 0;
 }
 VAR_11->pll_id = VAR_0;
 VAR_11->adjusted_clock = 0;
 VAR_11->encoder = ((void*)0);
 VAR_11->connector = ((void*)0);
 FUNC_1(&VAR_11->base, &VAR_9);
}
