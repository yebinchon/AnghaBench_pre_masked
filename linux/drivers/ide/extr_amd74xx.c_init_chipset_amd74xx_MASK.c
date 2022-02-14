
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_5)
{
 u8 VAR_6 = 0, VAR_7 = FUNC_2(VAR_5);





 if (VAR_5->vendor == VAR_4 &&
     VAR_5->device == VAR_1)
  ;
 else if (VAR_5->vendor == VAR_4 &&
   VAR_5->device == VAR_2)
  FUNC_0(VAR_5);
 else
  FUNC_1(VAR_5);





 FUNC_3(VAR_5, VAR_0 + VAR_7, &VAR_6);



 if (VAR_5->vendor == VAR_4 &&
     VAR_5->device == VAR_3)
  VAR_6 &= 0x0f;
 else
  VAR_6 |= 0xf0;
 FUNC_4(VAR_5, VAR_0 + VAR_7, VAR_6);

 return 0;
}
