
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct amd_mp2_dev {int dummy; } ;
struct TYPE_2__ {int driver; } ;


 TYPE_1__ VAR_0 ;
 struct device* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

struct amd_mp2_dev *FUNC_3(void)
{
 struct device *VAR_1;
 struct pci_dev *VAR_2;

 VAR_1 = FUNC_0(&VAR_0.driver, ((void*)0));
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 return (struct amd_mp2_dev *)FUNC_1(VAR_2);
}
