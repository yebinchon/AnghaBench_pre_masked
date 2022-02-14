
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ is_msix; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;
struct irq_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int flags; int type; struct pci_dev* msi_dev; } ;
typedef TYPE_2__ msi_alloc_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msi_desc* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 struct pci_dev* FUNC_2 (struct device*) ;

int FUNC_3(struct irq_domain *VAR_3, struct device *VAR_4, int VAR_5,
      msi_alloc_info_t *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_2(VAR_4);
 struct msi_desc *VAR_8 = FUNC_0(VAR_7);

 FUNC_1(VAR_6, ((void*)0));
 VAR_6->msi_dev = VAR_7;
 if (VAR_8->msi_attrib.is_msix) {
  VAR_6->type = VAR_2;
 } else {
  VAR_6->type = VAR_1;
  VAR_6->flags |= VAR_0;
 }

 return 0;
}
