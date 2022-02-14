
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct i40iw_dev_hw_stats {scalar_t__* stats_value_32; } ;
struct i40iw_dev_hw_stats_offsets {int * stats_offset_32; } ;
struct i40iw_vsi_pestat {int hw; struct i40iw_dev_hw_stats hw_stats; struct i40iw_dev_hw_stats last_read_hw_stats; struct i40iw_dev_hw_stats_offsets hw_stats_offsets; } ;
typedef enum i40iw_hw_stats_index_32b { ____Placeholder_i40iw_hw_stats_index_32b } i40iw_hw_stats_index_32b ;


 scalar_t__ FUNC_0 (int ,int ) ;

void FUNC_1(struct i40iw_vsi_pestat *VAR_0,
       enum i40iw_hw_stats_index_32b VAR_1,
       u64 *VAR_2)
{
 struct i40iw_dev_hw_stats_offsets *VAR_3 =
  &VAR_0->hw_stats_offsets;
 struct i40iw_dev_hw_stats *VAR_4 = &VAR_0->last_read_hw_stats;
 struct i40iw_dev_hw_stats *VAR_5 = &VAR_0->hw_stats;
 u64 VAR_6 = 0;
 u32 VAR_7 = VAR_3->stats_offset_32[VAR_1];

 VAR_6 = FUNC_0(VAR_0->hw, VAR_7);

 if (VAR_6 < VAR_4->stats_value_32[VAR_1])
  VAR_5->stats_value_32[VAR_1] += VAR_6;
 else
  VAR_5->stats_value_32[VAR_1] +=
   VAR_6 - VAR_4->stats_value_32[VAR_1];
 VAR_4->stats_value_32[VAR_1] = VAR_6;
 *VAR_2 = VAR_5->stats_value_32[VAR_1];
}
