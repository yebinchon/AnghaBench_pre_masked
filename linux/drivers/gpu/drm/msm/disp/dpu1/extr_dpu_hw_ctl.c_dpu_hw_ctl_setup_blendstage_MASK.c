
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpu_hw_stage_cfg {int** multirect_index; int** stage; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_ctl {TYPE_1__* mixer_hw_caps; int mixer_count; struct dpu_hw_blk_reg_map hw; } ;
typedef enum dpu_sspp_multirect_index { ____Placeholder_dpu_sspp_multirect_index } dpu_sspp_multirect_index ;
typedef enum dpu_lm { ____Placeholder_dpu_lm } dpu_lm ;
struct TYPE_2__ {int features; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct dpu_hw_ctl *VAR_4,
 enum dpu_lm VAR_5, struct dpu_hw_stage_cfg *VAR_6)
{
 struct dpu_hw_blk_reg_map *VAR_7 = &VAR_4->hw;
 u32 VAR_8 = 0, VAR_9 = 0, VAR_10, VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_16 = FUNC_5(VAR_4->mixer_hw_caps, VAR_4->mixer_count, VAR_5);
 if (VAR_16 < 0)
  return;

 if (FUNC_6(VAR_1,
  &VAR_4->mixer_hw_caps->features))
  VAR_17 = VAR_3;
 else
  VAR_17 = 1;

 VAR_8 = VAR_0;

 if (!VAR_6)
  goto exit;

 for (VAR_14 = 0; VAR_14 <= VAR_16; VAR_14++) {

  VAR_10 = (VAR_14 + 1) & 0x7;
  VAR_11 = VAR_14 >= 7;

  for (VAR_15 = 0 ; VAR_15 < VAR_17; VAR_15++) {
   enum dpu_sspp_multirect_index VAR_18 =
    VAR_6->multirect_index[VAR_14][VAR_15];

   switch (VAR_6->stage[VAR_14][VAR_15]) {
   case 131:
    if (VAR_18 == VAR_2) {
     VAR_13 |= ((VAR_14 + 1) & 0xF) << 0;
    } else {
     VAR_8 |= VAR_10 << 0;
     VAR_9 |= VAR_11 << 0;
    }
    break;
   case 130:
    if (VAR_18 == VAR_2) {
     VAR_13 |= ((VAR_14 + 1) & 0xF) << 4;
    } else {
     VAR_8 |= VAR_10 << 3;
     VAR_9 |= VAR_11 << 2;
    }
    break;
   case 129:
    if (VAR_18 == VAR_2) {
     VAR_13 |= ((VAR_14 + 1) & 0xF) << 8;
    } else {
     VAR_8 |= VAR_10 << 6;
     VAR_9 |= VAR_11 << 4;
    }
    break;
   case 128:
    if (VAR_18 == VAR_2) {
     VAR_13 |= ((VAR_14 + 1) & 0xF) << 12;
    } else {
     VAR_8 |= VAR_10 << 26;
     VAR_9 |= VAR_11 << 6;
    }
    break;
   case 135:
    VAR_8 |= VAR_10 << 9;
    VAR_9 |= VAR_11 << 8;
    break;
   case 134:
    VAR_8 |= VAR_10 << 12;
    VAR_9 |= VAR_11 << 10;
    break;
   case 133:
    VAR_8 |= VAR_10 << 15;
    VAR_9 |= VAR_11 << 12;
    break;
   case 132:
    VAR_8 |= VAR_10 << 29;
    VAR_9 |= VAR_11 << 14;
    break;
   case 139:
    if (VAR_18 == VAR_2) {
     VAR_12 |= ((VAR_14 + 1) & 0xF) << 8;
    } else {
     VAR_8 |= VAR_10 << 18;
     VAR_9 |= VAR_11 << 16;
    }
    break;
   case 138:
    if (VAR_18 == VAR_2) {
     VAR_12 |= ((VAR_14 + 1) & 0xF) << 12;
    } else {
     VAR_8 |= VAR_10 << 21;
     VAR_9 |= VAR_11 << 18;
    }
    break;
   case 137:
    if (VAR_18 == VAR_2) {
     VAR_12 |= ((VAR_14 + 1) & 0xF) << 16;
    } else {
     VAR_10 |= (VAR_14 + 1) & 0xF;
     VAR_12 |= VAR_10 << 0;
    }
    break;
   case 136:
    if (VAR_18 == VAR_2) {
     VAR_12 |= ((VAR_14 + 1) & 0xF) << 20;
    } else {
     VAR_10 |= (VAR_14 + 1) & 0xF;
     VAR_12 |= VAR_10 << 4;
    }
    break;
   case 141:
    VAR_9 |= ((VAR_14 + 1) & 0xF) << 20;
    break;
   case 140:
    VAR_9 |= ((VAR_14 + 1) & 0xF) << 26;
    break;
   default:
    break;
   }
  }
 }

exit:
 FUNC_4(VAR_7, FUNC_0(VAR_5), VAR_8);
 FUNC_4(VAR_7, FUNC_1(VAR_5), VAR_9);
 FUNC_4(VAR_7, FUNC_2(VAR_5), VAR_12);
 FUNC_4(VAR_7, FUNC_3(VAR_5), VAR_13);
}
