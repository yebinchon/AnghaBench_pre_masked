
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_message {scalar_t__ event; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 struct pci_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pci_dev*,struct pm_message) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);
 struct pm_message VAR_2;

 VAR_2.event = 0;

 return FUNC_1(VAR_1, VAR_2);
}
