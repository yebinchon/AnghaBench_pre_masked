
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct fsl_sata_channel {scalar_t__ toslots; int devices; int sim; int r_mem; int dev; int path; scalar_t__ fatalerr; scalar_t__ eslots; int numhslots; union ccb** hold; TYPE_2__* slot; union ccb* frozen; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct fsl_sata_channel*) ;
 int FUNC_7 (struct fsl_sata_channel*) ;
 scalar_t__ FUNC_8 (struct fsl_sata_channel*,int ,int,int,int) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(struct fsl_sata_channel *VAR_17)
{
 uint32_t VAR_18;
 int VAR_19;

 FUNC_11(VAR_17->sim, 1);
 if (VAR_16)
  FUNC_3(VAR_17->dev, "FSL SATA reset...\n");


 if (VAR_17->frozen) {
  union ccb *VAR_20 = VAR_17->frozen;
  VAR_17->frozen = ((void*)0);
  VAR_20->ccb_h.status = VAR_3 | VAR_2;
  if (!(VAR_20->ccb_h.status & VAR_1)) {
   FUNC_10(VAR_20->ccb_h.path, 1);
   VAR_20->ccb_h.status |= VAR_1;
  }
  FUNC_4(VAR_17, VAR_20);
 }

 FUNC_7(VAR_17);
 FUNC_2(1000);
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {

  if (VAR_17->slot[VAR_19].state < VAR_14)
   continue;

  FUNC_5(&VAR_17->slot[VAR_19], VAR_4);
 }
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  if (!VAR_17->hold[VAR_19])
   continue;
  FUNC_4(VAR_17, VAR_17->hold[VAR_19]);
  VAR_17->hold[VAR_19] = ((void*)0);
  VAR_17->numhslots--;
 }
 if (VAR_17->toslots != 0)
  FUNC_12(VAR_17->sim, VAR_15);
 VAR_17->eslots = 0;
 VAR_17->toslots = 0;
 VAR_17->fatalerr = 0;

 FUNC_9(VAR_0, VAR_17->path, ((void*)0));

 FUNC_1(VAR_17->r_mem, VAR_6,
     FUNC_0(VAR_17->r_mem, VAR_6) & ~0x3f);

 FUNC_6(VAR_17);
 if (FUNC_8(VAR_17, VAR_13, 0x08, 0x08, 500)) {
  if (VAR_16)
   FUNC_3(VAR_17->dev,
       "FSL SATA reset: device not found\n");
  VAR_17->devices = 0;

  FUNC_1(VAR_17->r_mem, VAR_6,
      FUNC_0(VAR_17->r_mem, VAR_6) | VAR_10);
  FUNC_12(VAR_17->sim, VAR_15);
  return;
 }
 if (VAR_16)
  FUNC_3(VAR_17->dev, "FSL SATA reset: device found\n");
 VAR_17->devices = 1;

 VAR_18 = FUNC_0(VAR_17->r_mem, VAR_6) & ~0x3f;
 FUNC_1(VAR_17->r_mem, VAR_6,
     VAR_18 | VAR_9 | VAR_10 |
     VAR_11 | VAR_12 |
     VAR_8 | VAR_7);
 FUNC_12(VAR_17->sim, VAR_15);
}
