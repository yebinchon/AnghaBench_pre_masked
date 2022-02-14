
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int cmd_complete; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dw_i2c_dev*) ;
 int FUNC_3 (struct dw_i2c_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct dw_i2c_dev *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_3(VAR_2);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 > 0)
  FUNC_1(&VAR_2->cmd_complete);

 return FUNC_0(VAR_3);
}
