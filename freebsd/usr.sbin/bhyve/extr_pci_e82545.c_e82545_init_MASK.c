
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct pci_devinst {int pi_slot; int pi_func; struct e82545_softc* pi_arg; } ;
struct TYPE_2__ {int octet; } ;
struct e82545_softc {int * esc_be; TYPE_1__ esc_mac; int esc_tx_tid; int esc_tx_cond; int esc_rx_cond; int esc_mtx; struct vmctx* esc_ctx; struct pci_devinst* esc_pi; } ;
typedef int nstr ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct e82545_softc* FUNC_1 (int,int) ;
 int FUNC_2 (struct e82545_softc*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pci_devinst*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int **,char*,int ,struct e82545_softc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_devinst*,int ,int ,int ) ;
 int FUNC_9 (struct pci_devinst*) ;
 int FUNC_10 (struct pci_devinst*,int ,int ) ;
 int FUNC_11 (struct pci_devinst*,int ,int) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *,int ,struct e82545_softc*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (char*,int,char*,int,int) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (char**,char*) ;

__attribute__((used)) static int
FUNC_19(struct vmctx *VAR_24, struct pci_devinst *VAR_25, char *VAR_26)
{
 char VAR_27[80];
 struct e82545_softc *VAR_28;
 char *VAR_29;
 char *VAR_30;
 int VAR_31;

 FUNC_0("Loading with options: %s\r\n", VAR_26);


 VAR_28 = FUNC_1(1, sizeof(*VAR_28));

 VAR_25->pi_arg = VAR_28;
 VAR_28->esc_pi = VAR_25;
 VAR_28->esc_ctx = VAR_24;

 FUNC_14(&VAR_28->esc_mtx, ((void*)0));
 FUNC_12(&VAR_28->esc_rx_cond, ((void*)0));
 FUNC_12(&VAR_28->esc_tx_cond, ((void*)0));
 FUNC_13(&VAR_28->esc_tx_tid, ((void*)0), VAR_23, VAR_28);
 FUNC_16(VAR_27, sizeof(VAR_27), "e82545-%d:%d tx", VAR_25->pi_slot,
     VAR_25->pi_func);
        FUNC_15(VAR_28->esc_tx_tid, VAR_27);

 FUNC_10(VAR_25, VAR_14, VAR_6);
 FUNC_10(VAR_25, VAR_20, VAR_8);
 FUNC_11(VAR_25, VAR_13, VAR_11);
 FUNC_11(VAR_25, VAR_17, VAR_21);
 FUNC_10(VAR_25, VAR_18, VAR_7);
 FUNC_10(VAR_25, VAR_19, VAR_8);

 FUNC_11(VAR_25, VAR_15, VAR_12);
 FUNC_11(VAR_25, VAR_16, 0x1);



 FUNC_9(VAR_25);

 FUNC_8(VAR_25, VAR_4, VAR_10,
  VAR_5);
 FUNC_8(VAR_25, VAR_0, VAR_10,
  VAR_1);
 FUNC_8(VAR_25, VAR_2, VAR_9,
  VAR_3);





 VAR_31 = 0;
 VAR_28->esc_be = ((void*)0);
 if (VAR_26 != ((void*)0)) {
  int VAR_32;

  VAR_29 = VAR_30 = FUNC_17(VAR_26);
  (void) FUNC_18(&VAR_30, ",");

  if (VAR_30 != ((void*)0)) {
   VAR_32 = FUNC_5(VAR_30, VAR_28->esc_mac.octet);
   if (VAR_32 != 0) {
    FUNC_3(VAR_29);
    return (VAR_32);
   }
   VAR_31 = 1;
  }

  VAR_32 = FUNC_6(&VAR_28->esc_be, VAR_29, VAR_22, VAR_28);
  FUNC_3(VAR_29);
  if (VAR_32)
   return (VAR_32);
 }

 if (!VAR_31) {
  FUNC_4(VAR_25, VAR_28->esc_mac.octet);
 }

 FUNC_7(VAR_28->esc_be);


 FUNC_2(VAR_28, 0);

 return (0);
}
