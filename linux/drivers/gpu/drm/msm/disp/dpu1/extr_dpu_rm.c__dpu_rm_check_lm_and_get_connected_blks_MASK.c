
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dpu_rm_requirements {int dummy; } ;
struct dpu_rm_hw_iter {struct dpu_rm_hw_blk* blk; } ;
struct dpu_rm_hw_blk {scalar_t__ id; int hw; } ;
struct dpu_rm {int dummy; } ;
struct dpu_lm_cfg {scalar_t__ id; scalar_t__ pingpong; int lm_pair_mask; } ;
struct TYPE_2__ {struct dpu_lm_cfg* cap; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct dpu_rm_hw_blk*,int ) ;
 scalar_t__ FUNC_3 (struct dpu_rm*,struct dpu_rm_hw_iter*) ;
 int FUNC_4 (struct dpu_rm_hw_iter*,int ,int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(
  struct dpu_rm *VAR_1,
  uint32_t VAR_2,
  struct dpu_rm_requirements *VAR_3,
  struct dpu_rm_hw_blk *VAR_4,
  struct dpu_rm_hw_blk **VAR_5,
  struct dpu_rm_hw_blk *VAR_6)
{
 const struct dpu_lm_cfg *VAR_7 = FUNC_6(VAR_4->hw)->cap;
 struct dpu_rm_hw_iter VAR_8;

 *VAR_5 = ((void*)0);

 FUNC_0("check lm %d pp %d\n",
      VAR_7->id, VAR_7->pingpong);


 if (VAR_6) {
  const struct dpu_lm_cfg *VAR_9 =
    FUNC_6(VAR_6->hw)->cap;

  if (!FUNC_5(VAR_7->id, &VAR_9->lm_pair_mask)) {
   FUNC_0("lm %d not peer of lm %d\n", VAR_7->id,
     VAR_9->id);
   return 0;
  }
 }


 if (FUNC_2(VAR_4, VAR_2)) {
  FUNC_0("lm %d already reserved\n", VAR_7->id);
  return 0;
 }

 FUNC_4(&VAR_8, 0, VAR_0);
 while (FUNC_3(VAR_1, &VAR_8)) {
  if (VAR_8.blk->id == VAR_7->pingpong) {
   *VAR_5 = VAR_8.blk;
   break;
  }
 }

 if (!*VAR_5) {
  FUNC_1("failed to get pp on lm %d\n", VAR_7->pingpong);
  return 0;
 }

 if (FUNC_2(*VAR_5, VAR_2)) {
  FUNC_0("lm %d pp %d already reserved\n", VAR_4->id,
    (*VAR_5)->id);
  return 0;
 }

 return 1;
}
