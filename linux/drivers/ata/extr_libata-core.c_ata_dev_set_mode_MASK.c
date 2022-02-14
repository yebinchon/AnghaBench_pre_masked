
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_port {int flags; } ;
struct TYPE_4__ {int flags; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct ata_device {int horkage; scalar_t__ xfer_shift; int* id; scalar_t__ pio_mode; scalar_t__ dma_mode; scalar_t__ xfer_mode; int flags; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; struct ata_port* ap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct ata_device*,char*,unsigned int) ;
 int FUNC_2 (struct ata_device*,char*,int ,char const*) ;
 int FUNC_3 (struct ata_device*,int ,int ) ;
 unsigned int FUNC_4 (struct ata_device*) ;
 int FUNC_5 (struct ata_device*,char*) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct ata_device *VAR_13)
{
 struct ata_port *VAR_14 = VAR_13->link->ap;
 struct ata_eh_context *VAR_15 = &VAR_13->link->eh_context;
 const bool VAR_16 = VAR_13->horkage & VAR_7;
 const char *VAR_17 = "";
 int VAR_18 = 0;
 unsigned int VAR_19 = 0;
 int VAR_20;

 VAR_13->flags &= ~VAR_2;
 if (VAR_13->xfer_shift == VAR_9)
  VAR_13->flags |= VAR_2;

 if (VAR_16 && VAR_14->flags & VAR_6 && FUNC_8(VAR_13->id))
  VAR_17 = " (SET_XFERMODE skipped)";
 else {
  if (VAR_16)
   FUNC_5(VAR_13,
         "NOSETXFER but PATA detected - can't "
         "skip SETXFER, might malfunction\n");
  VAR_19 = FUNC_4(VAR_13);
 }

 if (VAR_19 & ~VAR_0)
  goto fail;


 VAR_15->i.flags |= VAR_4;
 VAR_20 = FUNC_3(VAR_13, VAR_1, 0);
 VAR_15->i.flags &= ~VAR_4;
 if (VAR_20)
  return VAR_20;

 if (VAR_13->xfer_shift == VAR_9) {

  if (FUNC_7(VAR_13->id))
   VAR_18 = 1;


  if (FUNC_9(VAR_13->id) == 0 &&
     VAR_13->pio_mode <= VAR_12)
   VAR_18 = 1;



  if (!FUNC_6(VAR_13->id) && VAR_13->pio_mode <= VAR_12)
   VAR_18 = 1;
 }


 if (VAR_13->xfer_shift == VAR_8 &&
     VAR_13->dma_mode == VAR_11 &&
     (VAR_13->id[63] >> 8) & 1)
  VAR_18 = 1;


 if (VAR_13->xfer_mode == FUNC_12(FUNC_10(VAR_13->id)))
  VAR_18 = 1;

 if (VAR_19 & VAR_0) {
  if (!VAR_18)
   goto fail;
  else
   VAR_17 = " (device error ignored)";
 }

 FUNC_0("xfer_shift=%u, xfer_mode=0x%x\n",
  VAR_13->xfer_shift, (int)VAR_13->xfer_mode);

 if (!(VAR_15->i.flags & VAR_5) ||
     VAR_15->i.flags & VAR_3)
  FUNC_2(VAR_13, "configured for %s%s\n",
        FUNC_11(FUNC_13(VAR_13->xfer_mode)),
        VAR_17);

 return 0;

 fail:
 FUNC_1(VAR_13, "failed to set xfermode (err_mask=0x%x)\n", VAR_19);
 return -VAR_10;
}
