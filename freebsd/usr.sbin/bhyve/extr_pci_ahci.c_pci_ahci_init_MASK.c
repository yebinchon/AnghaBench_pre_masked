
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct vmctx {int dummy; } ;
struct pci_devinst {int pi_slot; int pi_func; struct pci_ahci_softc* pi_arg; } ;
struct pci_ahci_softc {int ports; int pi; int cap; int vs; TYPE_1__* port; int cap2; int mtx; struct pci_devinst* asc_pi; } ;
struct blockif_ctxt {int dummy; } ;
typedef int bident ;
struct TYPE_2__ {int port; int atapi; int ioqsz; struct blockif_ctxt* bctx; int ident; struct pci_ahci_softc* pr_sc; } ;
typedef int MD5_CTX ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (struct pci_ahci_softc*) ;
 int FUNC_5 (struct blockif_ctxt*) ;
 struct blockif_ctxt* FUNC_6 (char*,char*) ;
 struct pci_ahci_softc* FUNC_7 (int,int) ;
 int VAR_29 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (struct pci_ahci_softc*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct pci_devinst*,int) ;
 int FUNC_13 (struct pci_devinst*,int,int ,scalar_t__) ;
 int FUNC_14 (struct pci_devinst*) ;
 int FUNC_15 (struct pci_devinst*,int ,int) ;
 int FUNC_16 (struct pci_devinst*,int ,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (char*,int,char*,int,int,int,...) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 char* FUNC_21 (char*,char*) ;

__attribute__((used)) static int
FUNC_22(struct vmctx *VAR_30, struct pci_devinst *VAR_31, char *VAR_32, int VAR_33)
{
 char VAR_34[sizeof("XX:XX:XX")];
 struct blockif_ctxt *VAR_35;
 struct pci_ahci_softc *VAR_36;
 int VAR_37, VAR_38, VAR_39;
 MD5_CTX VAR_40;
 u_char VAR_41[16];
 char *VAR_42, *VAR_43;

 VAR_37 = 0;





 VAR_36 = FUNC_7(1, sizeof(struct pci_ahci_softc));
 VAR_31->pi_arg = VAR_36;
 VAR_36->asc_pi = VAR_31;
 FUNC_17(&VAR_36->mtx, ((void*)0));
 VAR_36->ports = 0;
 VAR_36->pi = 0;
 VAR_38 = 32;

 for (VAR_39 = 0; VAR_39 < VAR_19 && VAR_32 != ((void*)0); VAR_39++, VAR_32 = VAR_42) {

  if (FUNC_20(VAR_32, "hd:", 3) == 0) {
   VAR_33 = 0;
   VAR_32 += 3;
  } else if (FUNC_20(VAR_32, "cd:", 3) == 0) {
   VAR_33 = 1;
   VAR_32 += 3;
  }


  VAR_42 = FUNC_21(VAR_32, ",hd:");
  VAR_43 = FUNC_21(VAR_32, ",cd:");
  if (VAR_42 == ((void*)0) || (VAR_43 != ((void*)0) && VAR_43 < VAR_42))
   VAR_42 = VAR_43;
  if (VAR_42 != ((void*)0)) {
   VAR_42[0] = 0;
   VAR_42++;
  }

  if (VAR_32[0] == 0)
   continue;





  FUNC_18(VAR_34, sizeof(VAR_34), "%d:%d:%d", VAR_31->pi_slot,
      VAR_31->pi_func, VAR_39);
  VAR_35 = FUNC_6(VAR_32, VAR_34);
  if (VAR_35 == ((void*)0)) {
   VAR_36->ports = VAR_39;
   VAR_37 = 1;
   goto open_fail;
  }
  VAR_36->port[VAR_39].bctx = VAR_35;
  VAR_36->port[VAR_39].pr_sc = VAR_36;
  VAR_36->port[VAR_39].port = VAR_39;
  VAR_36->port[VAR_39].atapi = VAR_33;





  FUNC_1(&VAR_40);
  FUNC_2(&VAR_40, VAR_32, FUNC_19(VAR_32));
  FUNC_0(VAR_41, &VAR_40);
  FUNC_18(VAR_36->port[VAR_39].ident, VAR_16,
      "BHYVE-%02X%02X-%02X%02X-%02X%02X",
      VAR_41[0], VAR_41[1], VAR_41[2], VAR_41[3], VAR_41[4],
      VAR_41[5]);





  FUNC_11(&VAR_36->port[VAR_39]);

  VAR_36->pi |= (1 << VAR_39);
  if (VAR_36->port[VAR_39].ioqsz < VAR_38)
   VAR_38 = VAR_36->port[VAR_39].ioqsz;
 }
 VAR_36->ports = VAR_39;


 --VAR_38;
 if (VAR_36->ports < VAR_18)
  VAR_36->ports = VAR_18;
 VAR_36->cap = VAR_1 | VAR_10 | VAR_12 |
     VAR_9 | VAR_13 | VAR_7 |
     VAR_6 | VAR_8 | (0x3 << VAR_2)|
     VAR_4 | VAR_11 | VAR_5 |
     (VAR_38 << VAR_3) | VAR_14 | (VAR_36->ports - 1);

 VAR_36->vs = 0x10300;
 VAR_36->cap2 = VAR_0;
 FUNC_4(VAR_36);

 FUNC_15(VAR_31, VAR_24, 0x2821);
 FUNC_15(VAR_31, VAR_27, 0x8086);
 FUNC_16(VAR_31, VAR_23, VAR_21);
 FUNC_16(VAR_31, VAR_26, VAR_28);
 FUNC_16(VAR_31, VAR_25, VAR_22);
 VAR_39 = FUNC_3(VAR_36->ports, 16);
 VAR_39 = FUNC_8(VAR_39) - ((VAR_39 & (VAR_39 - 1)) ? 0 : 1);
 FUNC_12(VAR_31, 1 << VAR_39);
 FUNC_13(VAR_31, 5, VAR_20,
     VAR_15 + VAR_36->ports * VAR_17);

 FUNC_14(VAR_31);

open_fail:
 if (VAR_37) {
  for (VAR_39 = 0; VAR_39 < VAR_36->ports; VAR_39++) {
   if (VAR_36->port[VAR_39].bctx != ((void*)0))
    FUNC_5(VAR_36->port[VAR_39].bctx);
  }
  FUNC_10(VAR_36);
 }

 return (VAR_37);
}
