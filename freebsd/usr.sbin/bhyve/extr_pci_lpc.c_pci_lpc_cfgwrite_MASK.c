
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {int dummy; } ;


 int FUNC_0 (struct pci_devinst*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vmctx*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_0, int VAR_1, struct pci_devinst *VAR_2,
    int VAR_3, int VAR_4, uint32_t VAR_5)
{
 int VAR_6;

 if (VAR_4 == 1) {
  VAR_6 = 0;
  if (VAR_3 >= 0x60 && VAR_3 <= 0x63)
   VAR_6 = VAR_3 - 0x60 + 1;
  if (VAR_3 >= 0x68 && VAR_3 <= 0x6b)
   VAR_6 = VAR_3 - 0x68 + 5;
  if (VAR_6 != 0) {
   FUNC_2(VAR_0, VAR_6, VAR_5);
   FUNC_0(VAR_2, VAR_3, FUNC_1(VAR_6));
   return (0);
  }
 }
 return (-1);
}
