
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int device; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static unsigned int
FUNC_1(struct icp_qat_fw_loader_handle *VAR_3)
{
 switch (VAR_3->pci_dev->device) {
 case 128:
  return VAR_0;
 case 129:
  return VAR_2;
 case 130:
  return VAR_1;
 default:
  FUNC_0("QAT: unsupported device 0x%x\n",
         VAR_3->pci_dev->device);
  return 0;
 }
}
