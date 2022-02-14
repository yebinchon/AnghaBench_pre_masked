
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_etr_data {struct adf_etr_data* banks; int debug; } ;
struct adf_accel_dev {struct adf_etr_data* transport; } ;


 int FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adf_etr_data*) ;

void FUNC_3(struct adf_accel_dev *VAR_0)
{
 struct adf_etr_data *VAR_1 = VAR_0->transport;

 if (VAR_1) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_1->debug);
  FUNC_2(VAR_1->banks);
  FUNC_2(VAR_1);
  VAR_0->transport = ((void*)0);
 }
}
