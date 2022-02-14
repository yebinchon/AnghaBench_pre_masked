
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct pci_dev *VAR_4;
 u8 VAR_5;


 VAR_4 = FUNC_1(VAR_2, VAR_0, ((void*)0));
 if (VAR_4 == ((void*)0))

  VAR_4 = FUNC_1(VAR_2,
         VAR_1, ((void*)0));
 if (VAR_4 != ((void*)0)) {

  FUNC_2(VAR_4, 0xec, &VAR_5);
  VAR_5 &= ~(1 << 2);
  FUNC_4(VAR_4, 0xec, VAR_5);
  FUNC_2(VAR_4, 0xe4, &VAR_5);
  VAR_5 &= ~(1 << 7);
  FUNC_4(VAR_4, 0xe4, VAR_5);
  FUNC_2(VAR_4, 0xe5, &VAR_5);
  VAR_5 |= 1 << 7;
  FUNC_4(VAR_4, 0xe5, VAR_5);

  FUNC_2(VAR_4, 0x81, &VAR_5);
  if (VAR_5 & 1 << 7) {
   FUNC_3(VAR_4, 0x88, &VAR_3);
   VAR_3 &= 0xff00;
   FUNC_5("ACPI I/O at 0x%x\n", VAR_3);
  }

  FUNC_0(VAR_4);
  return 1;
 }
 return 0;
}
