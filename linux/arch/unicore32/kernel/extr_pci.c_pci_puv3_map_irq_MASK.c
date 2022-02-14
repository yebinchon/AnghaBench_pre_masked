
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct pci_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 if (VAR_4->bus->number == 0) {
 }
 return -1;
}
