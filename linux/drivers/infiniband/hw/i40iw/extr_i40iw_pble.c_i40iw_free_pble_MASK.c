
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cnt; int addr; } ;
struct i40iw_pble_alloc {scalar_t__ level; TYPE_2__ level1; } ;
struct TYPE_3__ {struct gen_pool* pool; } ;
struct i40iw_hmc_pble_rsrc {int stats_alloc_freed; TYPE_1__ pinfo; } ;
struct gen_pool {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i40iw_hmc_pble_rsrc*,struct i40iw_pble_alloc*) ;
 int FUNC_1 (struct gen_pool*,int ,int) ;

void FUNC_2(struct i40iw_hmc_pble_rsrc *VAR_1,
       struct i40iw_pble_alloc *VAR_2)
{
 struct gen_pool *VAR_3;

 VAR_3 = VAR_1->pinfo.pool;
 if (VAR_2->level == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_3, VAR_2->level1.addr,
         (VAR_2->level1.cnt << 3));
 VAR_1->stats_alloc_freed++;
}
