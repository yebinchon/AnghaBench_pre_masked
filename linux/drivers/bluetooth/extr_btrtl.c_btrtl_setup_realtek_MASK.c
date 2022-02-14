
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int quirks; } ;
struct btrtl_device_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrtl_device_info*) ;
 int FUNC_1 (struct btrtl_device_info*) ;
 int FUNC_2 (struct hci_dev*,struct btrtl_device_info*) ;
 int FUNC_3 (struct btrtl_device_info*) ;
 struct btrtl_device_info* FUNC_4 (struct hci_dev*,int *) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct hci_dev *VAR_1)
{
 struct btrtl_device_info *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1, ((void*)0));
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 FUNC_3(VAR_2);




 FUNC_5(VAR_0, &VAR_1->quirks);

 return VAR_3;
}
