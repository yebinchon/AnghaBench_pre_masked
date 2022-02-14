
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btsdio_data {struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct sdio_func*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct btsdio_data* FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,int *) ;

__attribute__((used)) static void FUNC_5(struct sdio_func *VAR_0)
{
 struct btsdio_data *VAR_1 = FUNC_3(VAR_0);
 struct hci_dev *VAR_2;

 FUNC_0("func %p", VAR_0);

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->hdev;

 FUNC_4(VAR_0, ((void*)0));

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);
}
