
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b_cr_slice_channel_hash {scalar_t__ enable_pmi_dual_data_mode; scalar_t__ ch_1_disabled; scalar_t__ slice_1_disabled; scalar_t__ slice_0_mem_disabled; } ;
struct b_cr_asym_mem_region1_mchbar {int slice1_asym_channel_select; scalar_t__ slice1_asym_enable; } ;
struct b_cr_asym_mem_region0_mchbar {int slice0_asym_channel_select; scalar_t__ slice0_asym_enable; } ;
struct b_cr_asym_2way_mem_region_mchbar {size_t asym_2way_intlv_mode; scalar_t__ asym_2way_interleave_enable; } ;



__attribute__((used)) static int FUNC_0(struct b_cr_slice_channel_hash *VAR_0,
    struct b_cr_asym_mem_region0_mchbar *VAR_1,
    struct b_cr_asym_mem_region1_mchbar *VAR_2,
    struct b_cr_asym_2way_mem_region_mchbar *VAR_3)
{
 const int VAR_4[] = { 0x5, 0xA, 0x3, 0xC };
 int VAR_5 = 0;

 if (VAR_3->asym_2way_interleave_enable)
  VAR_5 = VAR_4[VAR_3->asym_2way_intlv_mode];
 if (VAR_1->slice0_asym_enable)
  VAR_5 |= (1 << VAR_1->slice0_asym_channel_select);
 if (VAR_2->slice1_asym_enable)
  VAR_5 |= (4 << VAR_2->slice1_asym_channel_select);
 if (VAR_0->slice_0_mem_disabled)
  VAR_5 &= 0xc;
 if (VAR_0->slice_1_disabled)
  VAR_5 &= 0x3;
 if (VAR_0->ch_1_disabled || VAR_0->enable_pmi_dual_data_mode)
  VAR_5 &= 0x5;

 return VAR_5;
}
