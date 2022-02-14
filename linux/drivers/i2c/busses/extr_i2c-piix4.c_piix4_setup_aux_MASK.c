
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned short,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,unsigned short) ;
 int FUNC_3 (int *,char*,unsigned short) ;
 int FUNC_4 (struct pci_dev*,unsigned short,unsigned short*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (unsigned short,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_4,
      const struct pci_device_id *VAR_5,
      unsigned short VAR_6)
{



 unsigned short VAR_7;


 FUNC_4(VAR_4, VAR_6, &VAR_7);
 if ((VAR_7 & 1) == 0) {
  FUNC_1(&VAR_4->dev,
   "Auxiliary SMBus controller not enabled\n");
  return -VAR_1;
 }

 VAR_7 &= 0xfff0;
 if (VAR_7 == 0) {
  FUNC_1(&VAR_4->dev,
   "Auxiliary SMBus base address uninitialized\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_7, VAR_2, VAR_3.name))
  return -VAR_1;

 if (!FUNC_5(VAR_7, VAR_2, VAR_3.name)) {
  FUNC_2(&VAR_4->dev, "Auxiliary SMBus region 0x%x "
   "already in use!\n", VAR_7);
  return -VAR_0;
 }

 FUNC_3(&VAR_4->dev,
   "Auxiliary SMBus Host Controller at 0x%x\n",
   VAR_7);

 return VAR_7;
}
