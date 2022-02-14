
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta2x11_mapping {int dummy; } ;
struct sta2x11_instance {struct sta2x11_mapping* map; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct sta2x11_instance* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static struct sta2x11_mapping *FUNC_2(struct pci_dev *VAR_0)
{
 struct sta2x11_instance *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_0);
 return VAR_1->map + VAR_2;
}
