
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bcm_iproc_i2c_dev {int adapter; scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*,int ) ;
 int FUNC_3 (struct bcm_iproc_i2c_dev*,int ,int ) ;
 struct bcm_iproc_i2c_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct bcm_iproc_i2c_dev *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2->irq) {




  FUNC_3(VAR_2, VAR_0, 0);
  FUNC_2(VAR_2, VAR_0);
  FUNC_5(VAR_2->irq);
 }

 FUNC_1(&VAR_2->adapter);
 FUNC_0(VAR_2, 0);

 return 0;
}
