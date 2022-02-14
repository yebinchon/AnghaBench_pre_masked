
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsl_pcib_softc {int sc_rid; int sc_ip_min; int sc_ip_maj; int sc_pcie; int sc_pcie_capreg; int * sc_ih; int * sc_irq_res; int sc_dev; int sc_cfg_mtx; int * sc_res; scalar_t__ sc_busnr; int sc_bsh; int sc_bst; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
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
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int,int *,int ,int ,int **) ;
 struct fsl_pcib_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 void* FUNC_7 (struct fsl_pcib_softc*,int ,int ,int ,int,int) ;
 int FUNC_8 (struct fsl_pcib_softc*,int ,int ,int ,int,int,int) ;
 scalar_t__ FUNC_9 (int ,struct fsl_pcib_softc*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_25 ;
 int FUNC_12 (int ,int ,int ,int ,int ,int) ;
 int FUNC_13 (int ,int ,int ,int ,int ,int,int) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_26)
{
 struct fsl_pcib_softc *VAR_27;
 phandle_t VAR_28;
 uint32_t VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33;
 uint8_t VAR_34, VAR_35;

 VAR_27 = FUNC_4(VAR_26);
 VAR_27->sc_dev = VAR_26;

 VAR_27->sc_rid = 0;
 VAR_27->sc_res = FUNC_1(VAR_26, VAR_23, &VAR_27->sc_rid,
     VAR_20);
 if (VAR_27->sc_res == ((void*)0)) {
  FUNC_6(VAR_26, "could not map I/O memory\n");
  return (VAR_0);
 }
 VAR_27->sc_bst = FUNC_20(VAR_27->sc_res);
 VAR_27->sc_bsh = FUNC_19(VAR_27->sc_res);
 VAR_27->sc_busnr = 0;

 VAR_31 = FUNC_2(VAR_27->sc_res, VAR_19);
 VAR_27->sc_ip_min = (VAR_31 & VAR_5) >> VAR_6;
 VAR_27->sc_ip_maj = (VAR_31 & VAR_3) >> VAR_4;
 FUNC_14(&VAR_27->sc_cfg_mtx, "pcicfg", ((void*)0), VAR_8);

 VAR_29 = FUNC_7(VAR_27, 0, 0, 0, VAR_18, 2);
 if (VAR_29 != 0x1057 && VAR_29 != 0x1957)
  goto err;

 VAR_35 = FUNC_7(VAR_27, 0, 0, 0, VAR_15, 1);
 while (VAR_35 != 0) {
  VAR_29 = FUNC_7(VAR_27, 0, 0, 0, VAR_35, 2);
  switch (VAR_29 & 0xff) {
  case 128:
   break;
  case 129:
   VAR_27->sc_pcie = 1;
   VAR_27->sc_pcie_capreg = VAR_35;
   break;
  }
  VAR_35 = (VAR_29 >> 8) & 0xff;
 }

 VAR_28 = FUNC_15(VAR_26);





 VAR_32 = FUNC_17(VAR_26);
 if (VAR_32)
  return (VAR_32);




 if (FUNC_9(VAR_28, VAR_27) != 0)
  goto err;

 VAR_29 = FUNC_7(VAR_27, 0, 0, 0, VAR_16, 2);
 VAR_29 |= VAR_13 | VAR_10 | VAR_11 |
     VAR_12;
 FUNC_8(VAR_27, 0, 0, 0, VAR_16, VAR_29, 2);


 VAR_30 = FUNC_12(VAR_27->sc_dev, 0, 0, 0,
     VAR_14, 1);
 VAR_30 |= VAR_9;
 FUNC_13(VAR_27->sc_dev, 0, 0, 0,
     VAR_14, VAR_30, 1);
 FUNC_0(100000);
 VAR_30 &= ~VAR_9;
 FUNC_13(VAR_27->sc_dev, 0, 0, 0,
     VAR_14, VAR_30, 1);
 FUNC_0(100000);

 if (VAR_27->sc_pcie) {
  VAR_34 = FUNC_7(VAR_27, 0, 0, 0, VAR_17, 1);
  if (VAR_34 < VAR_7) {
   if (VAR_24)
    FUNC_18("PCI %d: no PCIE link, skipping\n",
        FUNC_5(VAR_26));
   return (0);
  }
 }


 VAR_33 = 0;
 VAR_27->sc_irq_res = FUNC_1(VAR_26, VAR_22, &VAR_33,
     VAR_20 | VAR_21);
 if (VAR_27->sc_irq_res == ((void*)0)) {
  VAR_32 = FUNC_10(VAR_26);
  if (VAR_32 != 0) {
   FUNC_6(VAR_26,
       "Detach of the driver failed with error %d\n",
       VAR_32);
  }
  return (VAR_0);
 }


 VAR_32 = FUNC_3(VAR_26, VAR_27->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_25, VAR_26, &VAR_27->sc_ih);
 if (VAR_32 != 0) {
  FUNC_6(VAR_26, "Could not setup irq, %d\n", VAR_32);
  VAR_27->sc_ih = ((void*)0);
  VAR_32 = FUNC_10(VAR_26);
  if (VAR_32 != 0) {
   FUNC_6(VAR_26,
       "Detach of the driver failed with error %d\n",
       VAR_32);
  }
  return (VAR_0);
 }

 FUNC_11(VAR_26);

 return (FUNC_16(VAR_26));

err:
 return (VAR_0);
}
