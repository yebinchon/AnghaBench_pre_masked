
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int vendor; } ;
struct ib_uverbs_device {TYPE_1__* ib_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ dma_device; } ;


 int VAR_0 ;
 struct ib_uverbs_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct ib_uverbs_device *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4 || !VAR_4->ib_dev->dma_device)
  return -VAR_0;

 return FUNC_1(VAR_3, "0x%04x\n",
     ((struct pci_dev *)VAR_4->ib_dev->dma_device)->vendor);
}
