
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ata_taskfile {int command; int feature; } ;
struct TYPE_7__ {int feature; } ;
struct ata_queued_cmd {int err_mask; int flags; TYPE_3__* scsicmd; TYPE_2__ result_tf; TYPE_4__* dev; TYPE_1__* ap; } ;
struct TYPE_9__ {int class; } ;
struct TYPE_8__ {int sense_buffer; } ;
struct TYPE_6__ {int pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
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
 int FUNC_0 (struct ata_queued_cmd*,TYPE_3__*) ;
 unsigned int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_queued_cmd *VAR_24,
          const struct ata_taskfile *VAR_25)
{
 unsigned int VAR_26, VAR_27 = 0;
 u8 VAR_28 = VAR_25->command, VAR_29 = VAR_25->feature;

 if ((VAR_28 & (VAR_9 | VAR_12 | VAR_11)) != VAR_11) {
  VAR_24->err_mask |= VAR_2;
  return VAR_13;
 }

 if (VAR_28 & (VAR_14 | VAR_10)) {
  VAR_24->err_mask |= VAR_1;




  if (VAR_28 & VAR_10)
   VAR_28 &= ~VAR_20;
 } else {
  return 0;
 }

 switch (VAR_24->dev->class) {
 case 128:
  if (VAR_28 & VAR_20)
   FUNC_0(VAR_24, VAR_24->scsicmd);

 case 130:
  if (VAR_29 & VAR_15)
   VAR_24->err_mask |= VAR_0;
  if (VAR_29 & (VAR_21 | VAR_8))
   VAR_24->err_mask |= VAR_4;
  if (VAR_29 & VAR_16)
   VAR_24->err_mask |= VAR_3;
  break;

 case 129:
  if (!(VAR_24->ap->pflags & VAR_17)) {
   VAR_26 = FUNC_1(VAR_24->dev,
      VAR_24->scsicmd->sense_buffer,
      VAR_24->result_tf.feature >> 4);
   if (!VAR_26)
    VAR_24->flags |= VAR_19;
   else
    VAR_24->err_mask |= VAR_26;
  }
 }

 if (VAR_24->flags & VAR_19) {
  int VAR_30 = FUNC_2(VAR_24->scsicmd);
  if (VAR_30 == VAR_22 || VAR_30 == VAR_7) {
   VAR_24->flags |= VAR_18;
   VAR_24->err_mask |= VAR_5;
  } else if (VAR_30 != VAR_23) {
   VAR_24->err_mask |= VAR_2;
  }
 }
 if (VAR_24->err_mask & (VAR_2 | VAR_6 | VAR_0))
  VAR_27 |= VAR_13;

 return VAR_27;
}
