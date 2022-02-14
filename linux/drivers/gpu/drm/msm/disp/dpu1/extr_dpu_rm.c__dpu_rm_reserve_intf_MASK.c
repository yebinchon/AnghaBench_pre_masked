
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dpu_rm_hw_iter {int hw; TYPE_1__* blk; } ;
struct dpu_rm {int dummy; } ;
typedef enum dpu_hw_blk_type { ____Placeholder_dpu_hw_blk_type } dpu_hw_blk_type ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ enc_id; } ;


 int FUNC_0 (char*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct dpu_rm*,struct dpu_rm_hw_iter*) ;
 int FUNC_3 (struct dpu_rm_hw_iter*,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(
  struct dpu_rm *VAR_2,
  uint32_t VAR_3,
  uint32_t VAR_4,
  enum dpu_hw_blk_type VAR_5)
{
 struct dpu_rm_hw_iter VAR_6;
 int VAR_7 = 0;


 FUNC_3(&VAR_6, 0, VAR_5);
 while (FUNC_2(VAR_2, &VAR_6)) {
  if (VAR_6.blk->id != VAR_4)
   continue;

  if (FUNC_1(VAR_6.blk, VAR_3)) {
   FUNC_0("type %d id %d already reserved\n", VAR_5, VAR_4);
   return -VAR_1;
  }

  VAR_6.blk->enc_id = VAR_3;
  FUNC_4(VAR_6.blk->id, VAR_3);
  break;
 }


 if (!VAR_6.hw) {
  FUNC_0("couldn't find type %d id %d\n", VAR_5, VAR_4);
  return -VAR_0;
 }

 return VAR_7;
}
