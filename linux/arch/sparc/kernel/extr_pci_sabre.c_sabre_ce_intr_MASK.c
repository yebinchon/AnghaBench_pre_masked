
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
 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_12, void *VAR_13)
{
 struct pci_pbm_info *VAR_14 = VAR_13;
 unsigned long VAR_15 = VAR_14->controller_regs + VAR_10;
 unsigned long VAR_16 = VAR_14->controller_regs + VAR_11;
 unsigned long VAR_17, VAR_18, VAR_19;
 int VAR_20;


 VAR_18 = FUNC_1(VAR_16);
 VAR_17 = FUNC_1(VAR_15);


 VAR_19 = VAR_17 &
  (VAR_6 | VAR_7 |
   VAR_8 | VAR_9);
 if (!VAR_19)
  return VAR_1;
 FUNC_2(VAR_19, VAR_15);


 FUNC_0("%s: Correctable Error, primary error type[%s]\n",
        VAR_14->name,
        ((VAR_19 & VAR_6) ?
  "DMA Read" :
  ((VAR_19 & VAR_7) ?
   "DMA Write" : "???")));




 FUNC_0("%s: syndrome[%02lx] bytemask[%04lx] dword_offset[%lx] "
        "was_block(%d)\n",
        VAR_14->name,
        (VAR_17 & VAR_4) >> 48UL,
        (VAR_17 & VAR_3) >> 32UL,
        (VAR_17 & VAR_5) >> 29UL,
        ((VAR_17 & VAR_2) ? 1 : 0));
 FUNC_0("%s: CE AFAR [%016lx]\n", VAR_14->name, VAR_18);
 FUNC_0("%s: CE Secondary errors [", VAR_14->name);
 VAR_20 = 0;
 if (VAR_17 & VAR_8) {
  VAR_20++;
  FUNC_0("(DMA Read)");
 }
 if (VAR_17 & VAR_9) {
  VAR_20++;
  FUNC_0("(DMA Write)");
 }
 if (!VAR_20)
  FUNC_0("(none)");
 FUNC_0("]\n");

 return VAR_0;
}
