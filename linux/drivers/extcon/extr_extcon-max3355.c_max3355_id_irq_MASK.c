
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max3355_data {int edev; int id_gpiod; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct max3355_data *VAR_5 = VAR_4;
 int VAR_6 = FUNC_1(VAR_5->id_gpiod);

 if (VAR_6) {





  FUNC_0(VAR_5->edev, VAR_1, 0);
  FUNC_0(VAR_5->edev, VAR_0, 1);
 } else {





  FUNC_0(VAR_5->edev, VAR_0, 0);
  FUNC_0(VAR_5->edev, VAR_1, 1);
 }

 return VAR_2;
}
