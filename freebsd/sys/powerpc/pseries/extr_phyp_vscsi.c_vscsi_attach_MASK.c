
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsi_xfer {int dmamap; struct vscsi_softc* sc; } ;
struct vscsi_softc {int max_transactions; int io_lock; int * devq; int * sim; int free_xferq; int data_tag; struct vscsi_xfer* xfer; int crq_queue; int crq_map; int crq_tag; scalar_t__ n_crqs; scalar_t__ crq_phys; struct vscsi_xfer loginxp; int active_xferq; int irq_cookie; int irq; scalar_t__ irqid; int unit; int dev; } ;
typedef int device_t ;


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
 int FUNC_0 (int ,char*,int *,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int,int ,struct vscsi_softc*,int ) ;
 int FUNC_7 (int ,void**,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int *,int ,struct vscsi_softc*,int *) ;
 int * VAR_18 ;
 int * FUNC_10 (int ,int ,char*,struct vscsi_softc*,int ,int *,int,int,int *) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 struct vscsi_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,...) ;
 struct vscsi_xfer* FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,char*,int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_23 (struct vscsi_softc*) ;
 scalar_t__ FUNC_24 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_25(device_t VAR_24)
{
 struct vscsi_softc *VAR_25;
 struct vscsi_xfer *VAR_26;
 int VAR_27, VAR_28;

 VAR_25 = FUNC_14(VAR_24);
 if (VAR_25 == ((void*)0))
  return (VAR_5);

 VAR_25->dev = VAR_24;
 FUNC_19(&VAR_25->io_lock, "vscsi", ((void*)0), VAR_12);


 FUNC_0(FUNC_22(VAR_24), "reg", &VAR_25->unit,
     sizeof(VAR_25->unit));


 VAR_25->irqid = 0;
 VAR_25->irq = FUNC_3(VAR_24, VAR_17, &VAR_25->irqid,
     VAR_16);

 if (!VAR_25->irq) {
  FUNC_16(VAR_24, "Could not allocate IRQ\n");
  FUNC_18(&VAR_25->io_lock);
  return (VAR_7);
 }

 FUNC_9(VAR_24, VAR_25->irq, VAR_11 | VAR_10 |
     VAR_9, ((void*)0), VAR_23, VAR_25, &VAR_25->irq_cookie);


 VAR_27 = FUNC_4(FUNC_8(VAR_24), 1, 0,
     VAR_2, VAR_2, ((void*)0), ((void*)0), VAR_3,
     256, VAR_4, 0, VAR_18, &VAR_25->io_lock,
     &VAR_25->data_tag);

 FUNC_1(&VAR_25->active_xferq);
 FUNC_1(&VAR_25->free_xferq);


 VAR_25->loginxp.sc = VAR_25;
 FUNC_5(VAR_25->data_tag, 0, &VAR_25->loginxp.dmamap);
 FUNC_2(&VAR_25->free_xferq, &VAR_25->loginxp, VAR_19);


 VAR_27 = FUNC_4(FUNC_8(VAR_24), VAR_15, 0,
     VAR_2, VAR_2, ((void*)0), ((void*)0), 8*VAR_15,
     1, VAR_3, 0, ((void*)0), ((void*)0), &VAR_25->crq_tag);
 VAR_27 = FUNC_7(VAR_25->crq_tag, (void **)&VAR_25->crq_queue,
     VAR_0 | VAR_1, &VAR_25->crq_map);
 VAR_25->crq_phys = 0;
 VAR_25->n_crqs = 0;
 VAR_27 = FUNC_6(VAR_25->crq_tag, VAR_25->crq_map, VAR_25->crq_queue,
     8*VAR_15, VAR_22, VAR_25, 0);

 FUNC_20(&VAR_25->io_lock);
 FUNC_23(VAR_25);
 VAR_25->xfer = FUNC_17(sizeof(VAR_25->xfer[0])*VAR_25->max_transactions, VAR_14,
     VAR_13);
 for (VAR_28 = 0; VAR_28 < VAR_25->max_transactions; VAR_28++) {
  VAR_26 = &VAR_25->xfer[VAR_28];
  VAR_26->sc = VAR_25;

  VAR_27 = FUNC_5(VAR_25->data_tag, 0, &VAR_26->dmamap);
  if (VAR_27) {
   FUNC_16(VAR_24, "Could not create DMA map (%d)\n",
       VAR_27);
   break;
  }

  FUNC_2(&VAR_25->free_xferq, VAR_26, VAR_19);
 }
 FUNC_21(&VAR_25->io_lock);


 if ((VAR_25->devq = FUNC_12(VAR_25->max_transactions)) == ((void*)0))
  return (VAR_6);

 VAR_25->sim = FUNC_10(VAR_20, VAR_21, "vscsi", VAR_25,
    FUNC_15(VAR_24), &VAR_25->io_lock,
    VAR_25->max_transactions, VAR_25->max_transactions,
    VAR_25->devq);
 if (VAR_25->sim == ((void*)0)) {
  FUNC_13(VAR_25->devq);
  VAR_25->devq = ((void*)0);
  FUNC_16(VAR_24, "CAM SIM attach failed\n");
  return (VAR_5);
 }


 FUNC_20(&VAR_25->io_lock);
 if (FUNC_24(VAR_25->sim, VAR_24, 0) != 0) {
  FUNC_16(VAR_24, "XPT bus registration failed\n");
  FUNC_11(VAR_25->sim, VAR_8);
  VAR_25->sim = ((void*)0);
  FUNC_13(VAR_25->devq);
  VAR_25->devq = ((void*)0);
  FUNC_21(&VAR_25->io_lock);
  return (VAR_5);
 }
 FUNC_21(&VAR_25->io_lock);

 return (0);
}
