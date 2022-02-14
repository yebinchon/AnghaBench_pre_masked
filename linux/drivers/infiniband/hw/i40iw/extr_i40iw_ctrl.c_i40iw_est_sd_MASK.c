
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_dev {scalar_t__ is_pf; } ;
struct i40iw_hmc_info {TYPE_1__* hmc_obj; } ;
struct TYPE_2__ {int cnt; int size; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u64 FUNC_0(struct i40iw_sc_dev *VAR_2, struct i40iw_hmc_info *VAR_3)
{
 int VAR_4;
 u64 VAR_5 = 0;
 u64 VAR_6;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++)
  VAR_5 += VAR_3->hmc_obj[VAR_4].cnt * VAR_3->hmc_obj[VAR_4].size;

 if (VAR_2->is_pf)
  VAR_5 += VAR_3->hmc_obj[VAR_0].cnt * VAR_3->hmc_obj[VAR_0].size;

 if (VAR_5 & 0x1FFFFF)
  VAR_6 = (VAR_5 >> 21) + 1;
 else
  VAR_6 = VAR_5 >> 21;

 if (!VAR_2->is_pf) {

  VAR_5 = VAR_3->hmc_obj[VAR_0].cnt * VAR_3->hmc_obj[VAR_0].size;
  if (VAR_5 & 0x1FFFFF)
   VAR_6 += (VAR_5 >> 21) + 1;
  else
   VAR_6 += VAR_5 >> 21;
 }

 return VAR_6;
}
