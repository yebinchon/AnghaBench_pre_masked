
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b_cr_slice_channel_hash {int sym_slice0_channel_enabled; int sym_slice1_channel_enabled; scalar_t__ enable_pmi_dual_data_mode; scalar_t__ ch_1_disabled; int slice_1_disabled; int slice_0_mem_disabled; } ;



__attribute__((used)) static int FUNC_0(struct b_cr_slice_channel_hash *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->slice_0_mem_disabled)
  VAR_1 |= VAR_0->sym_slice0_channel_enabled;

 if (!VAR_0->slice_1_disabled)
  VAR_1 |= VAR_0->sym_slice1_channel_enabled << 2;

 if (VAR_0->ch_1_disabled || VAR_0->enable_pmi_dual_data_mode)
  VAR_1 &= 0x5;

 return VAR_1;
}
