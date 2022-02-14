
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dj_report {size_t device_index; int report_type; } ;
struct dj_receiver_dev {struct dj_device** paired_dj_devices; } ;
struct dj_device {int hdev; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,size_t*,scalar_t__,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct dj_receiver_dev *VAR_2,
        struct dj_report *VAR_3)
{

 struct dj_device *VAR_4;

 VAR_4 = VAR_2->paired_dj_devices[VAR_3->device_index];

 if ((VAR_3->report_type > FUNC_0(VAR_1) - 1) ||
     (VAR_1[VAR_3->report_type] == 0)) {
  FUNC_1("invalid report type:%x\n", VAR_3->report_type);
  return;
 }

 if (FUNC_2(VAR_4->hdev,
   VAR_0, &VAR_3->report_type,
   VAR_1[VAR_3->report_type], 1)) {
  FUNC_1("hid_input_report error\n");
 }
}
