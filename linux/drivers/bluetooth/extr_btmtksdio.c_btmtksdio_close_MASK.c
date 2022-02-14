
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {int dummy; } ;
struct btmtksdio_dev {int func; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 struct btmtksdio_dev* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,struct btmtksdio_dev*,int,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_5)
{
 struct btmtksdio_dev *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;
 int VAR_8;

 FUNC_3(VAR_6->func);


 FUNC_7(VAR_6->func, VAR_2, VAR_3, ((void*)0));

 FUNC_6(VAR_6->func);


 FUNC_7(VAR_6->func, VAR_1, VAR_3, ((void*)0));

 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7,
     !(VAR_7 & VAR_0), 2000, 1000000);
 if (VAR_8 < 0)
  FUNC_0(VAR_6->hdev, "Cannot return ownership to device");

 FUNC_4(VAR_6->func);

 FUNC_5(VAR_6->func);

 return 0;
}
