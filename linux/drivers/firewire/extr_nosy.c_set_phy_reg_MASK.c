
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcilynx {TYPE_1__* pci_device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct pcilynx*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct pcilynx *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 > 15) {
  FUNC_2(&VAR_2->pci_device->dev,
   "PHY register address %d out of range\n", VAR_3);
  return -1;
 }
 if (VAR_4 > 0xff) {
  FUNC_2(&VAR_2->pci_device->dev,
   "PHY register value %d out of range\n", VAR_4);
  return -1;
 }
 FUNC_3(VAR_2, VAR_0, VAR_1 |
    FUNC_0(VAR_3) | FUNC_1(VAR_4));

 return 0;
}
