
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int* VAR_9 ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_10)
{
 int VAR_11;

 if (!FUNC_0())
  return;






 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  u8 VAR_12 = VAR_9[VAR_11*2] | (VAR_9[VAR_11*2+1] << 4);
  FUNC_1(VAR_10, 0x48 + VAR_11, VAR_12);
 }


 FUNC_1(VAR_10, 0x86, VAR_5);


 FUNC_1(VAR_10, 0x87, VAR_3);


 FUNC_1(VAR_10, 0x88, VAR_4);


 FUNC_1(VAR_10, 0x89, VAR_7);


 FUNC_1(VAR_10, 0x8a, VAR_7);


 FUNC_1(VAR_10, 0x8b, VAR_7);


 FUNC_1(VAR_10, 0x8c, VAR_7);


 FUNC_1(VAR_10, 0x8d, VAR_6);


 FUNC_1(VAR_10, 0x8e, VAR_8);


 FUNC_1(VAR_10, 0x8f, VAR_8);


 FUNC_1(VAR_10, 0x74, VAR_0);




 FUNC_1(VAR_10, 0x44, 0x30 | VAR_1);
 FUNC_1(VAR_10, 0x75, VAR_2);
}
