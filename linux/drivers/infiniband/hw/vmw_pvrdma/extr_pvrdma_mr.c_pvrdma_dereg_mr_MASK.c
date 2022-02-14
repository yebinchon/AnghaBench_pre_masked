
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
struct pvrdma_cmd_destroy_mr {int mr_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_destroy_mr destroy_mr; } ;
struct TYPE_5__ {int mr_handle; } ;
struct pvrdma_user_mr {struct pvrdma_user_mr* pages; int umem; int pdir; TYPE_2__ mmr; } ;
struct pvrdma_dev {TYPE_3__* pdev; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {int device; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvrdma_user_mr*) ;
 int FUNC_3 (struct pvrdma_cmd_destroy_mr*,int ,int) ;
 int FUNC_4 (struct pvrdma_dev*,union pvrdma_cmd_req*,int *,int ) ;
 int FUNC_5 (struct pvrdma_dev*,int *) ;
 struct pvrdma_dev* FUNC_6 (int ) ;
 struct pvrdma_user_mr* FUNC_7 (struct ib_mr*) ;

int FUNC_8(struct ib_mr *VAR_1, struct ib_udata *VAR_2)
{
 struct pvrdma_user_mr *VAR_3 = FUNC_7(VAR_1);
 struct pvrdma_dev *VAR_4 = FUNC_6(VAR_1->device);
 union pvrdma_cmd_req VAR_5;
 struct pvrdma_cmd_destroy_mr *VAR_6 = &VAR_5.destroy_mr;
 int VAR_7;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->hdr.cmd = VAR_0;
 VAR_6->mr_handle = VAR_3->mmr.mr_handle;
 VAR_7 = FUNC_4(VAR_4, &VAR_5, ((void*)0), 0);
 if (VAR_7 < 0)
  FUNC_0(&VAR_4->pdev->dev,
    "could not deregister mem region, error: %d\n", VAR_7);

 FUNC_5(VAR_4, &VAR_3->pdir);
 FUNC_1(VAR_3->umem);

 FUNC_2(VAR_3->pages);
 FUNC_2(VAR_3);

 return 0;
}
