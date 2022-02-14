
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
typedef int u16 ;
struct hfc_multi {scalar_t__ pci_iobase; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct hfc_multi *VAR_1, u_char *VAR_2, int VAR_3)
{
 FUNC_2(VAR_0, (VAR_1->pci_iobase) + 4);
 while (VAR_3 >> 2) {
  FUNC_3(FUNC_1(*(u32 *)VAR_2), VAR_1->pci_iobase);
  VAR_2 += 4;
  VAR_3 -= 4;
 }
 while (VAR_3 >> 1) {
  FUNC_4(FUNC_0(*(u16 *)VAR_2), VAR_1->pci_iobase);
  VAR_2 += 2;
  VAR_3 -= 2;
 }
 while (VAR_3) {
  FUNC_2(*VAR_2, VAR_1->pci_iobase);
  VAR_2++;
  VAR_3--;
 }
}
