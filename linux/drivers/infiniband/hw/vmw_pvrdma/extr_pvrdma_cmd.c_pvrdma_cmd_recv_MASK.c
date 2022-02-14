
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ack; } ;
union pvrdma_cmd_resp {TYPE_2__ hdr; } ;
struct pvrdma_dev {TYPE_1__* pdev; int cmd_lock; int resp_slot; int cmd_done; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (union pvrdma_cmd_resp*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static inline int FUNC_7(struct pvrdma_dev *VAR_4,
      union pvrdma_cmd_resp *VAR_5,
      unsigned VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_4->pdev->dev, "receive response from device\n");

 VAR_7 = FUNC_6(&VAR_4->cmd_done,
   FUNC_3(VAR_3));
 if (VAR_7 == 0 || VAR_7 == -VAR_1) {
  FUNC_1(&VAR_4->pdev->dev,
    "completion timeout or interrupted\n");
  return -VAR_2;
 }

 FUNC_4(&VAR_4->cmd_lock);
 FUNC_2(VAR_5, VAR_4->resp_slot, sizeof(*VAR_5));
 FUNC_5(&VAR_4->cmd_lock);

 if (VAR_5->hdr.ack != VAR_6) {
  FUNC_1(&VAR_4->pdev->dev,
    "unknown response %#x expected %#x\n",
    VAR_5->hdr.ack, VAR_6);
  return -VAR_0;
 }

 return 0;
}
