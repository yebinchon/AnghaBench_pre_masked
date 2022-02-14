
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
 int FUNC_0 (struct pci_devinst*,int) ;
 scalar_t__ FUNC_1 (struct pci_devinst*) ;
 int FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static void
FUNC_4(struct vmctx *VAR_2, int VAR_3, struct pci_devinst *VAR_4, int VAR_5,
       uint64_t VAR_6, int VAR_7, uint64_t VAR_8)
{
 int VAR_9;
 struct pci_emul_dsoftc *VAR_10 = VAR_4->pi_arg;

 if (VAR_5 == 0) {
  if (VAR_6 + VAR_7 > VAR_0) {
   FUNC_3("diow: iow too large, offset %ld size %d\n",
          VAR_6, VAR_7);
   return;
  }

  if (VAR_7 == 1) {
   VAR_10->ioregs[VAR_6] = VAR_8 & 0xff;
  } else if (VAR_7 == 2) {
   *(uint16_t *)&VAR_10->ioregs[VAR_6] = VAR_8 & 0xffff;
  } else if (VAR_7 == 4) {
   *(uint32_t *)&VAR_10->ioregs[VAR_6] = VAR_8;
  } else {
   FUNC_3("diow: iow unknown size %d\n", VAR_7);
  }




  if (VAR_6 == 4 && VAR_7 == 4 && FUNC_1(VAR_4))
   FUNC_0(VAR_4, VAR_8 % FUNC_2(VAR_4));

  if (VAR_8 == 0xabcdef) {
   for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_4); VAR_9++)
    FUNC_0(VAR_4, VAR_9);
  }
 }

 if (VAR_5 == 1 || VAR_5 == 2) {
  if (VAR_6 + VAR_7 > VAR_1) {
   FUNC_3("diow: memw too large, offset %ld size %d\n",
          VAR_6, VAR_7);
   return;
  }

  VAR_9 = VAR_5 - 1;

  if (VAR_7 == 1) {
   VAR_10->memregs[VAR_9][VAR_6] = VAR_8;
  } else if (VAR_7 == 2) {
   *(uint16_t *)&VAR_10->memregs[VAR_9][VAR_6] = VAR_8;
  } else if (VAR_7 == 4) {
   *(uint32_t *)&VAR_10->memregs[VAR_9][VAR_6] = VAR_8;
  } else if (VAR_7 == 8) {
   *(uint64_t *)&VAR_10->memregs[VAR_9][VAR_6] = VAR_8;
  } else {
   FUNC_3("diow: memw unknown size %d\n", VAR_7);
  }




 }

 if (VAR_5 > 2 || VAR_5 < 0) {
  FUNC_3("diow: unknown bar idx %d\n", VAR_5);
 }
}
