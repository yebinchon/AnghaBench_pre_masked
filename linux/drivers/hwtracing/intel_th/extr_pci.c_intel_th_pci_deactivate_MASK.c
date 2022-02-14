
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct intel_th {int dev; } ;


 int FUNC_0 (struct intel_th*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct intel_th *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_4(VAR_3->dev);
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_3, VAR_2))
  return;

 VAR_6 = FUNC_2(VAR_4, VAR_1, &VAR_5);
 if (!VAR_6) {
  VAR_5 |= VAR_0;
  VAR_6 = FUNC_3(VAR_4, VAR_1, VAR_5);
 }

 if (VAR_6)
  FUNC_1(&VAR_4->dev, "failed to read NPKDSC register\n");
}
