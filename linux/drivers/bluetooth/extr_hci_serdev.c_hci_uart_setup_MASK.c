
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct hci_uart {int init_speed; int oper_speed; int hdev_flags; TYPE_1__* proto; int serdev; } ;
struct hci_rp_read_local_version {int dummy; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int init_speed; int oper_speed; int (* set_baudrate ) (struct hci_uart*,unsigned int) ;int (* setup ) (struct hci_uart*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_3 (struct hci_dev*,char*,...) ;
 struct hci_uart* FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (struct hci_uart*,unsigned int) ;
 int FUNC_8 (struct hci_uart*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct hci_dev *VAR_3)
{
 struct hci_uart *VAR_4 = FUNC_4(VAR_3);
 struct hci_rp_read_local_version *VAR_5;
 struct sk_buff *VAR_6;
 unsigned int VAR_7;
 int VAR_8;


 if (VAR_4->init_speed)
  VAR_7 = VAR_4->init_speed;
 else if (VAR_4->proto->init_speed)
  VAR_7 = VAR_4->proto->init_speed;
 else
  VAR_7 = 0;

 if (VAR_7)
  FUNC_6(VAR_4->serdev, VAR_7);


 if (VAR_4->oper_speed)
  VAR_7 = VAR_4->oper_speed;
 else if (VAR_4->proto->oper_speed)
  VAR_7 = VAR_4->proto->oper_speed;
 else
  VAR_7 = 0;

 if (VAR_4->proto->set_baudrate && VAR_7) {
  VAR_8 = VAR_4->proto->set_baudrate(VAR_4, VAR_7);
  if (VAR_8)
   FUNC_3(VAR_3, "Failed to set baudrate");
  else
   FUNC_6(VAR_4->serdev, VAR_7);
 }

 if (VAR_4->proto->setup)
  return VAR_4->proto->setup(VAR_4);

 if (!FUNC_9(VAR_2, &VAR_4->hdev_flags))
  return 0;

 VAR_6 = FUNC_2(VAR_3, VAR_1, 0, ((void*)0),
        VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_3(VAR_3, "Reading local version info failed (%ld)",
      FUNC_1(VAR_6));
  return 0;
 }

 if (VAR_6->len != sizeof(*VAR_5))
  FUNC_3(VAR_3, "Event length mismatch for version info");

 FUNC_5(VAR_6);
 return 0;
}
