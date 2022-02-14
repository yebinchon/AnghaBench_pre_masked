
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ps3cdrom_xfer {int x_dmamap; struct ps3cdrom_softc* x_sc; } ;
struct ps3cdrom_softc {int sc_irq; scalar_t__ sc_irqid; int sc_irqctx; int sc_dmatag; int sc_free_xferq; scalar_t__ sc_sim; int sc_path; int sc_mtx; struct ps3cdrom_xfer* sc_xfer; int sc_active_xferq; int sc_dev; } ;
struct TYPE_2__ {int func_code; } ;
struct ccb_setasync {scalar_t__ callback_arg; int callback; int event_enable; TYPE_1__ ccb_h; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
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
 int FUNC_1 (struct ps3cdrom_softc*) ;
 int FUNC_2 (struct ps3cdrom_softc*) ;
 int FUNC_3 (struct ps3cdrom_softc*) ;
 int VAR_16 ;
 int FUNC_4 (struct ps3cdrom_softc*) ;
 int VAR_17 ;
 int VAR_18 ;
 struct ps3cdrom_xfer* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct ps3cdrom_xfer*,int ) ;
 int FUNC_8 (int *,struct ps3cdrom_xfer*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (int ,int ,scalar_t__*,int ) ;
 int FUNC_10 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,scalar_t__,int ) ;
 int FUNC_16 (int ,int ,int,int *,int ,struct ps3cdrom_softc*,int *) ;
 int FUNC_17 (int ,int ,int ) ;
 int VAR_21 ;
 scalar_t__ FUNC_18 (int ,int ,char*,struct ps3cdrom_softc*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (scalar_t__) ;
 struct cam_devq* FUNC_21 (int) ;
 int FUNC_22 (struct cam_devq*) ;
 struct ps3cdrom_softc* FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,...) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_26 (union ccb*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (scalar_t__,int ,int ) ;
 int FUNC_29 (int *,int *,int ,int ,int ) ;
 int FUNC_30 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_31(device_t VAR_27)
{
 struct ps3cdrom_softc *VAR_28 = FUNC_23(VAR_27);
 struct cam_devq *VAR_29;
 struct ps3cdrom_xfer *VAR_30;
 struct ccb_setasync VAR_31;
 int VAR_32, VAR_33;

 VAR_28->sc_dev = VAR_27;

 FUNC_3(VAR_28);



 VAR_28->sc_irqid = 0;
 VAR_28->sc_irq = FUNC_9(VAR_27, VAR_18, &VAR_28->sc_irqid,
     VAR_17);
 if (!VAR_28->sc_irq) {
  FUNC_25(VAR_27, "Could not allocate IRQ\n");
  VAR_33 = VAR_11;
  goto fail_destroy_lock;
 }

 VAR_33 = FUNC_16(VAR_27, VAR_28->sc_irq,
     VAR_14 | VAR_13 | VAR_12,
     ((void*)0), VAR_24, VAR_28, &VAR_28->sc_irqctx);
 if (VAR_33) {
  FUNC_25(VAR_27, "Could not setup IRQ\n");
  VAR_33 = VAR_11;
  goto fail_release_intr;
 }



 VAR_33 = FUNC_10(FUNC_14(VAR_27), 4096, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0),
     VAR_4, 1, VAR_15, 0,
     VAR_21, &VAR_28->sc_mtx, &VAR_28->sc_dmatag);
 if (VAR_33) {
  FUNC_25(VAR_27, "Could not create DMA tag\n");
  VAR_33 = VAR_11;
  goto fail_teardown_intr;
 }



 FUNC_6(&VAR_28->sc_active_xferq);
 FUNC_6(&VAR_28->sc_free_xferq);

 for (VAR_32 = 0; VAR_32 < VAR_16; VAR_32++) {
  VAR_30 = &VAR_28->sc_xfer[VAR_32];
  VAR_30->x_sc = VAR_28;

  VAR_33 = FUNC_12(VAR_28->sc_dmatag, VAR_1,
      &VAR_30->x_dmamap);
  if (VAR_33) {
   FUNC_25(VAR_27, "Could not create DMA map (%d)\n",
       VAR_33);
   goto fail_destroy_dmamap;
  }

  FUNC_7(&VAR_28->sc_free_xferq, VAR_30, VAR_26);
 }



 VAR_29 = FUNC_21(VAR_16 - 1);
 if (!VAR_29) {
  FUNC_25(VAR_27, "Could not allocate SIM queue\n");
  VAR_33 = VAR_10;
  goto fail_destroy_dmatag;
 }

 VAR_28->sc_sim = FUNC_18(VAR_22, VAR_25, "ps3cdrom",
     VAR_28, FUNC_24(VAR_27), &VAR_28->sc_mtx, VAR_16 - 1, 0,
     VAR_29);
 if (!VAR_28->sc_sim) {
  FUNC_25(VAR_27, "Could not allocate SIM\n");
  FUNC_22(VAR_29);
  VAR_33 = VAR_10;
  goto fail_destroy_dmatag;
 }



 FUNC_1(VAR_28);

 VAR_33 = FUNC_28(VAR_28->sc_sim, VAR_27, 0);
 if (VAR_33 != VAR_8) {
  FUNC_25(VAR_27, "Could not register XPT bus\n");
  VAR_33 = VAR_11;
  FUNC_4(VAR_28);
  goto fail_free_sim;
 }

 VAR_33 = FUNC_29(&VAR_28->sc_path, ((void*)0), FUNC_20(VAR_28->sc_sim),
     VAR_9, VAR_6);
 if (VAR_33 != VAR_7) {
  FUNC_25(VAR_27, "Could not create XPT path\n");
  VAR_33 = VAR_10;
  FUNC_4(VAR_28);
  goto fail_unregister_xpt_bus;
 }

 FUNC_30(&VAR_31.ccb_h, VAR_28->sc_path, 5);
 VAR_31.ccb_h.func_code = VAR_20;
 VAR_31.event_enable = VAR_0;
 VAR_31.callback = VAR_23;
 VAR_31.callback_arg = VAR_28->sc_sim;
 FUNC_26((union ccb *) &VAR_31);

 FUNC_0(VAR_28->sc_path, VAR_5,
     ("registered SIM for ps3cdrom%d\n", FUNC_24(VAR_27)));

 FUNC_4(VAR_28);

 return (VAR_2);

fail_unregister_xpt_bus:

 FUNC_27(FUNC_20(VAR_28->sc_sim));

fail_free_sim:

 FUNC_19(VAR_28->sc_sim, VAR_19);

fail_destroy_dmamap:

 while ((VAR_30 = FUNC_5(&VAR_28->sc_free_xferq))) {
  FUNC_8(&VAR_28->sc_free_xferq, VAR_30, VAR_26);
  FUNC_13(VAR_28->sc_dmatag, VAR_30->x_dmamap);
 }

fail_destroy_dmatag:

 FUNC_11(VAR_28->sc_dmatag);

fail_teardown_intr:

 FUNC_17(VAR_27, VAR_28->sc_irq, VAR_28->sc_irqctx);

fail_release_intr:

 FUNC_15(VAR_27, VAR_18, VAR_28->sc_irqid, VAR_28->sc_irq);

fail_destroy_lock:

 FUNC_2(VAR_28);

 return (VAR_33);
}
