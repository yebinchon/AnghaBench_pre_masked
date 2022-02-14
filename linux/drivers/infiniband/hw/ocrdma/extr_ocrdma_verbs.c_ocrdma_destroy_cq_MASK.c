
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct ocrdma_eq {int dummy; } ;
struct TYPE_5__ {int db_page_size; } ;
struct ocrdma_dev {TYPE_2__ nic_info; struct ocrdma_eq* eq_tbl; int ** cq_tbl; } ;
struct ocrdma_cq {size_t id; TYPE_3__* ucontext; int len; scalar_t__ pa; int eqn; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;
struct TYPE_6__ {TYPE_1__* cntxt_pd; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int ) ;
 struct ocrdma_cq* FUNC_1 (struct ib_cq*) ;
 struct ocrdma_dev* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (struct ocrdma_cq*) ;
 int FUNC_5 (struct ocrdma_dev*,int) ;
 size_t FUNC_6 (struct ocrdma_dev*,int ) ;
 size_t FUNC_7 (struct ocrdma_dev*,struct ocrdma_eq*) ;
 int FUNC_8 (struct ocrdma_dev*,struct ocrdma_cq*) ;
 int FUNC_9 (size_t) ;

void FUNC_10(struct ib_cq *VAR_0, struct ib_udata *VAR_1)
{
 struct ocrdma_cq *VAR_2 = FUNC_1(VAR_0);
 struct ocrdma_eq *VAR_3 = ((void*)0);
 struct ocrdma_dev *VAR_4 = FUNC_2(VAR_0->device);
 int VAR_5 = 0;
 u32 VAR_6, VAR_7;

 VAR_4->cq_tbl[VAR_2->id] = ((void*)0);
 VAR_7 = FUNC_6(VAR_4, VAR_2->eqn);

 VAR_3 = &VAR_4->eq_tbl[VAR_7];
 VAR_6 = FUNC_7(VAR_4, VAR_3);
 FUNC_9(VAR_6);
 FUNC_4(VAR_2);

 FUNC_8(VAR_4, VAR_2);
 if (VAR_2->ucontext) {
  VAR_5 = VAR_2->ucontext->cntxt_pd->id;
  FUNC_3(VAR_2->ucontext, (u64) VAR_2->pa,
    FUNC_0(VAR_2->len));
  FUNC_3(VAR_2->ucontext,
    FUNC_5(VAR_4, VAR_5),
    VAR_4->nic_info.db_page_size);
 }
}
