
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_hw_device_data {int num_banks; } ;
struct adf_etr_data {TYPE_1__* banks; } ;
struct adf_accel_dev {struct adf_hw_device_data* hw_device; struct adf_etr_data* transport; } ;
struct TYPE_2__ {int resp_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct adf_accel_dev *VAR_1)
{
 struct adf_etr_data *VAR_2 = VAR_1->transport;
 struct adf_hw_device_data *VAR_3 = VAR_1->hw_device;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_banks; VAR_4++)
  FUNC_0(&VAR_2->banks[VAR_4].resp_handler,
        VAR_0,
        (unsigned long)&VAR_2->banks[VAR_4]);
 return 0;
}
