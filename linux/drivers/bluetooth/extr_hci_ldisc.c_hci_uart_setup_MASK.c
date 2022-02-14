
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct hci_uart {int init_speed; int oper_speed; int hdev_flags; TYPE_1__* proto; } ;
struct hci_rp_read_local_version {int manufacturer; } ;
struct hci_dev {int set_bdaddr; int name; } ;
struct TYPE_2__ {int init_speed; int oper_speed; int (* set_baudrate ) (struct hci_uart*,unsigned int) ;int (* setup ) (struct hci_uart*) ;} ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int VAR_3 ;
 int FUNC_5 (struct hci_dev*) ;
 int VAR_4 ;
 struct hci_uart* FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_uart*,unsigned int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct hci_uart*,unsigned int) ;
 int FUNC_11 (struct hci_uart*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct hci_dev *VAR_5)
{
 struct hci_uart *VAR_6 = FUNC_6(VAR_5);
 struct hci_rp_read_local_version *VAR_7;
 struct sk_buff *VAR_8;
 unsigned int VAR_9;
 int VAR_10;


 if (VAR_6->init_speed)
  VAR_9 = VAR_6->init_speed;
 else if (VAR_6->proto->init_speed)
  VAR_9 = VAR_6->proto->init_speed;
 else
  VAR_9 = 0;

 if (VAR_9)
  FUNC_7(VAR_6, VAR_9);


 if (VAR_6->oper_speed)
  VAR_9 = VAR_6->oper_speed;
 else if (VAR_6->proto->oper_speed)
  VAR_9 = VAR_6->proto->oper_speed;
 else
  VAR_9 = 0;

 if (VAR_6->proto->set_baudrate && VAR_9) {
  VAR_10 = VAR_6->proto->set_baudrate(VAR_6, VAR_9);
  if (!VAR_10)
   FUNC_7(VAR_6, VAR_9);
 }

 if (VAR_6->proto->setup)
  return VAR_6->proto->setup(VAR_6);

 if (!FUNC_12(VAR_2, &VAR_6->hdev_flags))
  return 0;

 VAR_8 = FUNC_3(VAR_5, VAR_1, 0, ((void*)0),
        VAR_0);
 if (FUNC_1(VAR_8)) {
  FUNC_0("%s: Reading local version information failed (%ld)",
         VAR_5->name, FUNC_2(VAR_8));
  return 0;
 }

 if (VAR_8->len != sizeof(*VAR_7)) {
  FUNC_0("%s: Event length mismatch for version information",
         VAR_5->name);
  goto done;
 }

 VAR_7 = (struct hci_rp_read_local_version *)VAR_8->data;

 switch (FUNC_9(VAR_7->manufacturer)) {
 default:
  break;
 }

done:
 FUNC_8(VAR_8);
 return 0;
}
