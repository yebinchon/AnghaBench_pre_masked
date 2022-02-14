
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct pci_emul_dsoftc {int dummy; } ;
struct pci_devinst {struct pci_emul_dsoftc* pi_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct pci_emul_dsoftc* FUNC_1 (int,int) ;
 int FUNC_2 (struct pci_devinst*,int ) ;
 int FUNC_3 (struct pci_devinst*,int,int ,int ) ;
 int FUNC_4 (struct pci_devinst*,int ,int) ;
 int FUNC_5 (struct pci_devinst*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_8, struct pci_devinst *VAR_9, char *VAR_10)
{
 int VAR_11;
 struct pci_emul_dsoftc *VAR_12;

 VAR_12 = FUNC_1(1, sizeof(struct pci_emul_dsoftc));

 VAR_9->pi_arg = VAR_12;

 FUNC_4(VAR_9, VAR_5, 0x0001);
 FUNC_4(VAR_9, VAR_6, 0x10DD);
 FUNC_5(VAR_9, VAR_4, 0x02);

 VAR_11 = FUNC_2(VAR_9, VAR_7);
 FUNC_0(VAR_11 == 0);

 VAR_11 = FUNC_3(VAR_9, 0, VAR_2, VAR_0);
 FUNC_0(VAR_11 == 0);

 VAR_11 = FUNC_3(VAR_9, 1, VAR_3, VAR_1);
 FUNC_0(VAR_11 == 0);

 VAR_11 = FUNC_3(VAR_9, 2, VAR_3, VAR_1);
 FUNC_0(VAR_11 == 0);

 return (0);
}
