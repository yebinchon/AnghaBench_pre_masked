
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union pvrdma_cmd_resp {int dummy; } pvrdma_cmd_resp ;
typedef union pvrdma_cmd_req {int dummy; } pvrdma_cmd_req ;
struct pvrdma_dev {int cmd_sema; TYPE_1__* pdev; int cmd_done; int cmd_lock; int cmd_slot; } ;
struct pvrdma_cmd_modify_qp {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,union pvrdma_cmd_req*,int) ;
 int FUNC_7 (struct pvrdma_dev*,union pvrdma_cmd_resp*,unsigned int) ;
 int FUNC_8 (struct pvrdma_dev*,int ) ;
 int FUNC_9 (struct pvrdma_dev*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int
FUNC_13(struct pvrdma_dev *VAR_3, union pvrdma_cmd_req *VAR_4,
  union pvrdma_cmd_resp *VAR_5, unsigned VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_3->pdev->dev, "post request to device\n");


 FUNC_3(&VAR_3->cmd_sema);

 FUNC_0(sizeof(union pvrdma_cmd_req) !=
       sizeof(struct pvrdma_cmd_modify_qp));

 FUNC_10(&VAR_3->cmd_lock);
 FUNC_6(VAR_3->cmd_slot, VAR_4, sizeof(*VAR_4));
 FUNC_11(&VAR_3->cmd_lock);

 FUNC_4(&VAR_3->cmd_done);
 FUNC_9(VAR_3, VAR_2, 0);


 FUNC_5();

 VAR_7 = FUNC_8(VAR_3, VAR_1);
 if (VAR_7 == 0) {
  if (VAR_5 != ((void*)0))
   VAR_7 = FUNC_7(VAR_3, VAR_5, VAR_6);
 } else {
  FUNC_2(&VAR_3->pdev->dev,
    "failed to write request error reg: %d\n", VAR_7);
  VAR_7 = -VAR_0;
 }

 FUNC_12(&VAR_3->cmd_sema);

 return VAR_7;
}
