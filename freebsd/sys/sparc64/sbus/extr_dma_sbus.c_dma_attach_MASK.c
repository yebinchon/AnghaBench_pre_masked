
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lsi64854_softc {int sc_burst; int * sc_res; int * sc_dev; int sc_parent_dmat; int sc_channel; } ;
struct dma_softc {int sc_slot; int sc_ign; struct lsi64854_softc sc_lsi64854; } ;
struct TYPE_2__ {int obd_name; } ;
struct dma_devinfo {TYPE_1__ ddi_obdinfo; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct lsi64854_softc*) ;
 int FUNC_2 (struct lsi64854_softc*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_7 (int *,int ,int*,int ) ;
 int FUNC_8 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int * FUNC_12 (int *,int *,int) ;
 struct dma_softc* FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,...) ;
 int FUNC_15 (int *,struct dma_devinfo*) ;
 int FUNC_16 (struct dma_devinfo*) ;
 struct dma_devinfo* FUNC_17 (int *,struct dma_softc*,scalar_t__) ;
 char* FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (char const*,char*) ;

__attribute__((used)) static int
FUNC_25(device_t VAR_11)
{
 struct dma_softc *VAR_12;
 struct lsi64854_softc *VAR_13;
 struct dma_devinfo *VAR_14;
 device_t VAR_15;
 const char *VAR_16;
 char *VAR_17;
 uint32_t VAR_18;
 phandle_t VAR_19, VAR_20;
 int VAR_21, VAR_22;

 VAR_12 = FUNC_13(VAR_11);
 VAR_13 = &VAR_12->sc_lsi64854;

 VAR_16 = FUNC_18(VAR_11);
 VAR_20 = FUNC_19(VAR_11);
 VAR_12->sc_ign = FUNC_22(VAR_11);
 VAR_12->sc_slot = FUNC_23(VAR_11);

 VAR_22 = 0;
 VAR_13->sc_res = FUNC_7(VAR_11, VAR_10, &VAR_22,
     VAR_7);
 if (VAR_13->sc_res == ((void*)0)) {
  FUNC_14(VAR_11, "cannot allocate resources\n");
  return (VAR_3);
 }

 if (FUNC_24(VAR_16, "espdma") == 0 || FUNC_24(VAR_16, "dma") == 0)
  VAR_13->sc_channel = VAR_6;
 else if (FUNC_24(VAR_16, "ledma") == 0) {







  VAR_18 = FUNC_1(VAR_13);
  if ((FUNC_4(VAR_20, "cable-selection",
      (void **)&VAR_17)) == -1) {

   VAR_18 |= VAR_4;
  } else {
   if (FUNC_24(VAR_17, "aui") == 0)
    VAR_18 &= ~VAR_4;
   else
    VAR_18 |= VAR_4;
   FUNC_6(VAR_17);
  }
  FUNC_2(VAR_13, VAR_18);
  FUNC_0(20000);
  VAR_13->sc_channel = VAR_5;
 } else {
  FUNC_14(VAR_11, "unsupported DMA channel\n");
  VAR_21 = VAR_3;
  goto fail_lres;
 }

 VAR_21 = FUNC_8(
     FUNC_10(VAR_11),
     1, 0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_1,
     VAR_2,
     VAR_1,
     0,
     ((void*)0), ((void*)0),
     &VAR_13->sc_parent_dmat);
 if (VAR_21 != 0) {
  FUNC_14(VAR_11, "cannot allocate parent DMA tag\n");
  goto fail_lres;
 }

 VAR_22 = FUNC_21(VAR_11);
 VAR_13->sc_burst = (VAR_22 & VAR_9) ? 32 :
     (VAR_22 & VAR_8) ? 16 : 0;
 VAR_13->sc_dev = VAR_11;


 VAR_22 = 0;
 for (VAR_19 = FUNC_3(VAR_20); VAR_19 != 0; VAR_19 = FUNC_5(VAR_19)) {
  if ((VAR_14 = FUNC_17(VAR_11, VAR_12, VAR_19)) == ((void*)0))
   continue;
  if (VAR_22 != 0) {
   FUNC_14(VAR_11,
       "<%s>: only one child per DMA channel supported\n",
       VAR_14->ddi_obdinfo.obd_name);
   FUNC_16(VAR_14);
   continue;
  }
  if ((VAR_15 = FUNC_12(VAR_11, ((void*)0), -1)) == ((void*)0)) {
   FUNC_14(VAR_11, "<%s>: device_add_child failed\n",
       VAR_14->ddi_obdinfo.obd_name);
   FUNC_16(VAR_14);
   continue;
  }
  FUNC_15(VAR_15, VAR_14);
  VAR_22++;
 }
 return (FUNC_9(VAR_11));

 fail_lres:
 FUNC_11(VAR_11, VAR_10, FUNC_20(VAR_13->sc_res),
     VAR_13->sc_res);
 return (VAR_21);
}
