
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct pci_dev {TYPE_1__* bus; int device; int vendor; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (struct device*) ;
 size_t FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct pci_dev*,size_t) ;
 int FUNC_7 (struct pci_dev*,int ,size_t*) ;
 int FUNC_8 (struct pci_dev*,char*,scalar_t__,int ,...) ;
 struct pci_dev* FUNC_9 (struct device*) ;

__attribute__((used)) static u16 FUNC_10(struct device *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_9(VAR_4);
 u16 VAR_6, VAR_7, VAR_8;


 VAR_6 = FUNC_4(VAR_4);


 if (!FUNC_3(VAR_4))
  return VAR_6;

 VAR_7 = VAR_1[VAR_6];

 FUNC_7(VAR_5, VAR_0, &VAR_8);

 if (VAR_7 == VAR_8)
  return VAR_7;
 if (VAR_7 == VAR_6) {
  if (!VAR_3[VAR_8]) {
   VAR_3[VAR_8] =
    VAR_3[VAR_6];
   FUNC_5(VAR_2[VAR_8].data,
          VAR_2[VAR_6].data,
          sizeof(VAR_2[VAR_8].data));
  }

  return VAR_8;
 }

 FUNC_8(VAR_5, "Using IVRS reported alias %02x:%02x.%d "
  "for device [%04x:%04x], kernel reported alias "
  "%02x:%02x.%d\n", FUNC_0(VAR_7), FUNC_2(VAR_7),
  FUNC_1(VAR_7), VAR_5->vendor, VAR_5->device,
  FUNC_0(VAR_8), FUNC_2(VAR_8),
  FUNC_1(VAR_8));





 if (VAR_8 == VAR_6 &&
     FUNC_0(VAR_7) == VAR_5->bus->number) {
  FUNC_6(VAR_5, VAR_7 & 0xff);
  FUNC_8(VAR_5, "Added PCI DMA alias %02x.%d\n",
   FUNC_2(VAR_7), FUNC_1(VAR_7));
 }

 return VAR_7;
}
