
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct btrtl_device_info {TYPE_1__* ic_info; } ;
struct TYPE_2__ {int lmp_subver; } ;
 int FUNC_0 (struct hci_dev*,struct btrtl_device_info*) ;
 int FUNC_1 (struct hci_dev*,struct btrtl_device_info*) ;
 int FUNC_2 (struct hci_dev*,char*) ;

int FUNC_3(struct hci_dev *VAR_0,
       struct btrtl_device_info *VAR_1)
{






 if (!VAR_1->ic_info) {
  FUNC_2(VAR_0, "assuming no firmware upload needed");
  return 0;
 }

 switch (VAR_1->ic_info->lmp_subver) {
 case 132:
 case 133:
  return FUNC_0(VAR_0, VAR_1);
 case 131:
 case 129:
 case 130:
 case 128:
  return FUNC_1(VAR_0, VAR_1);
 default:
  FUNC_2(VAR_0, "assuming no firmware upload needed");
  return 0;
 }
}
