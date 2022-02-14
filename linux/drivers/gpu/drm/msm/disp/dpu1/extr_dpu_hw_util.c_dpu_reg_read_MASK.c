
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpu_hw_blk_reg_map {scalar_t__ blk_off; scalar_t__ base_off; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct dpu_hw_blk_reg_map *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->base_off + VAR_0->blk_off + VAR_1);
}
