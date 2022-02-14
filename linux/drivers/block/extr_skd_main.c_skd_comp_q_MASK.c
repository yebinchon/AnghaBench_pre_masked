
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {int lock; int start_queue; int completion_worker; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct skd_device*,int ) ;
 int FUNC_1 (struct skd_device*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct skd_device*,int ,int*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct skd_device *VAR_6 = VAR_5;
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_5(&VAR_6->lock, VAR_7);
 FUNC_2(&VAR_6->pdev->dev, "MSIX = 0x%x\n",
  FUNC_0(VAR_6, VAR_0));
 FUNC_1(VAR_6, VAR_1, VAR_0);
 VAR_9 = FUNC_4(VAR_6, VAR_3,
      &VAR_8);
 if (VAR_8)
  FUNC_3(&VAR_6->start_queue);

 if (VAR_9)
  FUNC_3(&VAR_6->completion_worker);
 else if (!VAR_8)
  FUNC_3(&VAR_6->start_queue);

 FUNC_6(&VAR_6->lock, VAR_7);

 return VAR_2;
}
