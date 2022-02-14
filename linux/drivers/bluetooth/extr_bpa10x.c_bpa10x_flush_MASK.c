
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct bpa10x_data {int tx_anchor; } ;


 int FUNC_0 (char*,int ) ;
 struct bpa10x_data* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_0)
{
 struct bpa10x_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("%s", VAR_0->name);

 FUNC_2(&VAR_1->tx_anchor);

 return 0;
}
