
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct fsl_sata_channel {scalar_t__ aslots; TYPE_4__* slot; union ccb* frozen; int r_mem; } ;
typedef enum fsl_sata_err_type { ____Placeholder_fsl_sata_err_type } fsl_sata_err_type ;
struct TYPE_8__ {TYPE_3__* ccb; } ;
struct TYPE_6__ {int target_id; } ;
struct TYPE_7__ {TYPE_2__ ccb_h; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
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
 int FUNC_2 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct fsl_sata_channel*,int) ;
 int FUNC_5 (struct fsl_sata_channel*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct fsl_sata_channel *VAR_17, uint32_t VAR_18)
{
 uint32_t VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 0, VAR_23, VAR_24;
 enum fsl_sata_err_type VAR_25;
 int VAR_26;


 VAR_23 = FUNC_0(VAR_17->r_mem, VAR_8);

 FUNC_1(VAR_17->r_mem, VAR_8, VAR_23);
 if (VAR_17->aslots == 0 && VAR_23 != 0) {
  for (VAR_26 = 0; VAR_26 < VAR_7; VAR_26++) {
   if (((VAR_23 >> VAR_26) & 1) && VAR_17->slot[VAR_26].ccb != ((void*)0))
    FUNC_3(&VAR_17->slot[VAR_26],
        VAR_4);
  }
 }

 if (VAR_18 & VAR_14)
  VAR_22 = FUNC_0(VAR_17->r_mem, VAR_16);

 VAR_21 = FUNC_0(VAR_17->r_mem, VAR_15);
 FUNC_1(VAR_17->r_mem, VAR_15, VAR_21);
 if (VAR_18 & (VAR_13)) {
  if (VAR_21) {
   FUNC_5(VAR_17, VAR_21);
  }
 }

 VAR_24 = (VAR_18 & (VAR_12 | VAR_11));
 VAR_19 = FUNC_0(VAR_17->r_mem, VAR_9);
 FUNC_1(VAR_17->r_mem, VAR_9, VAR_19);
 VAR_20 = FUNC_0(VAR_17->r_mem, VAR_10);
 FUNC_1(VAR_17->r_mem, VAR_10, VAR_20);

 if (VAR_24) {
  if (VAR_17->frozen) {
   union ccb *VAR_27 = VAR_17->frozen;
   VAR_17->frozen = ((void*)0);
   VAR_27->ccb_h.status = VAR_2 | VAR_1;
   if (!(VAR_27->ccb_h.status & VAR_0)) {
    FUNC_6(VAR_27->ccb_h.path, 1);
    VAR_27->ccb_h.status |= VAR_0;
   }
   FUNC_2(VAR_17, VAR_27);
  }
  for (VAR_26 = 0; VAR_26 < VAR_7; VAR_26++) {
   if (VAR_17->slot[VAR_26].ccb == ((void*)0))
    continue;
   if ((VAR_19 & (1 << VAR_26)) != 0)
    VAR_25 = VAR_6;
   else if ((VAR_20 & (1 << VAR_17->slot[VAR_26].ccb->ccb_h.target_id)) != 0)
    VAR_25 = VAR_5;
   else
    VAR_25 = VAR_3;
   FUNC_3(&VAR_17->slot[VAR_26], VAR_25);
  }
 }

 if (VAR_22)
  FUNC_4(VAR_17, VAR_22);
}
