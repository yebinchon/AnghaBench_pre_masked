
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_st {struct hci_dev* hdev; } ;
struct platform_device {int dev; } ;
struct hci_dev {int send; int * flush; int close; int open; int bus; } ;


 int FUNC_0 (char*,struct hci_dev*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct ti_st*) ;
 struct ti_st* FUNC_3 (int *,int,int ) ;
 struct hci_dev* FUNC_4 () ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,struct ti_st*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct ti_st *VAR_7;
 struct hci_dev *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(struct ti_st), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_8 = FUNC_4();
 if (!VAR_8)
  return -VAR_0;

 FUNC_0("hdev %p", VAR_8);

 VAR_7->hdev = VAR_8;
 VAR_8->bus = VAR_2;
 FUNC_7(VAR_8, VAR_7);
 VAR_8->open = VAR_4;
 VAR_8->close = VAR_3;
 VAR_8->flush = ((void*)0);
 VAR_8->send = VAR_5;

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 < 0) {
  FUNC_1("Can't register HCI device error %d", VAR_9);
  FUNC_5(VAR_8);
  return VAR_9;
 }

 FUNC_0("HCI device registered (hdev %p)", VAR_8);

 FUNC_2(&VAR_6->dev, VAR_7);
 return 0;
}
