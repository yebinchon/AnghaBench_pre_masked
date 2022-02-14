
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int tci_sleep ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btmtksdio_dev {int dev; TYPE_1__* data; } ;
struct btmtk_tci_sleep {int mode; scalar_t__ time_compensation; scalar_t__ host_wakeup_pin; void* host_duration; void* duration; } ;
struct btmtk_hci_wmt_params {int flag; int dlen; int* data; int* status; int op; } ;
typedef int param ;
typedef int ktime_t ;
struct TYPE_2__ {int fwname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int,int,struct btmtk_tci_sleep*,int ) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct hci_dev*,char*,...) ;
 int VAR_7 ;
 void* FUNC_5 (int) ;
 scalar_t__ VAR_8 ;
 struct btmtksdio_dev* FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct hci_dev*,struct btmtk_hci_wmt_params*) ;
 int FUNC_12 (struct hci_dev*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,struct hci_dev*,int,int,int,int) ;

__attribute__((used)) static int FUNC_20(struct hci_dev *VAR_9)
{
 struct btmtksdio_dev *VAR_10 = FUNC_6(VAR_9);
 struct btmtk_hci_wmt_params VAR_11;
 ktime_t VAR_12, VAR_13, VAR_14;
 struct btmtk_tci_sleep VAR_15;
 unsigned long long VAR_16;
 struct sk_buff *VAR_17;
 int VAR_18, VAR_19;
 u8 VAR_20 = 0x1;

 VAR_12 = FUNC_8();


 VAR_11.op = VAR_6;
 VAR_11.flag = 1;
 VAR_11.dlen = 0;
 VAR_11.data = ((void*)0);
 VAR_11.status = &VAR_19;

 VAR_18 = FUNC_11(VAR_9, &VAR_11);
 if (VAR_18 < 0) {
  FUNC_3(VAR_9, "Failed to query firmware status (%d)", VAR_18);
  return VAR_18;
 }

 if (VAR_19 == VAR_2) {
  FUNC_4(VAR_9, "Firmware already downloaded");
  goto ignore_setup_fw;
 }


 VAR_18 = FUNC_12(VAR_9, VAR_10->data->fwname);
 if (VAR_18 < 0)
  return VAR_18;

ignore_setup_fw:

 VAR_18 = FUNC_19(VAR_7, VAR_9, VAR_19,
     VAR_19 < 0 || VAR_19 != VAR_1,
     2000, 5000000);

 if (VAR_18 < 0)
  return VAR_18;


 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_19 == VAR_0) {
  FUNC_4(VAR_9, "function already on");
  goto ignore_func_on;
 }


 VAR_11.op = VAR_5;
 VAR_11.flag = 0;
 VAR_11.dlen = sizeof(VAR_20);
 VAR_11.data = &VAR_20;
 VAR_11.status = ((void*)0);

 VAR_18 = FUNC_11(VAR_9, &VAR_11);
 if (VAR_18 < 0) {
  FUNC_3(VAR_9, "Failed to send wmt func ctrl (%d)", VAR_18);
  return VAR_18;
 }

ignore_func_on:

 VAR_15.mode = 0x5;
 VAR_15.duration = FUNC_5(0x640);
 VAR_15.host_duration = FUNC_5(0x640);
 VAR_15.host_wakeup_pin = 0;
 VAR_15.time_compensation = 0;

 VAR_17 = FUNC_2(VAR_9, 0xfc7a, sizeof(VAR_15), &VAR_15,
        VAR_3);
 if (FUNC_0(VAR_17)) {
  VAR_18 = FUNC_1(VAR_17);
  FUNC_3(VAR_9, "Failed to apply low power setting (%d)", VAR_18);
  return VAR_18;
 }
 FUNC_7(VAR_17);

 VAR_14 = FUNC_8();
 VAR_13 = FUNC_9(VAR_14, VAR_12);
 VAR_16 = (unsigned long long)FUNC_10(VAR_13) >> 10;

 FUNC_17(VAR_10->dev,
      VAR_4);
 FUNC_18(VAR_10->dev);

 VAR_18 = FUNC_16(VAR_10->dev);
 if (VAR_18 < 0)
  return VAR_18;




 FUNC_15(VAR_10->dev);
 FUNC_14(VAR_10->dev);

 if (VAR_8)
  FUNC_13(VAR_10->dev);

 FUNC_4(VAR_9, "Device setup in %llu usecs", VAR_16);

 return 0;
}
