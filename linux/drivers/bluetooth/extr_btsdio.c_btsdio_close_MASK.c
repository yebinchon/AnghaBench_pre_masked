
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct btsdio_data {int func; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct btsdio_data* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_1)
{
 struct btsdio_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0("%s", VAR_1->name);

 FUNC_2(VAR_2->func);

 FUNC_6(VAR_2->func, 0x00, VAR_0, ((void*)0));

 FUNC_5(VAR_2->func);
 FUNC_3(VAR_2->func);

 FUNC_4(VAR_2->func);

 return 0;
}
