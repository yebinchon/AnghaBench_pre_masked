
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; int idx; } ;
struct TYPE_3__ {int addr; int idx; } ;
struct i40iw_qp_mr {TYPE_2__ rq_pbl; TYPE_1__ sq_pbl; int shadow; int sq_page; } ;
struct i40iw_qp_init_info {int virtual_map; int rq_pa; int sq_pa; int shadow_area_pa; } ;
struct i40iw_pbl {scalar_t__ pbl_allocated; struct i40iw_qp_mr qp_mr; } ;
struct i40iw_qp {int page; struct i40iw_pbl iwpbl; } ;
struct i40iw_device {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct i40iw_device *VAR_0,
          struct i40iw_qp *VAR_1,
          struct i40iw_qp_init_info *VAR_2)
{
 struct i40iw_pbl *VAR_3 = &VAR_1->iwpbl;
 struct i40iw_qp_mr *VAR_4 = &VAR_3->qp_mr;

 VAR_1->page = VAR_4->sq_page;
 VAR_2->shadow_area_pa = FUNC_0(VAR_4->shadow);
 if (VAR_3->pbl_allocated) {
  VAR_2->virtual_map = 1;
  VAR_2->sq_pa = VAR_4->sq_pbl.idx;
  VAR_2->rq_pa = VAR_4->rq_pbl.idx;
 } else {
  VAR_2->sq_pa = VAR_4->sq_pbl.addr;
  VAR_2->rq_pa = VAR_4->rq_pbl.addr;
 }
 return 0;
}
