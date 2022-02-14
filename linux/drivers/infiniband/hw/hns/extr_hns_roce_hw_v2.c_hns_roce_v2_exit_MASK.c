
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_priv {int tsq; int tpq; } ;
struct hns_roce_dev {TYPE_1__* pci_dev; struct hns_roce_v2_priv* priv; } ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (struct hns_roce_dev*,int *) ;
 int FUNC_1 (struct hns_roce_dev*) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_v2_priv *VAR_1 = VAR_0->priv;

 if (VAR_0->pci_dev->revision == 0x21)
  FUNC_1(VAR_0);

 FUNC_0(VAR_0, &VAR_1->tpq);
 FUNC_0(VAR_0, &VAR_1->tsq);
}
