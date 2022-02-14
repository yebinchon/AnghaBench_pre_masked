
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct adapter_info {int ch_num; TYPE_1__* pch_data; } ;
struct TYPE_2__ {int * pch_base_address; int pch_adapter; } ;


 int FUNC_0 (int ,struct adapter_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter_info*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct adapter_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 int VAR_1;
 struct adapter_info *VAR_2 = FUNC_5(VAR_0);

 FUNC_0(VAR_0->irq, VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_2->ch_num; VAR_1++) {
  FUNC_3(&VAR_2->pch_data[VAR_1]);
  FUNC_1(&VAR_2->pch_data[VAR_1].pch_adapter);
 }

 if (VAR_2->pch_data[0].pch_base_address)
  FUNC_6(VAR_0, VAR_2->pch_data[0].pch_base_address);

 for (VAR_1 = 0; VAR_1 < VAR_2->ch_num; VAR_1++)
  VAR_2->pch_data[VAR_1].pch_base_address = ((void*)0);

 FUNC_7(VAR_0);

 FUNC_4(VAR_0);
 FUNC_2(VAR_2);
}
