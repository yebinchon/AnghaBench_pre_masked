
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cmd; } ;
struct pvrdma_cmd_destroy_pd {int pd_handle; TYPE_2__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_destroy_pd destroy_pd; } ;
struct pvrdma_dev {int num_pds; TYPE_1__* pdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_6__ {int pd_handle; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pvrdma_dev*,union pvrdma_cmd_req*,int *,int ) ;
 struct pvrdma_dev* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (struct ib_pd*) ;

void FUNC_5(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct pvrdma_dev *VAR_3 = FUNC_3(VAR_1->device);
 union pvrdma_cmd_req VAR_4 = {};
 struct pvrdma_cmd_destroy_pd *VAR_5 = &VAR_4.destroy_pd;
 int VAR_6;

 VAR_5->hdr.cmd = VAR_0;
 VAR_5->pd_handle = FUNC_4(VAR_1)->pd_handle;

 VAR_6 = FUNC_2(VAR_3, &VAR_4, ((void*)0), 0);
 if (VAR_6)
  FUNC_1(&VAR_3->pdev->dev,
    "could not dealloc protection domain, error: %d\n",
    VAR_6);

 FUNC_0(&VAR_3->num_pds);
}
