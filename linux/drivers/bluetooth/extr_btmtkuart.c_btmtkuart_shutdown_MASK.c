
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct btmtk_hci_wmt_params {int dlen; int* data; int * status; scalar_t__ flag; int op; } ;
typedef int param ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*,int) ;
 int FUNC_1 (struct hci_dev*,struct btmtk_hci_wmt_params*) ;

__attribute__((used)) static int FUNC_2(struct hci_dev *VAR_1)
{
 struct btmtk_hci_wmt_params VAR_2;
 u8 VAR_3 = 0x0;
 int VAR_4;


 VAR_2.op = VAR_0;
 VAR_2.flag = 0;
 VAR_2.dlen = sizeof(VAR_3);
 VAR_2.data = &VAR_3;
 VAR_2.status = ((void*)0);

 VAR_4 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "Failed to send wmt func ctrl (%d)", VAR_4);
  return VAR_4;
 }

 return 0;
}
