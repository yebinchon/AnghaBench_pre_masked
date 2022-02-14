
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {TYPE_1__* pi_bar; struct pci_devemu* pi_d; } ;
struct pci_devemu {scalar_t__ (* pe_barread ) (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int) ;int (* pe_barwrite ) (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;} ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ addr; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_4 (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int) ;
 int FUNC_5 (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct vmctx*,int,struct pci_devinst*,int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_7(struct vmctx *VAR_4, int VAR_5, int VAR_6, uint64_t VAR_7,
       int VAR_8, uint64_t *VAR_9, void *VAR_10, long VAR_11)
{
 struct pci_devinst *VAR_12 = VAR_10;
 struct pci_devemu *VAR_13 = VAR_12->pi_d;
 uint64_t VAR_14;
 int VAR_15 = (int) VAR_11;

 FUNC_0(VAR_15 <= VAR_3);
 FUNC_0(VAR_12->pi_bar[VAR_15].type == VAR_1 ||
        VAR_12->pi_bar[VAR_15].type == VAR_2);
 FUNC_0(VAR_7 >= VAR_12->pi_bar[VAR_15].addr &&
        VAR_7 + VAR_8 <= VAR_12->pi_bar[VAR_15].addr + VAR_12->pi_bar[VAR_15].size);

 VAR_14 = VAR_7 - VAR_12->pi_bar[VAR_15].addr;

 if (VAR_6 == VAR_0) {
  if (VAR_8 == 8) {
   (*VAR_13->pe_barwrite)(VAR_4, VAR_5, VAR_12, VAR_15, VAR_14,
        4, *VAR_9 & 0xffffffff);
   (*VAR_13->pe_barwrite)(VAR_4, VAR_5, VAR_12, VAR_15, VAR_14 + 4,
        4, *VAR_9 >> 32);
  } else {
   (*VAR_13->pe_barwrite)(VAR_4, VAR_5, VAR_12, VAR_15, VAR_14,
        VAR_8, *VAR_9);
  }
 } else {
  if (VAR_8 == 8) {
   *VAR_9 = (*VAR_13->pe_barread)(VAR_4, VAR_5, VAR_12, VAR_15,
       VAR_14, 4);
   *VAR_9 |= (*VAR_13->pe_barread)(VAR_4, VAR_5, VAR_12, VAR_15,
        VAR_14 + 4, 4) << 32;
  } else {
   *VAR_9 = (*VAR_13->pe_barread)(VAR_4, VAR_5, VAR_12, VAR_15,
       VAR_14, VAR_8);
  }
 }

 return (0);
}
