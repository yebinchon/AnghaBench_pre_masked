
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static u16 FUNC_3(struct pci_dev *VAR_5, int VAR_6)
{
 int VAR_7;
 u16 VAR_8;

 VAR_7 = VAR_6 ? VAR_0 : VAR_1;
 FUNC_1(VAR_5, VAR_7, &VAR_8);






 if (VAR_8 == 0xFFFF) {
  u32 VAR_9;

  FUNC_0(VAR_5, 0, &VAR_9);

  if (VAR_9 == 0xFFFFFFFF)
   return 0;
 }

 VAR_8 &= VAR_2 | VAR_4 |
  VAR_3;

 if (VAR_8)

  FUNC_2(VAR_5, VAR_7, VAR_8);

 return VAR_8;
}
