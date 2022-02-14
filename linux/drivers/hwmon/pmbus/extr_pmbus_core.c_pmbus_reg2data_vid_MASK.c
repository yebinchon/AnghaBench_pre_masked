
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_sensor {long data; } ;
struct pmbus_data {TYPE_1__* info; } ;
struct TYPE_2__ {int vrm_version; } ;


 long FUNC_0 (int,int) ;




__attribute__((used)) static long FUNC_1(struct pmbus_data *VAR_0,
          struct pmbus_sensor *VAR_1)
{
 long VAR_2 = VAR_1->data;
 long VAR_3 = 0;

 switch (VAR_0->info->vrm_version) {
 case 130:
  if (VAR_2 >= 0x02 && VAR_2 <= 0xb2)
   VAR_3 = FUNC_0(160000 - (VAR_2 - 2) * 625, 100);
  break;
 case 129:
  if (VAR_2 >= 0x01)
   VAR_3 = 250 + (VAR_2 - 1) * 5;
  break;
 case 128:
  if (VAR_2 >= 0x01)
   VAR_3 = 500 + (VAR_2 - 1) * 10;
  break;
 }
 return VAR_3;
}
