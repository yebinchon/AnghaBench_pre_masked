
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtx {int dummy; } ;
struct fsl_sata_channel {intptr_t unit; int pm_level; int mtx; void* r_mem; void* r_irq; int * sim; int pm_timer; int path; int ih; TYPE_1__* user; TYPE_1__* curr; int doneq; int dev; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int revision; int bytecount; int caps; int tags; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_0 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int ,int,void*) ;
 scalar_t__ FUNC_3 (int ,void*,int ,int *,int ,struct fsl_sata_channel*,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int,int ,struct fsl_sata_channel*) ;
 int * FUNC_6 (int ,int ,char*,struct fsl_sata_channel*,int ,struct mtx*,int,int ,struct cam_devq*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 struct cam_devq* FUNC_9 (int ) ;
 int FUNC_10 (struct cam_devq*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct fsl_sata_channel* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_18 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ,char*,int*) ;
 int FUNC_24 (void*,int *) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int *,int ,int ) ;
 scalar_t__ FUNC_27 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_24)
{
 struct fsl_sata_channel *VAR_25 = FUNC_13(VAR_24);
 struct cam_devq *VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30 = 0;

 VAR_25->dev = VAR_24;
 VAR_25->unit = (intptr_t)FUNC_11(VAR_24);
 FUNC_20(&VAR_25->mtx, "FSL SATA channel lock", ((void*)0), VAR_12);
 VAR_25->pm_level = 0;
 FUNC_23(FUNC_12(VAR_24),
     FUNC_14(VAR_24), "pm_level", &VAR_25->pm_level);
 FUNC_0(&VAR_25->doneq);
 if (VAR_25->pm_level > 3)
  FUNC_4(&VAR_25->pm_timer, &VAR_25->mtx, 0);
 FUNC_23(FUNC_12(VAR_24),
     FUNC_14(VAR_24), "sata_rev", &VAR_30);
 for (VAR_29 = 0; VAR_29 < 16; VAR_29++) {
  VAR_25->user[VAR_29].revision = VAR_30;
  VAR_25->user[VAR_29].mode = 0;
  VAR_25->user[VAR_29].bytecount = 8192;
  VAR_25->user[VAR_29].tags = VAR_11;
  VAR_25->user[VAR_29].caps = 0;
  VAR_25->curr[VAR_29] = VAR_25->user[VAR_29];
  if (VAR_25->pm_level) {
   VAR_25->user[VAR_29].caps = VAR_8 |
       VAR_6;
  }
  VAR_25->user[VAR_29].caps |= VAR_7;
 }
 VAR_27 = 0;
 if (!(VAR_25->r_mem = FUNC_1(VAR_24, VAR_16,
     &VAR_27, VAR_13)))
  return (VAR_10);
 FUNC_24(VAR_25->r_mem, &VAR_18);
 FUNC_16(VAR_24);
 FUNC_18(VAR_24);
 FUNC_17(VAR_24);
 VAR_27 = VAR_1;
 if (!(VAR_25->r_irq = FUNC_1(VAR_24, VAR_15,
     &VAR_27, VAR_14 | VAR_13))) {
  FUNC_15(VAR_24, "Unable to map interrupt\n");
  VAR_28 = VAR_10;
  goto err0;
 }
 if ((FUNC_3(VAR_24, VAR_25->r_irq, VAR_0, ((void*)0),
     VAR_19, VAR_25, &VAR_25->ih))) {
  FUNC_15(VAR_24, "Unable to setup interrupt\n");
  VAR_28 = VAR_10;
  goto err1;
 }
 FUNC_21(&VAR_25->mtx);

 VAR_26 = FUNC_9(VAR_11);
 if (VAR_26 == ((void*)0)) {
  FUNC_15(VAR_24, "Unable to allocate simq\n");
  VAR_28 = VAR_9;
  goto err1;
 }

 VAR_25->sim = FUNC_6(VAR_21, VAR_22, "fslsata", VAR_25,
     FUNC_14(VAR_24), (struct mtx *)&VAR_25->mtx, 2, VAR_11,
     VAR_26);
 if (VAR_25->sim == ((void*)0)) {
  FUNC_10(VAR_26);
  FUNC_15(VAR_24, "unable to allocate sim\n");
  VAR_28 = VAR_9;
  goto err1;
 }
 if (FUNC_26(VAR_25->sim, VAR_24, 0) != VAR_4) {
  FUNC_15(VAR_24, "unable to register xpt bus\n");
  VAR_28 = VAR_10;
  goto err2;
 }
 if (FUNC_27(&VAR_25->path, ((void*)0), FUNC_8(VAR_25->sim),
     VAR_5, VAR_2) != VAR_3) {
  FUNC_15(VAR_24, "unable to create path\n");
  VAR_28 = VAR_10;
  goto err3;
 }
 if (VAR_25->pm_level > 3) {
  FUNC_5(&VAR_25->pm_timer,
      (VAR_25->pm_level == 4) ? VAR_23 / 1000 : VAR_23 / 8,
      VAR_20, VAR_25);
 }
 FUNC_22(&VAR_25->mtx);
 return (0);

err3:
 FUNC_25(FUNC_8(VAR_25->sim));
err2:
 FUNC_7(VAR_25->sim, VAR_17);
err1:
 FUNC_22(&VAR_25->mtx);
 FUNC_2(VAR_24, VAR_15, VAR_1, VAR_25->r_irq);
err0:
 FUNC_2(VAR_24, VAR_16, VAR_25->unit, VAR_25->r_mem);
 FUNC_19(&VAR_25->mtx);
 return (VAR_28);
}
