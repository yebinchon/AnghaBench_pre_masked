
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_tv_dac {int ps2_tvdac_adj; int pal_tvdac_adj; int ntsc_tvdac_adj; } ;
struct radeon_device {size_t family; int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_3,
           struct radeon_encoder_tv_dac *VAR_4)
{
 VAR_4->ps2_tvdac_adj = VAR_2[VAR_3->family];
 if ((VAR_3->flags & VAR_1) && (VAR_3->family == VAR_0))
  VAR_4->ps2_tvdac_adj = 0x00880000;
 VAR_4->pal_tvdac_adj = VAR_4->ps2_tvdac_adj;
 VAR_4->ntsc_tvdac_adj = VAR_4->ps2_tvdac_adj;
 return;
}
