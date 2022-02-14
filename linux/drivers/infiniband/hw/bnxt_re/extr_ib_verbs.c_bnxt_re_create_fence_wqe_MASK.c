
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ib_mr {int lkey; } ;
struct TYPE_5__ {int zero_based; int mw_type; int access_cntl; int length; scalar_t__ va; int parent_l_key; } ;
struct bnxt_qplib_swqe {TYPE_2__ bind; int flags; int wr_id; int type; } ;
struct bnxt_re_fence_data {TYPE_3__* mw; int bind_rkey; int size; scalar_t__ va; struct bnxt_qplib_swqe bind_wqe; TYPE_1__* mr; } ;
struct bnxt_re_pd {struct bnxt_re_fence_data fence; } ;
struct TYPE_6__ {int rkey; } ;
struct TYPE_4__ {struct ib_mr ib_mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt_qplib_swqe*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnxt_re_pd *VAR_6)
{
 struct bnxt_re_fence_data *VAR_7 = &VAR_6->fence;
 struct ib_mr *VAR_8 = &VAR_7->mr->ib_mr;
 struct bnxt_qplib_swqe *VAR_9 = &VAR_7->bind_wqe;

 FUNC_2(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->type = VAR_3;
 VAR_9->wr_id = VAR_0;
 VAR_9->flags |= VAR_1;
 VAR_9->flags |= VAR_2;
 VAR_9->bind.zero_based = 0;
 VAR_9->bind.parent_l_key = VAR_8->lkey;
 VAR_9->bind.va = (u64)(unsigned long)VAR_7->va;
 VAR_9->bind.length = VAR_7->size;
 VAR_9->bind.access_cntl = FUNC_0(VAR_4);
 VAR_9->bind.mw_type = VAR_5;




 VAR_7->bind_rkey = FUNC_1(VAR_7->mw->rkey);
}
