
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int,struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct pci_dev *VAR_3 = ((void*)0);
 u32 VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_0, 0x2083, VAR_3);
 if (!VAR_3)
  goto out;

 FUNC_3(VAR_3, VAR_1, &VAR_4);
 VAR_4 &= VAR_2;
out:
 FUNC_1(VAR_3);
 return FUNC_0(VAR_4);
}
