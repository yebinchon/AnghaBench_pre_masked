
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct int3496_data {int work; int usb_id_irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct int3496_data*) ;
 struct int3496_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct int3496_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->dev, VAR_1->usb_id_irq, VAR_1);
 FUNC_0(&VAR_1->work);

 return 0;
}
