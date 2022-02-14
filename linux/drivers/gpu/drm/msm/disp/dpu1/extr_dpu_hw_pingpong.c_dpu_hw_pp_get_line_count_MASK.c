
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pingpong {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_1(struct dpu_hw_pingpong *VAR_3)
{
 struct dpu_hw_blk_reg_map *VAR_4 = &VAR_3->hw;
 u32 VAR_5, VAR_6;
 u32 VAR_7 = 0xFFFF;

 if (!VAR_3)
  return 0;
 VAR_4 = &VAR_3->hw;

 VAR_6 = FUNC_0(VAR_4, VAR_2) & 0xFFFF;
 VAR_5 = FUNC_0(VAR_4, VAR_1) & 0xFFFF;

 if (VAR_5 < VAR_6)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0) & 0xFFFF;

 if (VAR_7 < VAR_6)
  VAR_7 += (0xFFFF - VAR_6);
 else
  VAR_7 -= VAR_6;

 return VAR_7;
}
