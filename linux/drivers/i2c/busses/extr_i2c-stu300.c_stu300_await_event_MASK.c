
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stu300_dev {int cmd_err; int cmd_event; TYPE_1__* pdev; int cmd_complete; int cmd_issue_lock; } ;
typedef enum stu300_event { ____Placeholder_stu300_event } stu300_event ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stu300_dev*) ;
 int FUNC_5 (struct stu300_dev*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct stu300_dev *VAR_5,
    enum stu300_event VAR_6)
{
 int VAR_7;


 FUNC_2(&VAR_5->cmd_issue_lock);
 VAR_5->cmd_err = VAR_2;
 VAR_5->cmd_event = VAR_6;

 FUNC_1(&VAR_5->cmd_complete);


 FUNC_5(VAR_5);


 FUNC_3(&VAR_5->cmd_issue_lock);

 VAR_7 = FUNC_6(&VAR_5->cmd_complete,
       VAR_4);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->pdev->dev,
         "wait_for_completion_interruptible_timeout()"
         "returned %d waiting for event %04x\n", VAR_7, VAR_6);
  return VAR_7;
 }

 if (VAR_7 == 0) {
  if (VAR_6 != VAR_3) {
   FUNC_0(&VAR_5->pdev->dev, "controller "
    "timed out waiting for event %d, reinit "
    "hardware\n", VAR_6);
   (void) FUNC_4(VAR_5);
  }
  return -VAR_1;
 }

 if (VAR_5->cmd_err != VAR_2) {
  if (VAR_6 != VAR_3) {
   FUNC_0(&VAR_5->pdev->dev, "controller "
    "error (await_event) %d waiting for event %d, "
          "reinit hardware\n", VAR_5->cmd_err, VAR_6);
   (void) FUNC_4(VAR_5);
  }
  return -VAR_0;
 }

 return 0;
}
