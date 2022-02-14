
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {scalar_t__ sda_hold_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_i2c_dev*) ;
 int FUNC_1 (struct dw_i2c_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct dw_i2c_dev*) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (struct dw_i2c_dev*) ;

__attribute__((used)) static int FUNC_5(struct dw_i2c_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;


 FUNC_0(VAR_1);


 if (VAR_1->sda_hold_time)
  FUNC_1(VAR_1, VAR_1->sda_hold_time, VAR_0);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 return 0;
}
