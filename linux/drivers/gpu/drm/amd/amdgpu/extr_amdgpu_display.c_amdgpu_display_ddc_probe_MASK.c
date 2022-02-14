
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct TYPE_4__ {scalar_t__ ddc_valid; } ;
struct amdgpu_connector {TYPE_3__* ddc_bus; TYPE_1__ router; } ;
struct TYPE_5__ {int ddc; } ;
struct TYPE_6__ {int adapter; TYPE_2__ aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_connector*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;

bool FUNC_3(struct amdgpu_connector *VAR_2,
         bool VAR_3)
{
 u8 VAR_4 = 0x0;
 u8 VAR_5[8];
 int VAR_6;
 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_0,
   .flags = 0,
   .len = 1,
   .buf = &VAR_4,
  },
  {
   .addr = VAR_0,
   .flags = VAR_1,
   .len = 8,
   .buf = VAR_5,
  }
 };


 if (VAR_2->router.ddc_valid)
  FUNC_0(VAR_2);

 if (VAR_3) {
  VAR_6 = FUNC_2(&VAR_2->ddc_bus->aux.ddc, VAR_7, 2);
 } else {
  VAR_6 = FUNC_2(&VAR_2->ddc_bus->adapter, VAR_7, 2);
 }

 if (VAR_6 != 2)

  return 0;





 if (FUNC_1(VAR_5) < 6) {


  return 0;
 }
 return 1;
}
