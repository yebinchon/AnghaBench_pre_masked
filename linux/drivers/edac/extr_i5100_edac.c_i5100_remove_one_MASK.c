
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {struct pci_dev* einj; struct pci_dev* ch1mm; struct pci_dev* ch0mm; int i5100_scrubbing; scalar_t__ scrub_enable; int debugfs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct mem_ctl_info* FUNC_2 (int *) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mem_ctl_info *VAR_1;
 struct i5100_priv *VAR_2;

 VAR_1 = FUNC_2(&VAR_0->dev);

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->pvt_info;

 FUNC_1(VAR_2->debugfs);

 VAR_2->scrub_enable = 0;
 FUNC_0(&(VAR_2->i5100_scrubbing));

 FUNC_5(VAR_0);
 FUNC_5(VAR_2->ch0mm);
 FUNC_5(VAR_2->ch1mm);
 FUNC_5(VAR_2->einj);
 FUNC_4(VAR_2->ch0mm);
 FUNC_4(VAR_2->ch1mm);
 FUNC_4(VAR_2->einj);

 FUNC_3(VAR_1);
}
