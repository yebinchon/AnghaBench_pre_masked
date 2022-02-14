
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef int u16 ;
struct qib_devdata {TYPE_3__* pcidev; } ;
struct pci_dev {int vendor; int device; int revision; TYPE_2__* bus; } ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_5__ {scalar_t__ parent; } ;
struct TYPE_4__ {struct pci_dev* self; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct qib_devdata *VAR_1)
{
 struct pci_dev *VAR_2;
 u16 VAR_3;
 u32 VAR_4, VAR_5, VAR_6;

 if (!VAR_0)
  return;


 VAR_2 = VAR_1->pcidev->bus->self;
 if (VAR_2->bus->parent) {
  FUNC_3(VAR_1->pcidev, "Parent not root\n");
  return;
 }
 if (!FUNC_0(VAR_2))
  return;
 if (VAR_2->vendor != 0x8086)
  return;
 VAR_3 = VAR_2->device;
 if (VAR_3 >= 0x25e2 && VAR_3 <= 0x25fa) {

  if (VAR_2->revision <= 0xb2)
   VAR_5 = 1U << 10;
  else
   VAR_5 = 7U << 10;
  VAR_4 = (3U << 24) | (7U << 10);
 } else if (VAR_3 >= 0x65e2 && VAR_3 <= 0x65fa) {

  VAR_5 = 1U << 10;
  VAR_4 = (3U << 24) | (7U << 10);
 } else if (VAR_3 >= 0x4021 && VAR_3 <= 0x402e) {

  VAR_5 = 7U << 10;
  VAR_4 = 7U << 10;
 } else if (VAR_3 >= 0x3604 && VAR_3 <= 0x360a) {

  VAR_5 = 7U << 10;
  VAR_4 = (3U << 24) | (7U << 10);
 } else {

  return;
 }
 FUNC_1(VAR_2, 0x48, &VAR_6);
 VAR_6 &= ~VAR_4;
 VAR_6 |= VAR_5;
 FUNC_2(VAR_2, 0x48, VAR_6);
}
