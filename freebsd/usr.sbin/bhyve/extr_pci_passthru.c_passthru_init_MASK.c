
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct pci_devinst {struct passthru_softc* pi_arg; } ;
struct passthru_softc {struct pci_devinst* psc_pi; } ;
typedef int cap_rights_t ;
typedef int cap_ioctl_t ;


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
 struct passthru_softc* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (struct vmctx*,struct pci_devinst*,int,int,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct passthru_softc*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (char*,char*,int*,int*,int*) ;
 scalar_t__ FUNC_12 (struct vmctx*,int,int,int) ;
 int FUNC_13 (struct vmctx*) ;
 int FUNC_14 (struct vmctx*,int,int,int) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static int
FUNC_17(struct vmctx *VAR_17, struct pci_devinst *VAR_18, char *VAR_19)
{
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 struct passthru_softc *VAR_25;

 cap_rights_t VAR_26;
 cap_ioctl_t VAR_27[] = { VAR_8, VAR_9, VAR_7 };
 cap_ioctl_t VAR_28[] = { VAR_5 };


 VAR_25 = ((void*)0);
 VAR_23 = 1;


 FUNC_2(&VAR_26, VAR_0, VAR_2, VAR_3);


 VAR_24 = FUNC_13(VAR_17);
 if (!(VAR_24 & VAR_10)) {
  FUNC_16("passthru requires guest memory to be wired");
  return (VAR_23);
 }

 if (VAR_16 < 0) {
  VAR_16 = FUNC_10(VAR_12, VAR_6, 0);
  if (VAR_16 < 0) {
   FUNC_15("failed to open %s", VAR_12);
   return (VAR_23);
  }
 }


 if (FUNC_5(VAR_16, &VAR_26) == -1)
  FUNC_7(VAR_4, "Unable to apply rights for sandbox");
 if (FUNC_4(VAR_16, VAR_27, FUNC_9(VAR_27)) == -1)
  FUNC_7(VAR_4, "Unable to apply rights for sandbox");


 if (VAR_14 < 0) {
  VAR_14 = FUNC_10(VAR_11, VAR_6, 0);
  if (VAR_14 < 0) {
   FUNC_15("failed to open %s", VAR_11);
   return (VAR_23);
  }
 }


 if (FUNC_5(VAR_14, &VAR_26) == -1)
  FUNC_7(VAR_4, "Unable to apply rights for sandbox");
 if (FUNC_4(VAR_14, VAR_28, FUNC_9(VAR_28)) == -1)
  FUNC_7(VAR_4, "Unable to apply rights for sandbox");


 if (VAR_15 < 0) {
  VAR_15 = FUNC_10(VAR_13, VAR_6, 0);
  if (VAR_15 < 0) {
   FUNC_15("failed to open %s", VAR_13);
   return (VAR_23);
  }
 }


 FUNC_1(&VAR_26, VAR_0);
 FUNC_3(&VAR_26, VAR_1);
 if (FUNC_5(VAR_15, &VAR_26) == -1)
  FUNC_7(VAR_4, "Unable to apply rights for sandbox");


 if (VAR_19 == ((void*)0) ||
     FUNC_11(VAR_19, "%d/%d/%d", &VAR_20, &VAR_21, &VAR_22) != 3) {
  FUNC_16("invalid passthru options");
  return (VAR_23);
 }

 if (FUNC_12(VAR_17, VAR_20, VAR_21, VAR_22) != 0) {
  FUNC_16("PCI device at %d/%d/%d is not using the ppt(4) driver",
      VAR_20, VAR_21, VAR_22);
  goto done;
 }

 VAR_25 = FUNC_0(1, sizeof(struct passthru_softc));

 VAR_18->pi_arg = VAR_25;
 VAR_25->psc_pi = VAR_18;


 VAR_23 = FUNC_6(VAR_17, VAR_18, VAR_20, VAR_21, VAR_22);
done:
 if (VAR_23) {
  FUNC_8(VAR_25);
  FUNC_14(VAR_17, VAR_20, VAR_21, VAR_22);
 }
 return (VAR_23);
}
