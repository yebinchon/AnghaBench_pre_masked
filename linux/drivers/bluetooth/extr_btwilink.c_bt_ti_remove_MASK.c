
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_st {struct hci_dev* hdev; } ;
struct platform_device {int dev; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct ti_st* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct hci_dev *VAR_2;
 struct ti_st *VAR_3 = FUNC_1(&VAR_1->dev);

 if (!VAR_3)
  return -VAR_0;

 FUNC_0("%s", VAR_3->hdev->name);

 VAR_2 = VAR_3->hdev;
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 FUNC_2(&VAR_1->dev, ((void*)0));
 return 0;
}
