
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int workitem ;
struct hidpp_event {int* params; int device_index; } ;
struct hid_device {int dummy; } ;
struct dj_workitem {scalar_t__ type; int reports_supported; int device_index; } ;
struct dj_receiver_dev {int work; int notif_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct dj_receiver_dev* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*,char const*,...) ;
 int FUNC_2 (struct hid_device*,char*,char const*,int,int ) ;
 int FUNC_3 (int *,struct dj_workitem*,int) ;
 int FUNC_4 (struct hid_device*,struct hidpp_event*,struct dj_workitem*) ;
 int FUNC_5 (struct hid_device*,struct hidpp_event*,struct dj_workitem*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct hid_device *VAR_6,
     struct hidpp_event *VAR_7)
{

 struct dj_receiver_dev *VAR_8 = FUNC_0(VAR_6);
 const char *VAR_9 = "UNKNOWN";
 struct dj_workitem VAR_10 = {
  .type = VAR_5,
  .device_index = VAR_7->device_index,
 };

 switch (VAR_7->params[VAR_3]) {
 case 0x01:
  VAR_9 = "Bluetooth";

  FUNC_5(VAR_6, VAR_7, &VAR_10);
  if (!(VAR_7->params[VAR_2] &
      VAR_1)) {
   FUNC_1(VAR_6, "Non Logitech device connected on slot %d\n",
     VAR_7->device_index);
   VAR_10.reports_supported &= ~VAR_0;
  }
  break;
 case 0x02:
  VAR_9 = "27 Mhz";
  FUNC_4(VAR_6, VAR_7, &VAR_10);
  break;
 case 0x03:
  VAR_9 = "QUAD or eQUAD";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  break;
 case 0x04:
  VAR_9 = "eQUAD step 4 DJ";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  break;
 case 0x05:
  VAR_9 = "DFU Lite";
  break;
 case 0x06:
  VAR_9 = "eQUAD step 4 Lite";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  break;
 case 0x07:
  VAR_9 = "eQUAD step 4 Gaming";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  break;
 case 0x08:
  VAR_9 = "eQUAD step 4 for gamepads";
  break;
 case 0x0a:
  VAR_9 = "eQUAD nano Lite";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  break;
 case 0x0c:
  VAR_9 = "eQUAD Lightspeed 1";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  VAR_10.reports_supported |= VAR_4;
  break;
 case 0x0d:
  VAR_9 = "eQUAD Lightspeed 1_1";
  FUNC_5(VAR_6, VAR_7, &VAR_10);
  VAR_10.reports_supported |= VAR_4;
  break;
 }

 if (VAR_10.type == VAR_5) {
  FUNC_2(VAR_6,
    "unusable device of type %s (0x%02x) connected on slot %d",
    VAR_9,
    VAR_7->params[VAR_3],
    VAR_7->device_index);
  return;
 }

 FUNC_1(VAR_6, "device of type %s (0x%02x) connected on slot %d",
   VAR_9, VAR_7->params[VAR_3],
   VAR_7->device_index);

 FUNC_3(&VAR_8->notif_fifo, &VAR_10, sizeof(VAR_10));
 FUNC_6(&VAR_8->work);
}
