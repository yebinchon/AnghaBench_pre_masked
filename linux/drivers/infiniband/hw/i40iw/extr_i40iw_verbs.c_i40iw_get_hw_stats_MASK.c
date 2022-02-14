
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_hw_stats {int num_counters; int * value; } ;
struct ib_device {int dummy; } ;
struct i40iw_dev_hw_stats {int dummy; } ;
struct i40iw_vsi_pestat {struct i40iw_dev_hw_stats hw_stats; } ;
struct i40iw_sc_dev {scalar_t__ is_pf; } ;
struct TYPE_2__ {struct i40iw_vsi_pestat* pestat; } ;
struct i40iw_device {TYPE_1__ vsi; struct i40iw_sc_dev sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_vsi_pestat*,struct i40iw_dev_hw_stats*) ;
 scalar_t__ FUNC_1 (struct i40iw_sc_dev*,struct i40iw_dev_hw_stats*) ;
 int FUNC_2 (int *,struct i40iw_dev_hw_stats*,int) ;
 struct i40iw_device* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1,
         struct rdma_hw_stats *VAR_2,
         u8 VAR_3, int VAR_4)
{
 struct i40iw_device *VAR_5 = FUNC_3(VAR_1);
 struct i40iw_sc_dev *VAR_6 = &VAR_5->sc_dev;
 struct i40iw_vsi_pestat *VAR_7 = VAR_5->vsi.pestat;
 struct i40iw_dev_hw_stats *VAR_8 = &VAR_7->hw_stats;

 if (VAR_6->is_pf) {
  FUNC_0(VAR_7, &VAR_7->hw_stats);
 } else {
  if (FUNC_1(VAR_6, &VAR_7->hw_stats))
   return -VAR_0;
 }

 FUNC_2(&VAR_2->value[0], VAR_8, sizeof(*VAR_8));

 return VAR_2->num_counters;
}
