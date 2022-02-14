
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpu_hw_blk_reg_map {int log_mask; scalar_t__ blk_off; scalar_t__ base_off; } ;


 int FUNC_0 (char*,char const*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(struct dpu_hw_blk_reg_map *VAR_1,
  u32 VAR_2,
  u32 VAR_3,
  const char *VAR_4)
{

 if (VAR_1->log_mask & VAR_0)
  FUNC_0("[%s:0x%X] <= 0x%X\n",
    VAR_4, VAR_1->blk_off + VAR_2, VAR_3);
 FUNC_1(VAR_3, VAR_1->base_off + VAR_1->blk_off + VAR_2);
}
