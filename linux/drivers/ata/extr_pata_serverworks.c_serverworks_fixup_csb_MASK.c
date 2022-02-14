
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ revision; int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 int FUNC_6 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_4)
{
 u8 VAR_5;


 if (!(FUNC_0(VAR_4->devfn) & 1)) {
  struct pci_dev * VAR_6 = ((void*)0);
  u32 VAR_7 = 0;
  VAR_6 = FUNC_2(VAR_2,
   VAR_0, ((void*)0));
  if (VAR_6) {
   FUNC_4(VAR_6, 0x4C, &VAR_7);
   VAR_7 &= ~0x000007FF;
   VAR_7 |= 0x00000040;
   VAR_7 |= 0x00000020;
   FUNC_6(VAR_6, 0x4C, VAR_7);
   FUNC_1(VAR_6);
  }
 } else {
  struct pci_dev * VAR_8 = ((void*)0);
  u8 VAR_9 = 0;

  VAR_8 = FUNC_2(VAR_2,
    VAR_1, ((void*)0));
  if (VAR_8) {
   FUNC_3(VAR_8, 0x41, &VAR_9);
   VAR_9 &= ~0x40;
   FUNC_5(VAR_8, 0x41, VAR_9);
   FUNC_1(VAR_8);
  }
 }
 FUNC_3(VAR_4, 0x5A, &VAR_5);
 VAR_5 &= ~0x40;
 if (!(FUNC_0(VAR_4->devfn) & 1))
  VAR_5 |= 0x2;
 else
  VAR_5 |= (VAR_4->revision >= VAR_3) ? 0x3 : 0x2;
 FUNC_5(VAR_4, 0x5A, VAR_5);

 return VAR_5;
}
