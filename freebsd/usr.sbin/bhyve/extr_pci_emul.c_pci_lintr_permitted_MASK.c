
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct pci_devinst {TYPE_2__ pi_msix; TYPE_1__ pi_msi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_devinst*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct pci_devinst *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 return (!(VAR_2->pi_msi.enabled || VAR_2->pi_msix.enabled ||
  (VAR_3 & VAR_0)));
}
