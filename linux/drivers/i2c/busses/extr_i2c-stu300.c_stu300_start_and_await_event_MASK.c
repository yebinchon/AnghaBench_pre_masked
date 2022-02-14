
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stu300_dev {int cmd_err; int cmd_event; TYPE_1__* pdev; int cmd_complete; scalar_t__ virtbase; int cmd_issue_lock; } ;
typedef enum stu300_event { ____Placeholder_stu300_event } stu300_event ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stu300_dev*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct stu300_dev *VAR_6,
       u8 VAR_7,
       enum stu300_event VAR_8)
{
 int VAR_9;


 FUNC_2(&VAR_6->cmd_issue_lock);
 FUNC_1(&VAR_6->cmd_complete);
 VAR_6->cmd_err = VAR_4;
 VAR_6->cmd_event = VAR_8;
 FUNC_3(&VAR_6->cmd_issue_lock);


 VAR_7 |= VAR_3;
 FUNC_5(VAR_7, VAR_6->virtbase + VAR_2);
 VAR_9 = FUNC_6(&VAR_6->cmd_complete,
       VAR_5);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->pdev->dev,
         "wait_for_completion_interruptible_timeout() "
         "returned %d waiting for event %04x\n", VAR_9, VAR_8);
  return VAR_9;
 }

 if (VAR_9 == 0) {
  FUNC_0(&VAR_6->pdev->dev, "controller timed out "
         "waiting for event %d, reinit hardware\n", VAR_8);
  (void) FUNC_4(VAR_6);
  return -VAR_1;
 }

 if (VAR_6->cmd_err != VAR_4) {
  FUNC_0(&VAR_6->pdev->dev, "controller (start) "
         "error %d waiting for event %d, reinit hardware\n",
         VAR_6->cmd_err, VAR_8);
  (void) FUNC_4(VAR_6);
  return -VAR_0;
 }

 return 0;
}
