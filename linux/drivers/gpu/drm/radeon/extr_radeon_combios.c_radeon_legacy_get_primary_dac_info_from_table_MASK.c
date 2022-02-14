
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_primary_dac {int ps2_pdac_adj; } ;
struct radeon_device {size_t family; } ;


 int * VAR_0 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_1,
         struct radeon_encoder_primary_dac *VAR_2)
{
 VAR_2->ps2_pdac_adj = VAR_0[VAR_1->family];
 return;
}
