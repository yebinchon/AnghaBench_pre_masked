
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {struct hda_softc* pi_arg; } ;
struct hda_softc {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_softc*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct vmctx *VAR_0, int VAR_1, struct pci_devinst *VAR_2,
    int VAR_3, uint64_t VAR_4, int VAR_5, uint64_t VAR_6)
{
 struct hda_softc *VAR_7 = VAR_2->pi_arg;
 int VAR_8;

 FUNC_1(VAR_7);
 FUNC_1(VAR_3 == 0);
 FUNC_1(VAR_5 <= 4);

 FUNC_0("offset: 0x%lx value: 0x%lx\n", VAR_4, VAR_6);

 VAR_8 = FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_1(!VAR_8);
}
