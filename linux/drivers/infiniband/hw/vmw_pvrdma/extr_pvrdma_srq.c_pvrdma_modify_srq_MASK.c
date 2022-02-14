
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int srq_limit; } ;
struct TYPE_4__ {int cmd; } ;
struct pvrdma_cmd_modify_srq {int attr_mask; TYPE_2__ attrs; int srq_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_modify_srq modify_srq; } ;
struct pvrdma_srq {int srq_handle; } ;
struct pvrdma_dev {TYPE_3__* pdev; } ;
struct ib_udata {int dummy; } ;
struct ib_srq_attr {int srq_limit; } ;
struct ib_srq {int device; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pvrdma_cmd_modify_srq*,int ,int) ;
 int FUNC_2 (struct pvrdma_dev*,union pvrdma_cmd_req*,int *,int ) ;
 struct pvrdma_dev* FUNC_3 (int ) ;
 struct pvrdma_srq* FUNC_4 (struct ib_srq*) ;

int FUNC_5(struct ib_srq *VAR_3, struct ib_srq_attr *VAR_4,
        enum ib_srq_attr_mask VAR_5, struct ib_udata *VAR_6)
{
 struct pvrdma_srq *VAR_7 = FUNC_4(VAR_3);
 union pvrdma_cmd_req VAR_8;
 struct pvrdma_cmd_modify_srq *VAR_9 = &VAR_8.modify_srq;
 struct pvrdma_dev *VAR_10 = FUNC_3(VAR_3->device);
 int VAR_11;


 if (!(VAR_5 & VAR_1))
  return -VAR_0;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->hdr.cmd = VAR_2;
 VAR_9->srq_handle = VAR_7->srq_handle;
 VAR_9->attrs.srq_limit = VAR_4->srq_limit;
 VAR_9->attr_mask = VAR_5;

 VAR_11 = FUNC_2(VAR_10, &VAR_8, ((void*)0), 0);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_10->pdev->dev,
    "could not modify shared receive queue, error: %d\n",
    VAR_11);

  return -VAR_0;
 }

 return VAR_11;
}
