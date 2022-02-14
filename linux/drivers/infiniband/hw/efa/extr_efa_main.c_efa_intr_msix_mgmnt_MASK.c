
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_dev {int edev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct efa_dev *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->edev);
 FUNC_1(&VAR_3->edev, VAR_2);

 return VAR_0;
}
