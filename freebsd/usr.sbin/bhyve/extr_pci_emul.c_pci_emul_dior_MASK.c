
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct pci_emul_dsoftc {int* ioregs; int** memregs; } ;
struct pci_devinst {struct pci_emul_dsoftc* pi_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static uint64_t
FUNC_1(struct vmctx *VAR_2, int VAR_3, struct pci_devinst *VAR_4, int VAR_5,
       uint64_t VAR_6, int VAR_7)
{
 struct pci_emul_dsoftc *VAR_8 = VAR_4->pi_arg;
 uint32_t VAR_9;
 int VAR_10;

 if (VAR_5 == 0) {
  if (VAR_6 + VAR_7 > VAR_0) {
   FUNC_0("dior: ior too large, offset %ld size %d\n",
          VAR_6, VAR_7);
   return (0);
  }

  VAR_9 = 0;
  if (VAR_7 == 1) {
   VAR_9 = VAR_8->ioregs[VAR_6];
  } else if (VAR_7 == 2) {
   VAR_9 = *(uint16_t *) &VAR_8->ioregs[VAR_6];
  } else if (VAR_7 == 4) {
   VAR_9 = *(uint32_t *) &VAR_8->ioregs[VAR_6];
  } else {
   FUNC_0("dior: ior unknown size %d\n", VAR_7);
  }
 }

 if (VAR_5 == 1 || VAR_5 == 2) {
  if (VAR_6 + VAR_7 > VAR_1) {
   FUNC_0("dior: memr too large, offset %ld size %d\n",
          VAR_6, VAR_7);
   return (0);
  }

  VAR_10 = VAR_5 - 1;

  if (VAR_7 == 1) {
   VAR_9 = VAR_8->memregs[VAR_10][VAR_6];
  } else if (VAR_7 == 2) {
   VAR_9 = *(uint16_t *) &VAR_8->memregs[VAR_10][VAR_6];
  } else if (VAR_7 == 4) {
   VAR_9 = *(uint32_t *) &VAR_8->memregs[VAR_10][VAR_6];
  } else if (VAR_7 == 8) {
   VAR_9 = *(uint64_t *) &VAR_8->memregs[VAR_10][VAR_6];
  } else {
   FUNC_0("dior: ior unknown size %d\n", VAR_7);
  }
 }


 if (VAR_5 > 2 || VAR_5 < 0) {
  FUNC_0("dior: unknown bar idx %d\n", VAR_5);
  return (0);
 }

 return (VAR_9);
}
