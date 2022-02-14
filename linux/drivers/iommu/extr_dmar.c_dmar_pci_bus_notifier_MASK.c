
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ is_virtfn; } ;
struct notifier_block {int dummy; } ;
struct dmar_pci_notify_info {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dmar_pci_notify_info* FUNC_0 (struct pci_dev*,unsigned long) ;
 int FUNC_1 (struct dmar_pci_notify_info*) ;
 int VAR_4 ;
 int FUNC_2 (struct dmar_pci_notify_info*) ;
 int FUNC_3 (struct dmar_pci_notify_info*) ;
 int FUNC_4 (int *) ;
 struct pci_dev* FUNC_5 (void*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_5,
     unsigned long VAR_6, void *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_5(VAR_7);
 struct dmar_pci_notify_info *VAR_9;




 if (VAR_8->is_virtfn)
  return VAR_2;
 if (VAR_6 != VAR_0 &&
     VAR_6 != VAR_1)
  return VAR_2;

 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if (!VAR_9)
  return VAR_2;

 FUNC_4(&VAR_4);
 if (VAR_6 == VAR_0)
  FUNC_2(VAR_9);
 else if (VAR_6 == VAR_1)
  FUNC_3(VAR_9);
 FUNC_6(&VAR_4);

 FUNC_1(VAR_9);

 return VAR_3;
}
