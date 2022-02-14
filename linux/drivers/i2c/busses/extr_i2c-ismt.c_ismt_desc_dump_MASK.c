
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ismt_priv {size_t head; struct ismt_desc* hw; TYPE_1__* pci_dev; } ;
struct ismt_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,struct ismt_desc*) ;
 int FUNC_1 (struct device*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(struct ismt_priv *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pci_dev->dev;
 struct ismt_desc *VAR_2 = &VAR_0->hw[VAR_0->head];

 FUNC_1(VAR_1, "Dump of the descriptor struct:  0x%X\n", VAR_0->head);
 FUNC_0(VAR_1, VAR_2);
}
