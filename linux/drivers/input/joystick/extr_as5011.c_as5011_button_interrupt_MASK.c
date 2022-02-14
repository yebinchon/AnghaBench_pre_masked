
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as5011_device {int input_dev; int button_gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct as5011_device *VAR_4 = VAR_3;
 int VAR_5 = FUNC_0(VAR_4->button_gpio);

 FUNC_1(VAR_4->input_dev, VAR_0, !VAR_5);
 FUNC_2(VAR_4->input_dev);

 return VAR_1;
}
