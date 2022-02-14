
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_0)
{
 unsigned long VAR_1;
 u32 VAR_2;
 unsigned long VAR_3 = FUNC_2(VAR_0, 4);

 VAR_2 = FUNC_0(VAR_3 + 0x90);
 if ((VAR_2 >> 12) != 0xABCDE) {
  int VAR_4;
  u16 VAR_5;
  u32 VAR_6 = 0;

  FUNC_3("BIOS clock data not set\n");


  for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
   FUNC_1(VAR_0, 0x78, &VAR_5);
   VAR_6 += VAR_5 & 0x1FF;
   FUNC_4(15);
  }
  VAR_2 = VAR_6 / 128;
 }
 VAR_2 &= 0x1FF;

 VAR_1 = (VAR_2 * 77) / 192;


 if (VAR_1 < 40)
  return 33;
 if (VAR_1 < 45)
  return 40;
 if (VAR_1 < 55)
  return 50;
 return 66;
}
