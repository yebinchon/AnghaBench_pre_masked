
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {int lock; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct skd_device*,int ) ;
 int FUNC_1 (struct skd_device*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct skd_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct skd_device *VAR_5 = VAR_4;
 unsigned long VAR_6;

 FUNC_4(&VAR_5->lock, VAR_6);
 FUNC_2(&VAR_5->pdev->dev, "MSIX = 0x%x\n",
  FUNC_0(VAR_5, VAR_0));
 FUNC_1(VAR_5, VAR_1, VAR_0);
 FUNC_3(VAR_5);
 FUNC_5(&VAR_5->lock, VAR_6);
 return VAR_2;
}
