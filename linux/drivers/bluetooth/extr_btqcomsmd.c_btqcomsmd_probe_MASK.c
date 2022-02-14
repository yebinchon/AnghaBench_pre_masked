
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hci_dev {int set_bdaddr; int setup; int send; int close; int open; int bus; } ;
struct btqcomsmd {struct hci_dev* hdev; void* cmd_channel; void* acl_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct hci_dev*,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int ) ;
 struct btqcomsmd* FUNC_4 (TYPE_1__*,int,int ) ;
 struct hci_dev* FUNC_5 () ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,struct btqcomsmd*) ;
 int FUNC_9 (struct platform_device*,struct btqcomsmd*) ;
 int VAR_9 ;
 void* FUNC_10 (void*,char*,int ,struct btqcomsmd*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct btqcomsmd *VAR_11;
 struct hci_dev *VAR_12;
 void *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_4(&VAR_10->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_10->dev.parent);

 VAR_11->acl_channel = FUNC_10(VAR_13, "APPS_RIVA_BT_ACL",
         VAR_3, VAR_11);
 if (FUNC_0(VAR_11->acl_channel))
  return FUNC_1(VAR_11->acl_channel);

 VAR_11->cmd_channel = FUNC_10(VAR_13, "APPS_RIVA_BT_CMD",
         VAR_5, VAR_11);
 if (FUNC_0(VAR_11->cmd_channel))
  return FUNC_1(VAR_11->cmd_channel);

 VAR_12 = FUNC_5();
 if (!VAR_12)
  return -VAR_0;

 FUNC_8(VAR_12, VAR_11);
 VAR_11->hdev = VAR_12;
 FUNC_2(VAR_12, &VAR_10->dev);

 VAR_12->bus = VAR_2;
 VAR_12->open = VAR_6;
 VAR_12->close = VAR_4;
 VAR_12->send = VAR_7;
 VAR_12->setup = VAR_8;
 VAR_12->set_bdaddr = VAR_9;

 VAR_14 = FUNC_7(VAR_12);
 if (VAR_14 < 0) {
  FUNC_6(VAR_12);
  return VAR_14;
 }

 FUNC_9(VAR_10, VAR_11);

 return 0;
}
