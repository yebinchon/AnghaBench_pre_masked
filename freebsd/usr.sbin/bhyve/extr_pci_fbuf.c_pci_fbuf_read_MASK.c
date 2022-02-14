
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vmctx {int dummy; } ;
struct pci_fbuf_softc {int memregs; } ;
struct pci_devinst {struct pci_fbuf_softc* pi_arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;

uint64_t
FUNC_3(struct vmctx *VAR_2, int VAR_3, struct pci_devinst *VAR_4,
       int VAR_5, uint64_t VAR_6, int VAR_7)
{
 struct pci_fbuf_softc *VAR_8;
 uint8_t *VAR_9;
 uint64_t VAR_10;

 FUNC_1(VAR_5 == 0);

 VAR_8 = VAR_4->pi_arg;


 if (VAR_6 + VAR_7 > VAR_1) {
  FUNC_2("fbuf: read too large, offset %ld size %d\n",
         VAR_6, VAR_7);
  return (0);
 }

 VAR_9 = (uint8_t *)&VAR_8->memregs + VAR_6;
 VAR_10 = 0;
 switch (VAR_7) {
 case 1:
  VAR_10 = *VAR_9;
  break;
 case 2:
  VAR_10 = *(uint16_t *)VAR_9;
  break;
 case 4:
  VAR_10 = *(uint32_t *)VAR_9;
  break;
 case 8:
  VAR_10 = *(uint64_t *)VAR_9;
  break;
 default:
  FUNC_2("fbuf: read unknown size %d\n", VAR_7);
  break;
 }

 FUNC_0(VAR_0,
     ("fbuf rd: offset 0x%lx, size: %d, value: 0x%lx\n",
      VAR_6, VAR_7, VAR_10));

 return (VAR_10);
}
