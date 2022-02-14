
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_sensor_hub_device {int dummy; } ;
struct hid_sensor_custom {int input_skip_sample; int wait; scalar_t__ input_report_recd_size; int misc_opened; } ;


 struct hid_sensor_custom* FUNC_0 (void*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hid_sensor_hub_device *VAR_0,
     unsigned VAR_1, void *VAR_2)
{
 struct hid_sensor_custom *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_1(0, &VAR_3->misc_opened))
  return 0;

 VAR_3->input_report_recd_size = 0;
 VAR_3->input_skip_sample = 0;

 FUNC_2(&VAR_3->wait);

 return 0;
}
