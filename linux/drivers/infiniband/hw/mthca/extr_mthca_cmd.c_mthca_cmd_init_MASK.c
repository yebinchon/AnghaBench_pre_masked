
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pool; scalar_t__ flags; int poll_sem; int hcr_mutex; } ;
struct mthca_dev {int hcr; TYPE_1__ cmd; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mthca_dev*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(struct mthca_dev *VAR_4)
{
 FUNC_4(&VAR_4->cmd.hcr_mutex);
 FUNC_6(&VAR_4->cmd.poll_sem, 1);
 VAR_4->cmd.flags = 0;

 VAR_4->hcr = FUNC_1(FUNC_5(VAR_4->pdev, 0) + VAR_1,
      VAR_2);
 if (!VAR_4->hcr) {
  FUNC_3(VAR_4, "Couldn't map command register.");
  return -VAR_0;
 }

 VAR_4->cmd.pool = FUNC_0("mthca_cmd", &VAR_4->pdev->dev,
     VAR_3,
     VAR_3, 0);
 if (!VAR_4->cmd.pool) {
  FUNC_2(VAR_4->hcr);
  return -VAR_0;
 }

 return 0;
}
