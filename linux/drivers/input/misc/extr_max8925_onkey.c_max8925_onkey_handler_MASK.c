
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_onkey_info {int i2c; int dev; int idev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct max8925_onkey_info *VAR_8 = VAR_7;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_8->i2c, VAR_3);

 FUNC_1(VAR_8->idev, VAR_2, VAR_9 & VAR_5);
 FUNC_2(VAR_8->idev);

 FUNC_0(VAR_8->dev, "onkey state:%d\n", VAR_9);


 FUNC_4(VAR_8->i2c, VAR_4,
    VAR_0, VAR_0);

 return VAR_1;
}
