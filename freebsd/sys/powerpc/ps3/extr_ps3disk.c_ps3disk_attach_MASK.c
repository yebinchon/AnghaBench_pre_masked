
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ps3disk_softc {int sc_blksize; int sc_nregs; int sc_running; struct ps3disk_region* sc_reg; int sc_irq; scalar_t__ sc_irqid; int sc_irqctx; int sc_task; int sc_deferredq; int sc_bioq; struct disk** sc_disk; int sc_dmatag; int sc_mtx; int sc_nblocks; int sc_dev; } ;
struct ps3disk_region {int r_size; int r_flags; } ;
struct disk {char* d_name; int d_sectorsize; int d_unit; int d_mediasize; int d_flags; int d_maxsize; struct ps3disk_softc* d_drv1; int d_strategy; int d_close; int d_open; } ;
typedef int intmax_t ;
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
 int FUNC_0 (struct ps3disk_softc*) ;
 int FUNC_1 (struct ps3disk_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,int ,int,int *,int ,struct ps3disk_softc*,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_16 ;
 struct ps3disk_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 struct disk* FUNC_11 () ;
 int FUNC_12 (struct disk*,int ) ;
 int FUNC_13 (struct ps3disk_region*,int ) ;
 int FUNC_14 (int *,struct ps3disk_softc*,int *,int ,int ,char*) ;
 int FUNC_15 (int ,int,int ,int ,int ,int ,int *) ;
 struct disk** FUNC_16 (int,int ,int) ;
 int FUNC_17 (int ) ;
 int VAR_17 ;
 int FUNC_18 (struct ps3disk_softc*) ;
 int FUNC_19 (struct ps3disk_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (struct ps3disk_softc*) ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_21(device_t VAR_22)
{
 struct ps3disk_softc *VAR_23;
 struct disk *VAR_24;
 intmax_t VAR_25;
 uint64_t VAR_26;
 char VAR_27;
 int VAR_28, VAR_29;

 VAR_23 = FUNC_9(VAR_22);
 VAR_23->sc_dev = VAR_22;

 FUNC_1(VAR_23);

 VAR_29 = FUNC_19(VAR_23);
 if (VAR_29) {
  FUNC_10(VAR_22, "Could not get disk geometry\n");
  VAR_29 = VAR_5;
  goto fail_destroy_lock;
 }

 FUNC_10(VAR_22, "block size %lu total blocks %lu\n",
     VAR_23->sc_blksize, VAR_23->sc_nblocks);

 VAR_29 = FUNC_18(VAR_23);
 if (VAR_29) {
  FUNC_10(VAR_22, "Could not enumerate disk regions\n");
  VAR_29 = VAR_5;
  goto fail_destroy_lock;
 }

 FUNC_10(VAR_22, "Found %lu regions\n", VAR_23->sc_nregs);

 if (!VAR_23->sc_nregs) {
  VAR_29 = VAR_5;
  goto fail_destroy_lock;
 }


 VAR_23->sc_irqid = 0;
 VAR_23->sc_irq = FUNC_3(VAR_22, VAR_15, &VAR_23->sc_irqid,
     VAR_14);
 if (!VAR_23->sc_irq) {
  FUNC_10(VAR_22, "Could not allocate IRQ\n");
  VAR_29 = VAR_5;
  goto fail_free_regions;
 }

 VAR_29 = FUNC_7(VAR_22, VAR_23->sc_irq,
     VAR_8 | VAR_7 | VAR_6,
     ((void*)0), VAR_18, VAR_23, &VAR_23->sc_irqctx);
 if (VAR_29) {
  FUNC_10(VAR_22, "Could not setup IRQ\n");
  VAR_29 = VAR_5;
  goto fail_release_intr;
 }


 VAR_29 = FUNC_4(FUNC_5(VAR_22), 4096, 0,
     VAR_0, VAR_0, ((void*)0), ((void*)0),
     VAR_1, 1, VAR_13, 0,
     VAR_16, &VAR_23->sc_mtx, &VAR_23->sc_dmatag);
 if (VAR_29) {
  FUNC_10(VAR_22, "Could not create DMA tag\n");
  VAR_29 = VAR_5;
  goto fail_teardown_intr;
 }



 VAR_23->sc_disk = FUNC_16(VAR_23->sc_nregs * sizeof(struct disk *),
     VAR_10, VAR_12 | VAR_11);
 if (!VAR_23->sc_disk) {
  FUNC_10(VAR_22, "Could not allocate disk(s)\n");
  VAR_29 = VAR_4;
  goto fail_teardown_intr;
 }

 for (VAR_28 = 0; VAR_28 < VAR_23->sc_nregs; VAR_28++) {
  struct ps3disk_region *VAR_30 = &VAR_23->sc_reg[VAR_28];

  VAR_24 = VAR_23->sc_disk[VAR_28] = FUNC_11();
  VAR_24->d_open = VAR_19;
  VAR_24->d_close = VAR_17;
  VAR_24->d_strategy = VAR_20;
  VAR_24->d_name = "ps3disk";
  VAR_24->d_drv1 = VAR_23;
  VAR_24->d_maxsize = VAR_13;
  VAR_24->d_sectorsize = VAR_23->sc_blksize;
  VAR_24->d_unit = VAR_28;
  VAR_24->d_mediasize = VAR_23->sc_reg[VAR_28].r_size * VAR_23->sc_blksize;
  VAR_24->d_flags |= VAR_2;

  VAR_25 = VAR_24->d_mediasize >> 20;
  VAR_27 = 'M';
  if (VAR_25 >= 10240) {
   VAR_27 = 'G';
   VAR_25 /= 1024;
  }


  VAR_29 = FUNC_15(FUNC_17(VAR_22), VAR_24->d_unit,
      0, 0, VAR_30->r_flags, 0, &VAR_26);
  FUNC_10(VAR_22, "region %d %ju%cB%s\n", VAR_28, VAR_25, VAR_27,
      (VAR_29 == VAR_9) ? " (hypervisor protected)"
      : "");

  if (VAR_29 != VAR_9)
   FUNC_12(VAR_24, VAR_3);
 }
 VAR_29 = 0;

 FUNC_2(&VAR_23->sc_bioq);
 FUNC_2(&VAR_23->sc_deferredq);
 FUNC_14(&VAR_21, VAR_23, &VAR_23->sc_task, 0, 0, "ps3disk");

 FUNC_20(VAR_23);
 VAR_23->sc_running = 1;
 return (0);

fail_teardown_intr:
 FUNC_8(VAR_22, VAR_23->sc_irq, VAR_23->sc_irqctx);
fail_release_intr:
 FUNC_6(VAR_22, VAR_15, VAR_23->sc_irqid, VAR_23->sc_irq);
fail_free_regions:
 FUNC_13(VAR_23->sc_reg, VAR_10);
fail_destroy_lock:
 FUNC_0(VAR_23);
 return (VAR_29);
}
