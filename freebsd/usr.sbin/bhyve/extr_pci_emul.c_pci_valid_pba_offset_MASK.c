
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ pba_offset; scalar_t__ pba_size; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;



__attribute__((used)) static int
FUNC_0(struct pci_devinst *VAR_0, uint64_t VAR_1)
{

 if (VAR_1 < VAR_0->pi_msix.pba_offset)
  return (0);

 if (VAR_1 >= VAR_0->pi_msix.pba_offset + VAR_0->pi_msix.pba_size) {
  return (0);
 }

 return (1);
}
