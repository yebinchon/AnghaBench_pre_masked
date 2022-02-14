
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_hw_device_data {int num_banks; } ;
struct adf_etr_data {TYPE_1__* banks; } ;
struct adf_accel_dev {struct adf_hw_device_data* hw_device; struct adf_etr_data* transport; } ;
struct TYPE_2__ {int resp_handler; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adf_accel_dev *VAR_0)
{
 struct adf_etr_data *VAR_1 = VAR_0->transport;
 struct adf_hw_device_data *VAR_2 = VAR_0->hw_device;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_banks; VAR_3++) {
  FUNC_0(&VAR_1->banks[VAR_3].resp_handler);
  FUNC_1(&VAR_1->banks[VAR_3].resp_handler);
 }
}
