
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int** VAR_1 ;

int FUNC_1(const struct pci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2->bus->number < 2 && FUNC_0(VAR_2->devfn) < 12)
  VAR_5 = VAR_1[VAR_2->bus->number][FUNC_0(VAR_2->devfn)];

 return VAR_5 + VAR_0 + 4;
}
