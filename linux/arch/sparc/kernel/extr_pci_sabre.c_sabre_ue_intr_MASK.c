
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long controller_regs; int name; } ;
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
 int VAR_13 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct pci_pbm_info*,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_14, void *VAR_15)
{
 struct pci_pbm_info *VAR_16 = VAR_15;
 unsigned long VAR_17 = VAR_16->controller_regs + VAR_12;
 unsigned long VAR_18 = VAR_16->controller_regs + VAR_11;
 unsigned long VAR_19, VAR_20, VAR_21;
 int VAR_22;


 VAR_20 = FUNC_2(VAR_18);
 VAR_19 = FUNC_2(VAR_17);


 VAR_21 = VAR_19 &
  (VAR_5 | VAR_7 |
   VAR_8 | VAR_10 |
   VAR_9 | VAR_6);
 if (!VAR_21)
  return VAR_1;
 FUNC_3(VAR_21, VAR_17);


 FUNC_0("%s: Uncorrectable Error, primary error type[%s%s]\n",
        VAR_16->name,
        ((VAR_21 & VAR_5) ?
  "DMA Read" :
  ((VAR_21 & VAR_7) ?
   "DMA Write" : "???")),
        ((VAR_21 & VAR_6) ?
  ":Translation Error" : ""));
 FUNC_0("%s: bytemask[%04lx] dword_offset[%lx] was_block(%d)\n",
        VAR_16->name,
        (VAR_19 & VAR_3) >> 32UL,
        (VAR_19 & VAR_4) >> 29UL,
        ((VAR_19 & VAR_2) ? 1 : 0));
 FUNC_0("%s: UE AFAR [%016lx]\n", VAR_16->name, VAR_20);
 FUNC_0("%s: UE Secondary errors [", VAR_16->name);
 VAR_22 = 0;
 if (VAR_19 & VAR_8) {
  VAR_22++;
  FUNC_0("(DMA Read)");
 }
 if (VAR_19 & VAR_10) {
  VAR_22++;
  FUNC_0("(DMA Write)");
 }
 if (VAR_19 & VAR_9) {
  VAR_22++;
  FUNC_0("(Translation Error)");
 }
 if (!VAR_22)
  FUNC_0("(none)");
 FUNC_0("]\n");


 FUNC_1(VAR_16, VAR_19, VAR_20, VAR_13);

 return VAR_0;
}
