
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct btrtl_device_info {int fw_len; int fw_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct hci_dev*,char*) ;
 int FUNC_2 (struct hci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_2,
    struct btrtl_device_info *VAR_3)
{
 if (VAR_3->fw_len < 8)
  return -VAR_0;




 if (!FUNC_0(VAR_3->fw_data, VAR_1, 8)) {
  FUNC_1(VAR_2, "unexpected EPATCH signature!");
  return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_3->fw_data,
         VAR_3->fw_len);
}
