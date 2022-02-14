
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_pbm_info {int name; scalar_t__ controller_regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct pci_pbm_info*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct pci_pbm_info *VAR_7 = VAR_6;
 u64 VAR_8;

 VAR_8 = FUNC_2(VAR_7->controller_regs + VAR_4);
 FUNC_3(VAR_8 & ~(VAR_3),
     VAR_7->controller_regs + VAR_4);

 if (!(VAR_8 & VAR_0)) {
  FUNC_0("%s: Unexpected Safari/JBUS error interrupt, errlog[%016llx]\n",
         VAR_7->name, VAR_8);

  return VAR_1;
 }

 FUNC_0("%s: Safari/JBUS interrupt, UNMAPPED error, interrogating IOMMUs.\n",
        VAR_7->name);
 FUNC_1(VAR_7, VAR_2);

 return VAR_1;
}
