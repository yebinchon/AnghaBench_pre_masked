
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct axp20x_pek {int irq_dbf; int irq_dbr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct axp20x_pek* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3;
 struct axp20x_pek *VAR_5 = FUNC_0(VAR_4);





 if (VAR_2 == VAR_5->irq_dbf)
  FUNC_1(VAR_4, VAR_1, 1);
 else if (VAR_2 == VAR_5->irq_dbr)
  FUNC_1(VAR_4, VAR_1, 0);

 FUNC_2(VAR_4);

 return VAR_0;
}
