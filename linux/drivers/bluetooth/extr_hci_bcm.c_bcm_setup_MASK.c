
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hci_uart {int init_speed; int oper_speed; TYPE_2__* hdev; TYPE_1__* proto; struct bcm_data* priv; } ;
struct firmware {int dummy; } ;
struct bcm_data {int dummy; } ;
typedef int fw_name ;
struct TYPE_8__ {int dev; int set_bdaddr; int set_diag; } ;
struct TYPE_7__ {int init_speed; int oper_speed; } ;


 int FUNC_0 (struct bcm_data*) ;
 int FUNC_1 (struct hci_uart*,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (TYPE_2__*,char*,struct hci_uart*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,int,int) ;
 int FUNC_7 (TYPE_2__*,struct firmware const*) ;
 int VAR_1 ;
 int FUNC_8 (struct hci_uart*,unsigned int) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_11(struct hci_uart *VAR_2)
{
 struct bcm_data *VAR_3 = VAR_2->priv;
 char VAR_4[64];
 const struct firmware *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_3(VAR_2->hdev, "hu %p", VAR_2);

 VAR_2->hdev->set_diag = VAR_0;
 VAR_2->hdev->set_bdaddr = VAR_1;

 VAR_7 = FUNC_6(VAR_2->hdev, VAR_4, sizeof(VAR_4), 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_10(&VAR_5, VAR_4, &VAR_2->hdev->dev);
 if (VAR_7 < 0) {
  FUNC_4(VAR_2->hdev, "BCM: Patch %s not found", VAR_4);
  return 0;
 }

 VAR_7 = FUNC_7(VAR_2->hdev, VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_2->hdev, "BCM: Patch failed (%d)", VAR_7);
  goto finalize;
 }


 if (VAR_2->init_speed)
  VAR_6 = VAR_2->init_speed;
 else if (VAR_2->proto->init_speed)
  VAR_6 = VAR_2->proto->init_speed;
 else
  VAR_6 = 0;

 if (VAR_6)
  FUNC_8(VAR_2, VAR_6);


 if (VAR_2->oper_speed)
  VAR_6 = VAR_2->oper_speed;
 else if (VAR_2->proto->oper_speed)
  VAR_6 = VAR_2->proto->oper_speed;
 else
  VAR_6 = 0;

 if (VAR_6) {
  VAR_7 = FUNC_1(VAR_2, VAR_6);
  if (!VAR_7)
   FUNC_8(VAR_2, VAR_6);
 }

finalize:
 FUNC_9(VAR_5);

 VAR_7 = FUNC_5(VAR_2->hdev);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_0(VAR_3))
  VAR_7 = FUNC_2(VAR_2);

 return VAR_7;
}
