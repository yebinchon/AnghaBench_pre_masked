
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; } ;
struct pvrdma_cmd_destroy_srq {int srq_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_destroy_srq destroy_srq; } ;
struct pvrdma_srq {int srq_handle; } ;
struct pvrdma_dev {TYPE_2__* pdev; } ;
struct ib_udata {int dummy; } ;
struct ib_srq {int device; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pvrdma_cmd_destroy_srq*,int ,int) ;
 int FUNC_2 (struct pvrdma_dev*,union pvrdma_cmd_req*,int *,int ) ;
 int FUNC_3 (struct pvrdma_dev*,struct pvrdma_srq*) ;
 struct pvrdma_dev* FUNC_4 (int ) ;
 struct pvrdma_srq* FUNC_5 (struct ib_srq*) ;

void FUNC_6(struct ib_srq *VAR_1, struct ib_udata *VAR_2)
{
 struct pvrdma_srq *VAR_3 = FUNC_5(VAR_1);
 union pvrdma_cmd_req VAR_4;
 struct pvrdma_cmd_destroy_srq *VAR_5 = &VAR_4.destroy_srq;
 struct pvrdma_dev *VAR_6 = FUNC_4(VAR_1->device);
 int VAR_7;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->hdr.cmd = VAR_0;
 VAR_5->srq_handle = VAR_3->srq_handle;

 VAR_7 = FUNC_2(VAR_6, &VAR_4, ((void*)0), 0);
 if (VAR_7 < 0)
  FUNC_0(&VAR_6->pdev->dev,
    "destroy shared receive queue failed, error: %d\n",
    VAR_7);

 FUNC_3(VAR_6, VAR_3);
}
