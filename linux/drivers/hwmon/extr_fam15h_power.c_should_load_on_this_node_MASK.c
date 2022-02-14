
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int devfn; int bus; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct pci_dev *VAR_1)
{
 u32 VAR_2;

 FUNC_3(VAR_1->bus, FUNC_1(FUNC_2(VAR_1->devfn), 3),
      VAR_0, &VAR_2);
 if ((VAR_2 & FUNC_0(29)) && ((VAR_2 >> 30) & 3))
  return 0;

 return 1;
}
