
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ devfn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 u32 VAR_1;

 if (!FUNC_1("gw,ventana"))
  return;

 if (VAR_0->devfn != 0)
  return;

 FUNC_2(VAR_0, 0x62c, &VAR_1);
 VAR_1 |= 0xaaa8;
 FUNC_3(VAR_0, 0x62c, VAR_1);

 FUNC_2(VAR_0, 0x644, &VAR_1);
 VAR_1 |= 0xfe;
 FUNC_3(VAR_0, 0x644, VAR_1);

 FUNC_0(100);
}
