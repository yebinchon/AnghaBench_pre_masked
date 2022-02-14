
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct max77843_muic_info {int irq_work; struct max77693_dev* max77843; } ;
struct max77693_dev {int i2c_muic; int irq_data_muic; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct max77843_muic_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct max77843_muic_info *VAR_1 = FUNC_2(VAR_0);
 struct max77693_dev *VAR_2 = VAR_1->max77843;

 FUNC_0(&VAR_1->irq_work);
 FUNC_3(VAR_2->irq, VAR_2->irq_data_muic);
 FUNC_1(VAR_2->i2c_muic);

 return 0;
}
