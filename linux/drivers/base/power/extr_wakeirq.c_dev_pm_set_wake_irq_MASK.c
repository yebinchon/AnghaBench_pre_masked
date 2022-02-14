
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_irq {int irq; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,struct wake_irq*) ;
 int FUNC_1 (struct wake_irq*) ;
 struct wake_irq* FUNC_2 (int,int ) ;

int FUNC_3(struct device *VAR_3, int VAR_4)
{
 struct wake_irq *VAR_5;
 int VAR_6;

 if (VAR_4 < 0)
  return -VAR_0;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dev = VAR_3;
 VAR_5->irq = VAR_4;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_5);

 return VAR_6;
}
