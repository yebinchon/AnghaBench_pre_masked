
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int gsi_cons; } ;
struct qedr_qp {int q_lock; TYPE_4__ sq; } ;
struct qedr_dev {TYPE_1__* pdev; int gsi_rqcq; struct qedr_cq* gsi_sqcq; struct qedr_qp* gsi_qp; } ;
struct TYPE_7__ {int cq_context; int (* comp_handler ) (TYPE_3__*,int ) ;} ;
struct qedr_cq {TYPE_3__ ibcq; } ;
struct TYPE_6__ {int baddr; int vaddr; int len; } ;
struct qed_roce_ll2_packet {TYPE_2__ header; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,struct qedr_cq*,int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct qed_roce_ll2_packet*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, u8 VAR_2,
     void *VAR_3,
     dma_addr_t VAR_4,
     bool VAR_5,
     bool VAR_6)
{
 struct qedr_dev *VAR_7 = (struct qedr_dev *)VAR_1;
 struct qed_roce_ll2_packet *VAR_8 = VAR_3;
 struct qedr_cq *VAR_9 = VAR_7->gsi_sqcq;
 struct qedr_qp *VAR_10 = VAR_7->gsi_qp;
 unsigned long VAR_11;

 FUNC_0(VAR_7, VAR_0,
   "LL2 TX CB: gsi_sqcq=%p, gsi_rqcq=%p, gsi_cons=%d, ibcq_comp=%s\n",
   VAR_7->gsi_sqcq, VAR_7->gsi_rqcq, VAR_10->sq.gsi_cons,
   VAR_9->ibcq.comp_handler ? "Yes" : "No");

 FUNC_1(&VAR_7->pdev->dev, VAR_8->header.len, VAR_8->header.vaddr,
     VAR_8->header.baddr);
 FUNC_2(VAR_8);

 FUNC_4(&VAR_10->q_lock, VAR_11);
 FUNC_3(&VAR_10->sq);
 FUNC_5(&VAR_10->q_lock, VAR_11);

 if (VAR_9->ibcq.comp_handler)
  (*VAR_9->ibcq.comp_handler) (&VAR_9->ibcq, VAR_9->ibcq.cq_context);
}
