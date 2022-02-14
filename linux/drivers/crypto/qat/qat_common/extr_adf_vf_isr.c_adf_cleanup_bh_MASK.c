
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_etr_data {TYPE_1__* banks; } ;
struct adf_accel_dev {struct adf_etr_data* transport; } ;
struct TYPE_2__ {int resp_handler; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adf_accel_dev *VAR_0)
{
 struct adf_etr_data *VAR_1 = VAR_0->transport;

 FUNC_0(&VAR_1->banks[0].resp_handler);
 FUNC_1(&VAR_1->banks[0].resp_handler);
}
