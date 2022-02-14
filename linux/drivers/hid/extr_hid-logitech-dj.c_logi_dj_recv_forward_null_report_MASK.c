
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct dj_report {size_t device_index; } ;
struct dj_receiver_dev {struct dj_device** paired_dj_devices; } ;
struct dj_device {int reports_supported; int hdev; } ;
typedef int reportbuffer ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int*,int ,int) ;
 int * VAR_3 ;
 int FUNC_2 (unsigned int*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dj_receiver_dev *VAR_4,
          struct dj_report *VAR_5)
{

 unsigned int VAR_6;
 u8 VAR_7[VAR_1];
 struct dj_device *VAR_8;

 VAR_8 = VAR_4->paired_dj_devices[VAR_5->device_index];

 FUNC_2(VAR_7, 0, sizeof(VAR_7));

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_8->reports_supported & (1 << VAR_6)) {
   VAR_7[0] = VAR_6;
   if (FUNC_1(VAR_8->hdev,
          VAR_0,
          VAR_7,
          VAR_3[VAR_6], 1)) {
    FUNC_0("hid_input_report error sending null "
     "report\n");
   }
  }
 }
}
