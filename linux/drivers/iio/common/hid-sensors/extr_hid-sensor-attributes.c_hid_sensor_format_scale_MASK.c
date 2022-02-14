
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hid_sensor_hub_attribute_info {scalar_t__ units; int unit_expo; } ;
struct TYPE_3__ {scalar_t__ usage_id; scalar_t__ unit; int scale_val1; int scale_val0; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,int ,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;

int FUNC_3(u32 VAR_2,
   struct hid_sensor_hub_attribute_info *VAR_3,
   int *VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;

 *VAR_4 = 1;
 *VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); ++VAR_6) {
  if (VAR_1[VAR_6].usage_id == VAR_2 &&
   VAR_1[VAR_6].unit == VAR_3->units) {
   VAR_7 = FUNC_2(
      VAR_3->unit_expo);
   FUNC_1(VAR_4, VAR_5,
     VAR_1[VAR_6].scale_val0,
     VAR_1[VAR_6].scale_val1, VAR_7);
   break;
  }
 }

 return VAR_0;
}
