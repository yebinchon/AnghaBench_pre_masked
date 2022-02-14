
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct opalflash_softc {int sc_erase; int sc_p; int sc_bio_queue; TYPE_1__* sc_disk; int sc_dev; void* sc_opal_id; } ;
typedef int regs ;
typedef int phandle_t ;
typedef int opal_id ;
typedef int flash_blocksize ;
typedef int device_t ;
typedef void* cell_t ;
struct TYPE_3__ {char* d_name; int * d_dump; void* d_stripesize; int d_sectorsize; int d_unit; void* d_mediasize; int d_maxsize; struct opalflash_softc* d_drv1; int d_getattr; int d_ioctl; int d_strategy; int d_close; int d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,void**,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct opalflash_softc*) ;
 int FUNC_3 (int *) ;
 struct opalflash_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,struct opalflash_softc*,int *,int ,int ,char*) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_10)
{
 struct opalflash_softc *VAR_11;
 phandle_t VAR_12;
 cell_t VAR_13, VAR_14;
 uint32_t VAR_15[2];

 VAR_11 = FUNC_4(VAR_10);
 VAR_11->sc_dev = VAR_10;

 VAR_12 = FUNC_10(VAR_10);
 FUNC_0(VAR_12, "ibm,opal-id", &VAR_14, sizeof(VAR_14));
 VAR_11->sc_opal_id = VAR_14;

 if (FUNC_0(VAR_12, "ibm,flash-block-size",
     &VAR_13, sizeof(VAR_13)) < 0) {
  FUNC_6(VAR_10, "Cannot determine flash block size.\n");
  return (VAR_2);
 }

 if (!FUNC_1(VAR_12, "no-erase"))
  VAR_11->sc_erase = 1;

 FUNC_2(VAR_11);

 if (FUNC_0(VAR_12, "reg", VAR_15, sizeof(VAR_15)) < 0) {
  FUNC_6(VAR_10, "Unable to get flash size.\n");
  return (VAR_2);
 }

 VAR_11->sc_disk = FUNC_7();
 VAR_11->sc_disk->d_name = "opalflash";
 VAR_11->sc_disk->d_open = VAR_7;
 VAR_11->sc_disk->d_close = VAR_4;
 VAR_11->sc_disk->d_strategy = VAR_8;
 VAR_11->sc_disk->d_ioctl = VAR_6;
 VAR_11->sc_disk->d_getattr = VAR_5;
 VAR_11->sc_disk->d_drv1 = VAR_11;
 VAR_11->sc_disk->d_maxsize = VAR_0;
 VAR_11->sc_disk->d_mediasize = VAR_15[1];
 VAR_11->sc_disk->d_unit = FUNC_5(VAR_11->sc_dev);
 VAR_11->sc_disk->d_sectorsize = VAR_3;
     VAR_11->sc_disk->d_stripesize = VAR_13;
 VAR_11->sc_disk->d_dump = ((void*)0);

 FUNC_8(VAR_11->sc_disk, VAR_1);
 FUNC_3(&VAR_11->sc_bio_queue);

 FUNC_9(&VAR_9, VAR_11, &VAR_11->sc_p, 0, 0, "task: OPAL Flash");

 return (0);
}
