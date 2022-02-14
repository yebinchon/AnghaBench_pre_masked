
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpu_rm_hw_iter {int type; int enc_id; } ;
typedef enum dpu_hw_blk_type { ____Placeholder_dpu_hw_blk_type } dpu_hw_blk_type ;


 int FUNC_0 (struct dpu_rm_hw_iter*,int ,int) ;

void FUNC_1(
  struct dpu_rm_hw_iter *VAR_0,
  uint32_t VAR_1,
  enum dpu_hw_blk_type VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->enc_id = VAR_1;
 VAR_0->type = VAR_2;
}
