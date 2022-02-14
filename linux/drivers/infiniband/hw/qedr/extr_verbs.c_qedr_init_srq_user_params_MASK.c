
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct rdma_srq_producers {int dummy; } ;
struct TYPE_8__ {int phy_prod_pair_addr; } ;
struct TYPE_9__ {int umem; int pbl_tbl; int pbl_info; } ;
struct qedr_srq {TYPE_2__ hw_srq; TYPE_4__* prod_umem; int dev; TYPE_3__ usrq; } ;
struct qedr_create_srq_ureq {int prod_pair_addr; int srq_len; int srq_addr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_7__ {struct scatterlist* sgl; } ;
struct TYPE_10__ {TYPE_1__ sg_head; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (struct ib_udata*,int ,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct ib_udata*,int ,TYPE_3__*,int ,int ,int,int,int) ;
 int FUNC_7 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_8(struct ib_udata *VAR_0,
         struct qedr_srq *VAR_1,
         struct qedr_create_srq_ureq *VAR_2,
         int VAR_3, int VAR_4)
{
 struct scatterlist *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_0, VAR_1->dev, &VAR_1->usrq, VAR_2->srq_addr,
      VAR_2->srq_len, VAR_3, VAR_4, 1);
 if (VAR_6)
  return VAR_6;

 VAR_1->prod_umem =
  FUNC_3(VAR_0, VAR_2->prod_pair_addr,
       sizeof(struct rdma_srq_producers), VAR_3, VAR_4);
 if (FUNC_1(VAR_1->prod_umem)) {
  FUNC_5(VAR_1->dev, &VAR_1->usrq.pbl_info, VAR_1->usrq.pbl_tbl);
  FUNC_4(VAR_1->usrq.umem);
  FUNC_0(VAR_1->dev,
         "create srq: failed ib_umem_get for producer, got %ld\n",
         FUNC_2(VAR_1->prod_umem));
  return FUNC_2(VAR_1->prod_umem);
 }

 VAR_5 = VAR_1->prod_umem->sg_head.sgl;
 VAR_1->hw_srq.phy_prod_pair_addr = FUNC_7(VAR_5);

 return 0;
}
