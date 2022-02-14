
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cmd; } ;
struct pvrdma_cmd_destroy_uc {int ctx_handle; TYPE_2__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_destroy_uc destroy_uc; } ;
struct pvrdma_ucontext {int uar; TYPE_3__* dev; int ctx_handle; } ;
struct ib_ucontext {int device; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*,union pvrdma_cmd_req*,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 struct pvrdma_ucontext* FUNC_4 (struct ib_ucontext*) ;

void FUNC_5(struct ib_ucontext *VAR_1)
{
 struct pvrdma_ucontext *VAR_2 = FUNC_4(VAR_1);
 union pvrdma_cmd_req VAR_3 = {};
 struct pvrdma_cmd_destroy_uc *VAR_4 = &VAR_3.destroy_uc;
 int VAR_5;

 VAR_4->hdr.cmd = VAR_0;
 VAR_4->ctx_handle = VAR_2->ctx_handle;

 VAR_5 = FUNC_1(VAR_2->dev, &VAR_3, ((void*)0), 0);
 if (VAR_5 < 0)
  FUNC_0(&VAR_2->dev->pdev->dev,
    "destroy ucontext failed, error: %d\n", VAR_5);


 FUNC_2(FUNC_3(VAR_1->device), &VAR_2->uar);
}
