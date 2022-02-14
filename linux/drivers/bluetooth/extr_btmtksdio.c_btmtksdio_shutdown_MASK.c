
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct btmtksdio_dev {int dev; } ;
struct btmtk_hci_wmt_params {int dlen; int* data; int * status; scalar_t__ flag; int op; } ;
typedef int param ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*,int) ;
 struct btmtksdio_dev* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,struct btmtk_hci_wmt_params*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1)
{
 struct btmtksdio_dev *VAR_2 = FUNC_1(VAR_1);
 struct btmtk_hci_wmt_params VAR_3;
 u8 VAR_4 = 0x0;
 int VAR_5;




 FUNC_4(VAR_2->dev);


 VAR_3.op = VAR_0;
 VAR_3.flag = 0;
 VAR_3.dlen = sizeof(VAR_4);
 VAR_3.data = &VAR_4;
 VAR_3.status = ((void*)0);

 VAR_5 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1, "Failed to send wmt func ctrl (%d)", VAR_5);
  return VAR_5;
 }

 FUNC_5(VAR_2->dev);
 FUNC_3(VAR_2->dev);

 return 0;
}
