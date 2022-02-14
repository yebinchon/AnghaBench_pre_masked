
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct btmtkuart_dev {int desired_speed; int curr_speed; int serdev; } ;
struct btmtk_hci_wmt_params {int flag; int dlen; int * status; int * data; int op; } ;
typedef int param ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,char*,int) ;
 int FUNC_1 (int ) ;
 struct btmtkuart_dev* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,struct btmtk_hci_wmt_params*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int*,int,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_3)
{
 struct btmtkuart_dev *VAR_4 = FUNC_2(VAR_3);
 struct btmtk_hci_wmt_params VAR_5;
 __le32 VAR_6;
 u8 VAR_7;
 int VAR_8;




 VAR_6 = FUNC_1(VAR_4->desired_speed);
 VAR_5.op = VAR_1;
 VAR_5.flag = 1;
 VAR_5.dlen = 4;
 VAR_5.data = &VAR_6;
 VAR_5.status = ((void*)0);

 VAR_8 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "Failed to device baudrate (%d)", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_4->serdev,
      VAR_4->desired_speed);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "Failed to set up host baudrate (%d)",
      VAR_8);
  return VAR_8;
 }

 FUNC_5(VAR_4->serdev, 0);


 VAR_7 = 0xff;
 VAR_8 = FUNC_7(VAR_4->serdev, &VAR_7, sizeof(VAR_7),
      VAR_0);
 if (VAR_8 < 0 || VAR_8 < sizeof(VAR_7))
  return VAR_8;

 FUNC_6(VAR_4->serdev, 0);


 FUNC_8(20000, 22000);


 VAR_5.op = VAR_2;
 VAR_5.flag = 7;
 VAR_5.dlen = 0;
 VAR_5.data = ((void*)0);
 VAR_5.status = ((void*)0);

 VAR_8 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "Failed to test new baudrate (%d)",
      VAR_8);
  return VAR_8;
 }

 VAR_4->curr_speed = VAR_4->desired_speed;

 return 0;
}
