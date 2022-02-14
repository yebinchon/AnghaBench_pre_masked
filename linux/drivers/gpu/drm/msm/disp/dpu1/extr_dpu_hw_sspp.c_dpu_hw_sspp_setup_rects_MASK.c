
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* plane_pitch; } ;
struct TYPE_5__ {int y1; int x1; } ;
struct dpu_hw_pipe_cfg {TYPE_1__ layout; TYPE_2__ dst_rect; TYPE_2__ src_rect; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pipe {struct dpu_hw_blk_reg_map hw; } ;
typedef enum dpu_sspp_multirect_index { ____Placeholder_dpu_sspp_multirect_index } dpu_sspp_multirect_index ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct dpu_hw_pipe*,int ,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct dpu_hw_pipe *VAR_13,
  struct dpu_hw_pipe_cfg *VAR_14,
  enum dpu_sspp_multirect_index VAR_15)
{
 struct dpu_hw_blk_reg_map *VAR_16;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24, VAR_25, VAR_26;
 u32 VAR_27;

 if (FUNC_2(VAR_13, VAR_2, &VAR_27) || !VAR_14)
  return;

 VAR_16 = &VAR_13->hw;

 if (VAR_15 == VAR_1 || VAR_15 == VAR_0) {
  VAR_23 = VAR_7;
  VAR_24 = VAR_9;
  VAR_25 = VAR_3;
  VAR_26 = VAR_5;
 } else {
  VAR_23 = VAR_8;
  VAR_24 = VAR_10;
  VAR_25 = VAR_4;
  VAR_26 = VAR_6;
 }



 VAR_18 = (VAR_14->src_rect.y1 << 16) | VAR_14->src_rect.x1;
 VAR_17 = (FUNC_3(&VAR_14->src_rect) << 16) |
     FUNC_4(&VAR_14->src_rect);
 VAR_20 = (VAR_14->dst_rect.y1 << 16) | VAR_14->dst_rect.x1;
 VAR_19 = (FUNC_3(&VAR_14->dst_rect) << 16) |
  FUNC_4(&VAR_14->dst_rect);

 if (VAR_15 == VAR_1) {
  VAR_21 = (VAR_14->layout.plane_pitch[0]) |
   (VAR_14->layout.plane_pitch[1] << 16);
  VAR_22 = (VAR_14->layout.plane_pitch[2]) |
   (VAR_14->layout.plane_pitch[3] << 16);
 } else {
  VAR_21 = FUNC_0(VAR_16, VAR_11 + VAR_27);
  VAR_22 = FUNC_0(VAR_16, VAR_12 + VAR_27);

  if (VAR_15 == VAR_0) {
   VAR_21 = (VAR_21 & 0xFFFF0000) |
    (VAR_14->layout.plane_pitch[0] & 0x0000FFFF);
   VAR_22 = (VAR_22 & 0xFFFF0000)|
    (VAR_14->layout.plane_pitch[2] & 0x0000FFFF);
  } else {
   VAR_21 = (VAR_21 & 0x0000FFFF) |
    ((VAR_14->layout.plane_pitch[0] << 16) &
     0xFFFF0000);
   VAR_22 = (VAR_22 & 0x0000FFFF) |
    ((VAR_14->layout.plane_pitch[2] << 16) &
     0xFFFF0000);
  }
 }


 FUNC_1(VAR_16, VAR_23 + VAR_27, VAR_17);
 FUNC_1(VAR_16, VAR_24 + VAR_27, VAR_18);
 FUNC_1(VAR_16, VAR_25 + VAR_27, VAR_19);
 FUNC_1(VAR_16, VAR_26 + VAR_27, VAR_20);

 FUNC_1(VAR_16, VAR_11 + VAR_27, VAR_21);
 FUNC_1(VAR_16, VAR_12 + VAR_27, VAR_22);
}
