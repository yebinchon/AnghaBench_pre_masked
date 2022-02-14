
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct regpair {int lo; int hi; } ;
struct TYPE_4__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct qedr_cq {scalar_t__ sig; int cnq_notif; TYPE_1__ ibcq; int destroyed; scalar_t__ arm_flags; } ;
struct qedr_cnq {int sb; int index; TYPE_3__* dev; int n_comp; int pbl; int * hw_cons_ptr; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int rdma_ctx; } ;
struct TYPE_5__ {int (* rdma_cnq_prod_update ) (int ,int ,scalar_t__) ;} ;


 int FUNC_0 (TYPE_3__*,char*,int ,int ,struct qedr_cq*,...) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ,int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 u16 VAR_7, VAR_8;
 struct qedr_cnq *VAR_9 = VAR_6;
 struct regpair *VAR_10;
 struct qedr_cq *VAR_11;

 FUNC_5(VAR_9->sb, VAR_0, 0);

 FUNC_6(VAR_9->sb);

 VAR_7 = FUNC_2(*VAR_9->hw_cons_ptr);
 VAR_8 = FUNC_4(&VAR_9->pbl);


 FUNC_7();

 while (VAR_8 != VAR_7) {
  VAR_10 = (struct regpair *)FUNC_3(&VAR_9->pbl);
  VAR_11 = (struct qedr_cq *)(uintptr_t)FUNC_1(VAR_10->hi,
    VAR_10->lo);

  if (VAR_11 == ((void*)0)) {
   FUNC_0(VAR_9->dev,
          "Received NULL CQ cq_handle->hi=%d cq_handle->lo=%d sw_comp_cons=%d hw_comp_cons=%d\n",
          VAR_10->hi, VAR_10->lo, VAR_8,
          VAR_7);

   break;
  }

  if (VAR_11->sig != VAR_3) {
   FUNC_0(VAR_9->dev,
          "Problem with cq signature, cq_handle->hi=%d ch_handle->lo=%d cq=%p\n",
          VAR_10->hi, VAR_10->lo, VAR_11);
   break;
  }

  VAR_11->arm_flags = 0;

  if (!VAR_11->destroyed && VAR_11->ibcq.comp_handler)
   (*VAR_11->ibcq.comp_handler)
    (&VAR_11->ibcq, VAR_11->ibcq.cq_context);







  VAR_11->cnq_notif++;

  VAR_8 = FUNC_4(&VAR_9->pbl);

  VAR_9->n_comp++;
 }

 VAR_4->rdma_cnq_prod_update(VAR_9->dev->rdma_ctx, VAR_9->index,
          VAR_8);

 FUNC_5(VAR_9->sb, VAR_1, 1);

 return VAR_2;
}
