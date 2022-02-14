
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {scalar_t__ blk_off; scalar_t__ base_off; } ;
struct dpu_hw_pingpong {struct dpu_hw_blk_reg_map hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct dpu_hw_pingpong *VAR_2,
  u32 VAR_3)
{
 struct dpu_hw_blk_reg_map *VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = &VAR_2->hw;
 VAR_6 = FUNC_0(VAR_4->base_off + VAR_4->blk_off + VAR_1,
   VAR_5, (VAR_5 & 0xffff) >= 1, 10, VAR_3);

 return VAR_6;
}
