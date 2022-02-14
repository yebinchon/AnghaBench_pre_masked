
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct pci_bus {int number; struct alchemy_pci_context* sysdata; } ;
struct alchemy_pci_context {scalar_t__ (* board_pci_idsel ) (unsigned int,int) ;unsigned long last_elo0; unsigned long last_elo1; scalar_t__ regs; TYPE_1__* pci_cfg_vm; int wired_entry; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int FUNC_0 (char*,unsigned int,unsigned long,...) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned long,scalar_t__) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int ,unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_9 (unsigned int,int) ;
 scalar_t__ FUNC_10 (unsigned int,int) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(unsigned char VAR_5, struct pci_bus *VAR_6,
    unsigned int VAR_7, unsigned char VAR_8, u32 *VAR_9)
{
 struct alchemy_pci_context *VAR_10 = VAR_6->sysdata;
 unsigned int VAR_11 = FUNC_2(VAR_7);
 unsigned int VAR_12 = FUNC_1(VAR_7);
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = VAR_1;

 if (VAR_11 > 19) {
  *VAR_9 = 0xffffffff;
  return -1;
 }

 FUNC_7(VAR_16);
 VAR_19 = FUNC_4(VAR_10->regs + VAR_3) & 0x0000ffff;
 VAR_19 |= FUNC_3(0x2000);
 FUNC_5(VAR_19, VAR_10->regs + VAR_3);
 FUNC_11();




 if (VAR_10->board_pci_idsel(VAR_11, 1) == 0) {
  *VAR_9 = 0xffffffff;
  FUNC_6(VAR_16);
  return -1;
 }


 if (VAR_6->number == 0)
  VAR_15 = (1 << VAR_11) << 11;
 else
  VAR_15 = 0x80000000 | (VAR_6->number << 16) | (VAR_11 << 11);


 VAR_13 = (VAR_12 << 8) | (VAR_8 & ~0x3);

 VAR_13 |= VAR_15 & ~VAR_0;


 VAR_15 = VAR_15 & VAR_0;




 VAR_17 = (6 << 26) | (VAR_15 >> 6) | (2 << 3) | 7;
 VAR_18 = (6 << 26) | (VAR_15 >> 6) | (0x1000 >> 6) | (2 << 3) | 7;
 if ((VAR_17 != VAR_10->last_elo0) || (VAR_18 != VAR_10->last_elo1)) {
  FUNC_8(VAR_10->wired_entry, VAR_17, VAR_18,
    (unsigned long)VAR_10->pci_cfg_vm->addr, VAR_4);
  VAR_10->last_elo0 = VAR_17;
  VAR_10->last_elo1 = VAR_18;
 }

 if (VAR_5 == VAR_2)
  FUNC_5(*VAR_9, VAR_10->pci_cfg_vm->addr + VAR_13);
 else
  *VAR_9 = FUNC_4(VAR_10->pci_cfg_vm->addr + VAR_13);
 FUNC_11();

 FUNC_0("alchemy-pci: cfg access %d bus %u dev %u at %x dat %x conf %lx\n",
     VAR_5, VAR_6->number, VAR_11, VAR_8, *VAR_9, VAR_13);


 VAR_14 = FUNC_4(VAR_10->regs + VAR_3);
 if (VAR_14 & (1 << 29)) {
  *VAR_9 = 0xffffffff;
  VAR_20 = -1;
  FUNC_0("alchemy-pci: master abort on cfg access %d bus %d dev %d\n",
      VAR_5, VAR_6->number, VAR_11);
 } else if ((VAR_14 >> 28) & 0xf) {
  FUNC_0("alchemy-pci: PCI ERR detected: dev %d, status %lx\n",
      VAR_11, (VAR_14 >> 28) & 0xf);


  FUNC_5(VAR_14 & 0xf000ffff, VAR_10->regs + VAR_3);

  *VAR_9 = 0xffffffff;
  VAR_20 = -1;
 }


 (void)VAR_10->board_pci_idsel(VAR_11, 0);

 FUNC_6(VAR_16);
 return VAR_20;
}
