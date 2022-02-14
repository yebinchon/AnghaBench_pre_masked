
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_ponkey {int irq_dbf; int irq_dbr; int idev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ab8500_ponkey *VAR_4 = VAR_3;

 if (VAR_2 == VAR_4->irq_dbf)
  FUNC_0(VAR_4->idev, VAR_1, 1);
 else if (VAR_2 == VAR_4->irq_dbr)
  FUNC_0(VAR_4->idev, VAR_1, 0);

 FUNC_1(VAR_4->idev);

 return VAR_0;
}
