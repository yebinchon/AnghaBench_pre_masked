
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct mem_ctl_info *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_2(VAR_6->pdev);
 u32 VAR_8;

 FUNC_0(VAR_7, VAR_2,
         &VAR_8);

 VAR_8 &= (VAR_4 | VAR_3
  | VAR_5);

 if (VAR_8) {
  if (VAR_8 & VAR_5)
   FUNC_1(VAR_7, VAR_0,
            VAR_1);
  FUNC_1(VAR_7, VAR_2, VAR_8);
 }

 return VAR_8;
}
