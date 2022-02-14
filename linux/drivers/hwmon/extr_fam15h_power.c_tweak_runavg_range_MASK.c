
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int devfn; int bus; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 u32 VAR_3;





 if (!FUNC_4(VAR_1, VAR_2))
  return;

 FUNC_2(VAR_2->bus,
  FUNC_0(FUNC_1(VAR_2->devfn), 5),
  VAR_0, &VAR_3);
 if ((VAR_3 & 0xf) != 0xe)
  return;

 VAR_3 &= ~0xf;
 VAR_3 |= 0x9;
 FUNC_3(VAR_2->bus,
  FUNC_0(FUNC_1(VAR_2->devfn), 5),
  VAR_0, VAR_3);
}
