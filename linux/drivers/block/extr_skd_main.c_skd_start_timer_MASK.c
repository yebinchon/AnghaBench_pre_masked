
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {TYPE_1__* pdev; int timer; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct skd_device *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->timer, VAR_2, 0);

 VAR_4 = FUNC_1(&VAR_3->timer, (VAR_1 + VAR_0));
 if (VAR_4)
  FUNC_0(&VAR_3->pdev->dev, "failed to start timer %d\n", VAR_4);
 return VAR_4;
}
