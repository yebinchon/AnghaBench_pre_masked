
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_display_topology {int num_intf; } ;
struct dpu_rm_hw_iter {struct dpu_rm_hw_blk* blk; } ;
struct dpu_rm_hw_blk {int id; int enc_id; int hw; } ;
struct dpu_rm {int dummy; } ;
struct dpu_hw_ctl {TYPE_1__* caps; } ;
typedef int ctls ;
struct TYPE_2__ {unsigned long features; } ;


 int FUNC_0 (struct dpu_rm_hw_blk**) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct dpu_rm_hw_blk*,int ) ;
 scalar_t__ FUNC_4 (struct dpu_rm*,struct dpu_rm_hw_iter*) ;
 int FUNC_5 (struct msm_display_topology const*) ;
 int FUNC_6 (struct dpu_rm_hw_iter*,int ,int ) ;
 int FUNC_7 (struct dpu_rm_hw_blk***,int ,int) ;
 struct dpu_hw_ctl* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(
  struct dpu_rm *VAR_4,
  uint32_t VAR_5,
  const struct msm_display_topology *VAR_6)
{
 struct dpu_rm_hw_blk *VAR_7[VAR_3];
 struct dpu_rm_hw_iter VAR_8;
 int VAR_9 = 0, VAR_10 = 0;
 bool VAR_11 = 0;

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));


 VAR_10 = VAR_6->num_intf;

 VAR_11 = FUNC_5(VAR_6);

 FUNC_6(&VAR_8, 0, VAR_1);
 while (FUNC_4(VAR_4, &VAR_8)) {
  const struct dpu_hw_ctl *VAR_12 = FUNC_8(VAR_8.blk->hw);
  unsigned long VAR_13 = VAR_12->caps->features;
  bool VAR_14;

  if (FUNC_3(VAR_8.blk, VAR_5))
   continue;

  VAR_14 = FUNC_1(VAR_0) & VAR_13;

  FUNC_2("ctl %d caps 0x%lX\n", VAR_8.blk->id, VAR_13);

  if (VAR_11 != VAR_14)
   continue;

  VAR_7[VAR_9] = VAR_8.blk;
  FUNC_2("ctl %d match\n", VAR_8.blk->id);

  if (++VAR_9 == VAR_10)
   break;
 }

 if (VAR_9 != VAR_10)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7) && VAR_9 < VAR_10; VAR_9++) {
  VAR_7[VAR_9]->enc_id = VAR_5;
  FUNC_9(VAR_7[VAR_9]->id, VAR_5);
 }

 return 0;
}
