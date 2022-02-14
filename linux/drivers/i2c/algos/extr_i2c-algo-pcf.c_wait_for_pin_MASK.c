
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pcf_data {int data; int (* waitforpin ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_algo_pcf_data*,int) ;
 int FUNC_1 (struct i2c_algo_pcf_data*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_algo_pcf_data *VAR_5, int *VAR_6)
{

 int VAR_7 = VAR_0;

 *VAR_6 = FUNC_0(VAR_5, 1);

 while ((*VAR_6 & VAR_4) && --VAR_7) {
  VAR_5->waitforpin(VAR_5->data);
  *VAR_6 = FUNC_0(VAR_5, 1);
 }
 if (*VAR_6 & VAR_3) {
  FUNC_1(VAR_5, VAR_6);
  return -VAR_1;
 }

 if (VAR_7 == 0)
  return -VAR_2;

 return 0;
}
