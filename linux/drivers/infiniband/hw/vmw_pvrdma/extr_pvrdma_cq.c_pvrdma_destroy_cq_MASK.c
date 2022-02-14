
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; } ;
struct pvrdma_cmd_destroy_cq {size_t cq_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_destroy_cq destroy_cq; } ;
struct pvrdma_dev {int num_cqs; int cq_tbl_lock; int ** cq_tbl; TYPE_2__* pdev; } ;
struct pvrdma_cq {size_t cq_handle; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pvrdma_cmd_destroy_cq*,int ,int) ;
 int FUNC_3 (struct pvrdma_dev*,union pvrdma_cmd_req*,int *,int ) ;
 int FUNC_4 (struct pvrdma_dev*,struct pvrdma_cq*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pvrdma_cq* FUNC_7 (struct ib_cq*) ;
 struct pvrdma_dev* FUNC_8 (int ) ;

void FUNC_9(struct ib_cq *VAR_1, struct ib_udata *VAR_2)
{
 struct pvrdma_cq *VAR_3 = FUNC_7(VAR_1);
 union pvrdma_cmd_req VAR_4;
 struct pvrdma_cmd_destroy_cq *VAR_5 = &VAR_4.destroy_cq;
 struct pvrdma_dev *VAR_6 = FUNC_8(VAR_1->device);
 unsigned long VAR_7;
 int VAR_8;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->hdr.cmd = VAR_0;
 VAR_5->cq_handle = VAR_3->cq_handle;

 VAR_8 = FUNC_3(VAR_6, &VAR_4, ((void*)0), 0);
 if (VAR_8 < 0)
  FUNC_1(&VAR_6->pdev->dev,
    "could not destroy completion queue, error: %d\n",
    VAR_8);


 FUNC_5(&VAR_6->cq_tbl_lock, VAR_7);
 VAR_6->cq_tbl[VAR_3->cq_handle] = ((void*)0);
 FUNC_6(&VAR_6->cq_tbl_lock, VAR_7);

 FUNC_4(VAR_6, VAR_3);
 FUNC_0(&VAR_6->num_cqs);
}
