
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {TYPE_1__* pi_bar; struct pci_devemu* pi_d; } ;
struct pci_devemu {int (* pe_barwrite ) (struct vmctx*,int,struct pci_devinst*,int,int,int,int ) ;int (* pe_barread ) (struct vmctx*,int,struct pci_devinst*,int,int,int) ;} ;
struct TYPE_2__ {scalar_t__ type; int addr; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmctx*,int,struct pci_devinst*,int,int,int) ;
 int FUNC_1 (struct vmctx*,int,struct pci_devinst*,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
      uint32_t *VAR_7, void *VAR_8)
{
 struct pci_devinst *VAR_9 = VAR_8;
 struct pci_devemu *VAR_10 = VAR_9->pi_d;
 uint64_t VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 <= VAR_1; VAR_12++) {
  if (VAR_9->pi_bar[VAR_12].type == VAR_0 &&
      VAR_5 >= VAR_9->pi_bar[VAR_12].addr &&
      VAR_5 + VAR_6 <= VAR_9->pi_bar[VAR_12].addr + VAR_9->pi_bar[VAR_12].size) {
   VAR_11 = VAR_5 - VAR_9->pi_bar[VAR_12].addr;
   if (VAR_4)
    *VAR_7 = (*VAR_10->pe_barread)(VAR_2, VAR_3, VAR_9, VAR_12,
        VAR_11, VAR_6);
   else
    (*VAR_10->pe_barwrite)(VAR_2, VAR_3, VAR_9, VAR_12, VAR_11,
         VAR_6, *VAR_7);
   return (0);
  }
 }
 return (-1);
}
