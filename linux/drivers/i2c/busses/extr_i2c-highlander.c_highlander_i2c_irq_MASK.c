
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct highlander_i2c_dev {int cmd_complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct highlander_i2c_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct highlander_i2c_dev *VAR_3 = VAR_2;

 FUNC_1(VAR_3);
 FUNC_0(&VAR_3->cmd_complete);

 return VAR_0;
}
