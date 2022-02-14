
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int max_sge; int max_wr; int srq_limit; } ;
struct pvrdma_cmd_query_srq_resp {TYPE_3__ attrs; } ;
union pvrdma_cmd_resp {struct pvrdma_cmd_query_srq_resp query_srq_resp; } ;
struct TYPE_4__ {int cmd; } ;
struct pvrdma_cmd_query_srq {int srq_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_query_srq query_srq; } ;
struct pvrdma_srq {int srq_handle; } ;
struct pvrdma_dev {TYPE_2__* pdev; } ;
struct ib_srq_attr {int max_sge; int max_wr; int srq_limit; } ;
struct ib_srq {int device; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pvrdma_cmd_query_srq*,int ,int) ;
 int FUNC_2 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 struct pvrdma_dev* FUNC_3 (int ) ;
 struct pvrdma_srq* FUNC_4 (struct ib_srq*) ;

int FUNC_5(struct ib_srq *VAR_3, struct ib_srq_attr *VAR_4)
{
 struct pvrdma_dev *VAR_5 = FUNC_3(VAR_3->device);
 struct pvrdma_srq *VAR_6 = FUNC_4(VAR_3);
 union pvrdma_cmd_req VAR_7;
 union pvrdma_cmd_resp VAR_8;
 struct pvrdma_cmd_query_srq *VAR_9 = &VAR_7.query_srq;
 struct pvrdma_cmd_query_srq_resp *VAR_10 = &VAR_8.query_srq_resp;
 int VAR_11;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->hdr.cmd = VAR_1;
 VAR_9->srq_handle = VAR_6->srq_handle;

 VAR_11 = FUNC_2(VAR_5, &VAR_7, &VAR_8, VAR_2);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_5->pdev->dev,
    "could not query shared receive queue, error: %d\n",
    VAR_11);
  return -VAR_0;
 }

 VAR_4->srq_limit = VAR_10->attrs.srq_limit;
 VAR_4->max_wr = VAR_10->attrs.max_wr;
 VAR_4->max_sge = VAR_10->attrs.max_sge;

 return 0;
}
