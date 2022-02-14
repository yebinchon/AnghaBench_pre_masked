
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct i40iw_dev_hw_stats {int * stats_value_32; int * stats_value_64; } ;
struct i40iw_dev_hw_stats_offsets {size_t* stats_offset_32; size_t* stats_offset_64; } ;
struct i40iw_vsi_pestat {TYPE_1__* hw; struct i40iw_dev_hw_stats last_read_hw_stats; struct i40iw_dev_hw_stats_offsets hw_stats_offsets; } ;
struct TYPE_2__ {size_t hw_addr; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;
 size_t FUNC_10 (int ) ;
 size_t FUNC_11 (int ) ;
 size_t FUNC_12 (int ) ;
 size_t FUNC_13 (int ) ;
 size_t FUNC_14 (int ) ;
 size_t FUNC_15 (int ) ;
 size_t FUNC_16 (int ) ;
 size_t FUNC_17 (int ) ;
 size_t FUNC_18 (int ) ;
 size_t FUNC_19 (int ) ;
 void* FUNC_20 (int ) ;
 size_t FUNC_21 (int ) ;
 size_t FUNC_22 (int ) ;
 size_t FUNC_23 (int ) ;
 size_t FUNC_24 (int ) ;
 size_t FUNC_25 (int ) ;
 size_t FUNC_26 (int ) ;
 size_t FUNC_27 (int ) ;
 size_t FUNC_28 (int ) ;
 size_t FUNC_29 (int ) ;
 size_t FUNC_30 (int ) ;
 size_t FUNC_31 (int ) ;
 size_t FUNC_32 (int ) ;
 size_t FUNC_33 (int ) ;
 size_t FUNC_34 (int ) ;
 size_t FUNC_35 (int ) ;
 size_t FUNC_36 (int ) ;
 size_t FUNC_37 (int ) ;
 size_t FUNC_38 (int ) ;
 size_t FUNC_39 (int ) ;
 size_t FUNC_40 (int ) ;
 size_t FUNC_41 (int ) ;
 size_t FUNC_42 (int ) ;
 size_t FUNC_43 (int ) ;
 size_t FUNC_44 (int ) ;
 size_t FUNC_45 (int ) ;
 size_t FUNC_46 (int ) ;
 size_t FUNC_47 (int ) ;
 size_t FUNC_48 (int ) ;
 size_t FUNC_49 (int ) ;
 size_t FUNC_50 (int ) ;
 size_t FUNC_51 (int ) ;
 size_t FUNC_52 (int ) ;
 size_t FUNC_53 (int ) ;
 void* FUNC_54 (int ) ;
 size_t FUNC_55 (int ) ;
 size_t FUNC_56 (int ) ;
 size_t FUNC_57 (int ) ;
 size_t FUNC_58 (int ) ;
 size_t FUNC_59 (int ) ;
 size_t FUNC_60 (int ) ;
 size_t FUNC_61 (int ) ;
 size_t FUNC_62 (int ) ;
 size_t FUNC_63 (int ) ;
 size_t FUNC_64 (int ) ;
 size_t FUNC_65 (int ) ;
 size_t FUNC_66 (int ) ;
 size_t FUNC_67 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 int FUNC_68 (TYPE_1__*,size_t) ;
 int FUNC_69 (size_t) ;

void FUNC_70(struct i40iw_vsi_pestat *VAR_36, u8 VAR_37, bool VAR_38)
{
 u32 VAR_39;
 u32 VAR_40;
 struct i40iw_dev_hw_stats_offsets *VAR_41 =
  &VAR_36->hw_stats_offsets;
 struct i40iw_dev_hw_stats *VAR_42 = &VAR_36->last_read_hw_stats;

 if (VAR_38) {
  VAR_41->stats_offset_32[VAR_0] =
    FUNC_0(VAR_37);
  VAR_41->stats_offset_32[VAR_5] =
    FUNC_5(VAR_37);
  VAR_41->stats_offset_32[VAR_8] =
    FUNC_8(VAR_37);
  VAR_41->stats_offset_32[VAR_11] =
    FUNC_11(VAR_37);
  VAR_41->stats_offset_32[VAR_16] =
    FUNC_16(VAR_37);
  VAR_41->stats_offset_32[VAR_18] =
    FUNC_18(VAR_37);
  VAR_41->stats_offset_32[VAR_31] =
    FUNC_29(VAR_37);
  VAR_41->stats_offset_32[VAR_32] =
    FUNC_30(VAR_37);
  VAR_41->stats_offset_32[VAR_33] =
    FUNC_31(VAR_37);

  VAR_41->stats_offset_64[VAR_3] =
    FUNC_3(VAR_37);
  VAR_41->stats_offset_64[VAR_4] =
    FUNC_4(VAR_37);
  VAR_41->stats_offset_64[VAR_1] =
    FUNC_1(VAR_37);
  VAR_41->stats_offset_64[VAR_2] =
    FUNC_2(VAR_37);
  VAR_41->stats_offset_64[VAR_9] =
    FUNC_9(VAR_37);
  VAR_41->stats_offset_64[VAR_10] =
    FUNC_10(VAR_37);
  VAR_41->stats_offset_64[VAR_6] =
    FUNC_6(VAR_37);
  VAR_41->stats_offset_64[VAR_7] =
    FUNC_7(VAR_37);
  VAR_41->stats_offset_64[VAR_14] =
    FUNC_14(VAR_37);
  VAR_41->stats_offset_64[VAR_15] =
    FUNC_15(VAR_37);
  VAR_41->stats_offset_64[VAR_12] =
    FUNC_12(VAR_37);
  VAR_41->stats_offset_64[VAR_13] =
    FUNC_13(VAR_37);
  VAR_41->stats_offset_64[VAR_19] =
    FUNC_19(VAR_37);
  VAR_41->stats_offset_64[VAR_20] =
    FUNC_20(VAR_37);
  VAR_41->stats_offset_64[VAR_20] =
    FUNC_20(VAR_37);
  VAR_41->stats_offset_64[VAR_17] =
    FUNC_17(VAR_37);
  VAR_41->stats_offset_64[VAR_34] =
    FUNC_32(VAR_37);
  VAR_41->stats_offset_64[VAR_35] =
    FUNC_33(VAR_37);
  VAR_41->stats_offset_64[VAR_23] =
    FUNC_21(VAR_37);
  VAR_41->stats_offset_64[VAR_24] =
    FUNC_22(VAR_37);
  VAR_41->stats_offset_64[VAR_25] =
    FUNC_23(VAR_37);
  VAR_41->stats_offset_64[VAR_26] =
    FUNC_24(VAR_37);
  VAR_41->stats_offset_64[VAR_27] =
    FUNC_25(VAR_37);
  VAR_41->stats_offset_64[VAR_28] =
    FUNC_26(VAR_37);
  VAR_41->stats_offset_64[VAR_29] =
    FUNC_27(VAR_37);
  VAR_41->stats_offset_64[VAR_30] =
    FUNC_28(VAR_37);
 } else {
  VAR_41->stats_offset_32[VAR_0] =
    FUNC_34(VAR_37);
  VAR_41->stats_offset_32[VAR_5] =
    FUNC_39(VAR_37);
  VAR_41->stats_offset_32[VAR_8] =
    FUNC_42(VAR_37);
  VAR_41->stats_offset_32[VAR_11] =
    FUNC_45(VAR_37);
  VAR_41->stats_offset_32[VAR_16] =
    FUNC_50(VAR_37);
  VAR_41->stats_offset_32[VAR_18] =
    FUNC_52(VAR_37);
  VAR_41->stats_offset_32[VAR_31] =
    FUNC_63(VAR_37);
  VAR_41->stats_offset_32[VAR_32] =
    FUNC_64(VAR_37);
  VAR_41->stats_offset_32[VAR_33] =
    FUNC_65(VAR_37);

  VAR_41->stats_offset_64[VAR_3] =
    FUNC_37(VAR_37);
  VAR_41->stats_offset_64[VAR_4] =
    FUNC_38(VAR_37);
  VAR_41->stats_offset_64[VAR_1] =
    FUNC_35(VAR_37);
  VAR_41->stats_offset_64[VAR_2] =
    FUNC_36(VAR_37);
  VAR_41->stats_offset_64[VAR_9] =
    FUNC_43(VAR_37);
  VAR_41->stats_offset_64[VAR_10] =
    FUNC_44(VAR_37);
  VAR_41->stats_offset_64[VAR_6] =
    FUNC_40(VAR_37);
  VAR_41->stats_offset_64[VAR_7] =
    FUNC_41(VAR_37);
  VAR_41->stats_offset_64[VAR_14] =
    FUNC_48(VAR_37);
  VAR_41->stats_offset_64[VAR_15] =
    FUNC_49(VAR_37);
  VAR_41->stats_offset_64[VAR_12] =
    FUNC_46(VAR_37);
  VAR_41->stats_offset_64[VAR_13] =
    FUNC_47(VAR_37);
  VAR_41->stats_offset_64[VAR_19] =
    FUNC_53(VAR_37);
  VAR_41->stats_offset_64[VAR_20] =
    FUNC_54(VAR_37);
  VAR_41->stats_offset_64[VAR_20] =
    FUNC_54(VAR_37);
  VAR_41->stats_offset_64[VAR_17] =
    FUNC_51(VAR_37);
  VAR_41->stats_offset_64[VAR_34] =
    FUNC_66(VAR_37);
  VAR_41->stats_offset_64[VAR_35] =
    FUNC_67(VAR_37);
  VAR_41->stats_offset_64[VAR_23] =
    FUNC_55(VAR_37);
  VAR_41->stats_offset_64[VAR_24] =
    FUNC_56(VAR_37);
  VAR_41->stats_offset_64[VAR_25] =
    FUNC_57(VAR_37);
  VAR_41->stats_offset_64[VAR_26] =
    FUNC_58(VAR_37);
  VAR_41->stats_offset_64[VAR_27] =
    FUNC_59(VAR_37);
  VAR_41->stats_offset_64[VAR_28] =
    FUNC_60(VAR_37);
  VAR_41->stats_offset_64[VAR_29] =
    FUNC_61(VAR_37);
  VAR_41->stats_offset_64[VAR_30] =
    FUNC_62(VAR_37);
 }

 for (VAR_40 = 0; VAR_40 < VAR_22;
      VAR_40++) {
  VAR_39 = VAR_41->stats_offset_64[VAR_40];
  VAR_42->stats_value_64[VAR_40] =
   FUNC_69(VAR_36->hw->hw_addr + VAR_39);
 }

 for (VAR_40 = 0; VAR_40 < VAR_21;
      VAR_40++) {
  VAR_39 = VAR_41->stats_offset_32[VAR_40];
  VAR_42->stats_value_32[VAR_40] =
   FUNC_68(VAR_36->hw, VAR_39);
 }
}
