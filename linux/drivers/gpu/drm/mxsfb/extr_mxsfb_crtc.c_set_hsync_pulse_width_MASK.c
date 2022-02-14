
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxsfb_drm_private {TYPE_1__* devdata; } ;
struct TYPE_2__ {int hs_wdth_mask; int hs_wdth_shift; } ;



__attribute__((used)) static u32 FUNC_0(struct mxsfb_drm_private *VAR_0, u32 VAR_1)
{
 return (VAR_1 & VAR_0->devdata->hs_wdth_mask) <<
  VAR_0->devdata->hs_wdth_shift;
}
