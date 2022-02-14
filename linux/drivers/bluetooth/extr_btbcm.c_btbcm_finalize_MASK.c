
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int quirks; } ;
typedef int fw_name ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*,char*,int,int) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct hci_dev *VAR_1)
{
 char VAR_2[64];
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1, VAR_2, sizeof(VAR_2), 1);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1);

 FUNC_2(VAR_0, &VAR_1->quirks);

 return 0;
}
