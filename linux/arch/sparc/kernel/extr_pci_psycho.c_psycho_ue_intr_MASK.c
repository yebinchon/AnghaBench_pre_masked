
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long controller_regs; struct pci_pbm_info* sibling; int name; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct pci_pbm_info*,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_15, void *VAR_16)
{
 struct pci_pbm_info *VAR_17 = VAR_16;
 unsigned long VAR_18 = VAR_17->controller_regs + VAR_13;
 unsigned long VAR_19 = VAR_17->controller_regs + VAR_12;
 unsigned long VAR_20, VAR_21, VAR_22;
 int VAR_23;


 VAR_21 = FUNC_2(VAR_19);
 VAR_20 = FUNC_2(VAR_18);


 VAR_22 = VAR_20 &
  (VAR_8 | VAR_6 | VAR_7 |
   VAR_11 | VAR_9 | VAR_10);
 if (!VAR_22)
  return VAR_1;
 FUNC_3(VAR_22, VAR_18);


 FUNC_0("%s: Uncorrectable Error, primary error type[%s]\n",
        VAR_17->name,
        (((VAR_22 & VAR_8) ?
   "PIO" :
   ((VAR_22 & VAR_6) ?
    "DMA Read" :
    ((VAR_22 & VAR_7) ?
     "DMA Write" : "???")))));
 FUNC_0("%s: bytemask[%04lx] dword_offset[%lx] UPA_MID[%02lx] was_block(%d)\n",
        VAR_17->name,
        (VAR_20 & VAR_3) >> 32UL,
        (VAR_20 & VAR_4) >> 29UL,
        (VAR_20 & VAR_5) >> 24UL,
        ((VAR_20 & VAR_2) ? 1 : 0));
 FUNC_0("%s: UE AFAR [%016lx]\n", VAR_17->name, VAR_21);
 FUNC_0("%s: UE Secondary errors [", VAR_17->name);
 VAR_23 = 0;
 if (VAR_20 & VAR_11) {
  VAR_23++;
  FUNC_0("(PIO)");
 }
 if (VAR_20 & VAR_9) {
  VAR_23++;
  FUNC_0("(DMA Read)");
 }
 if (VAR_20 & VAR_10) {
  VAR_23++;
  FUNC_0("(DMA Write)");
 }
 if (!VAR_23)
  FUNC_0("(none)");
 FUNC_0("]\n");


 FUNC_1(VAR_17, VAR_20, VAR_21, VAR_14);
 if (VAR_17->sibling)
  FUNC_1(VAR_17->sibling, VAR_20, VAR_21, VAR_14);

 return VAR_0;
}
