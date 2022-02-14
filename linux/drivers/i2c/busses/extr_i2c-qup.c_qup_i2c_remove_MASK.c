
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int dma; } ;
struct qup_i2c_dev {int dev; int adap; int irq; TYPE_2__ brx; TYPE_1__ btx; scalar_t__ is_dma; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct qup_i2c_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qup_i2c_dev*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct qup_i2c_dev *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->is_dma) {
  FUNC_1(VAR_1->btx.dma);
  FUNC_1(VAR_1->brx.dma);
 }

 FUNC_0(VAR_1->irq);
 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->adap);
 FUNC_4(VAR_1->dev);
 FUNC_5(VAR_1->dev);
 return 0;
}
