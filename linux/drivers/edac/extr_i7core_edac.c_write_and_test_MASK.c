
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const u32 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int const,scalar_t__ const) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int const,scalar_t__ const,scalar_t__ const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pci_dev*,int const,scalar_t__ const*) ;
 int FUNC_6 (struct pci_dev*,int const,scalar_t__ const) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_2, const int VAR_3, const u32 VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 FUNC_2(0, "setting pci %02x:%02x.%x reg=%02x value=%08x\n",
   VAR_2->bus->number, FUNC_1(VAR_2->devfn), FUNC_0(VAR_2->devfn),
   VAR_3, VAR_4);

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  if (VAR_6)
   FUNC_4(100);
  FUNC_6(VAR_2, VAR_3, VAR_4);
  FUNC_5(VAR_2, VAR_3, &VAR_5);

  if (VAR_5 == VAR_4)
   return 0;
 }

 FUNC_3(VAR_1, "Error during set pci %02x:%02x.%x reg=%02x "
  "write=%08x. Read=%08x\n",
  VAR_2->bus->number, FUNC_1(VAR_2->devfn), FUNC_0(VAR_2->devfn),
  VAR_3, VAR_4, VAR_5);

 return -VAR_0;
}
