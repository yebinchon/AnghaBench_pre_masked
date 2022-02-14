
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*,int,int) ;
 int FUNC_2 (struct hci_dev*,int) ;

int FUNC_3(struct hci_dev *VAR_0, bool VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_2(VAR_0, VAR_1);

 VAR_2 = FUNC_1(VAR_0, 0, 0);
 if (VAR_2)
  return VAR_2;

 return VAR_3;
}
