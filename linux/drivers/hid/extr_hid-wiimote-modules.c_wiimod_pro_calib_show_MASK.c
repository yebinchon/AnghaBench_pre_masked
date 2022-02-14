
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * calib_pro_sticks; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct wiimote_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct wiimote_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = 0;
 VAR_4 += FUNC_1(&VAR_2[VAR_4], "%+06hd:", VAR_3->state.calib_pro_sticks[0]);
 VAR_4 += FUNC_1(&VAR_2[VAR_4], "%+06hd ", VAR_3->state.calib_pro_sticks[1]);
 VAR_4 += FUNC_1(&VAR_2[VAR_4], "%+06hd:", VAR_3->state.calib_pro_sticks[2]);
 VAR_4 += FUNC_1(&VAR_2[VAR_4], "%+06hd\n", VAR_3->state.calib_pro_sticks[3]);

 return VAR_4;
}
