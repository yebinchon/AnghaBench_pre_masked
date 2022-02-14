
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_onkey_info {int i2c; int idev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct pm860x_onkey_info *VAR_8 = VAR_7;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_8->i2c, VAR_4);
 VAR_9 &= VAR_3;
 FUNC_0(VAR_8->idev, VAR_1, VAR_9);
 FUNC_1(VAR_8->idev);


 FUNC_3(VAR_8->i2c, VAR_5, 3, VAR_2);
 return VAR_0;
}
