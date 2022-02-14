
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {int pi_arg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

uint64_t
FUNC_2(struct vmctx *VAR_0, int VAR_1, struct pci_devinst *VAR_2,
       int VAR_3, uint64_t VAR_4, int VAR_5)
{
 uint8_t VAR_6;

 FUNC_0(VAR_3 == 0);
 FUNC_0(VAR_5 == 1);

 VAR_6 = FUNC_1(VAR_2->pi_arg, VAR_4);
 return (VAR_6);
}
