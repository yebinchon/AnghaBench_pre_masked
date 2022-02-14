
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
struct ide_tp_ops {int (* exec_command ) (TYPE_3__*,int ) ;int (* tf_load ) (TYPE_4__*,struct ide_taskfile*,int) ;int (* output_data ) (TYPE_4__*,struct ide_cmd*,int*,int) ;int (* write_devctl ) (TYPE_3__*,int ) ;} ;
struct ide_taskfile {int data; int device; int command; } ;
struct ide_dma_ops {int (* dma_start ) (TYPE_4__*) ;int dma_timer_expiry; } ;
struct TYPE_15__ {int tf; int hob; } ;
struct TYPE_16__ {TYPE_1__ out; } ;
struct ide_cmd {scalar_t__ protocol; int tf_flags; int ftf_flags; TYPE_2__ valid; struct ide_taskfile tf; struct ide_taskfile hob; } ;
typedef int ide_startstop_t ;
struct TYPE_17__ {int expiry; struct ide_dma_ops* dma_ops; struct ide_tp_ops* tp_ops; struct ide_cmd cmd; } ;
typedef TYPE_3__ ide_hwif_t ;
typedef int ide_handler_t ;
struct TYPE_18__ {scalar_t__ mult_count; int select; int name; TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;


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
 int * VAR_11 ;
 int FUNC_0 (TYPE_4__*,struct ide_cmd*) ;
 int FUNC_1 (TYPE_4__*,struct ide_cmd*,int *,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,struct ide_cmd*) ;
 int FUNC_3 (struct ide_cmd*,struct ide_cmd*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_4__*,struct ide_cmd*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_4__*,struct ide_cmd*,int*,int) ;
 int FUNC_9 (TYPE_4__*,struct ide_taskfile*,int) ;
 int FUNC_10 (TYPE_4__*,struct ide_taskfile*,int) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int * VAR_14 ;
 int * VAR_15 ;

ide_startstop_t FUNC_13(ide_drive_t *VAR_16, struct ide_cmd *VAR_17)
{
 ide_hwif_t *VAR_18 = VAR_16->hwif;
 struct ide_cmd *VAR_19 = &VAR_18->cmd;
 struct ide_taskfile *VAR_20 = &VAR_19->tf;
 ide_handler_t *VAR_21 = ((void*)0);
 const struct ide_tp_ops *VAR_22 = VAR_18->tp_ops;
 const struct ide_dma_ops *VAR_23 = VAR_18->dma_ops;

 if (VAR_17->protocol == 128 &&
     (VAR_17->tf_flags & VAR_6) &&
     VAR_16->mult_count == 0) {
  FUNC_5("%s: multimode not set!\n", VAR_16->name);
  return VAR_13;
 }

 if (VAR_17->ftf_flags & VAR_1)
  VAR_17->ftf_flags |= VAR_3;

 FUNC_3(VAR_19, VAR_17, sizeof(*VAR_19));

 if ((VAR_19->tf_flags & VAR_4) == 0) {
  FUNC_2(VAR_16->name, VAR_19);
  VAR_22->write_devctl(VAR_18, VAR_0);

  if (VAR_19->ftf_flags & VAR_2) {
   u8 VAR_24[2] = { VAR_19->tf.data, VAR_19->hob.data };

   VAR_22->output_data(VAR_16, VAR_19, VAR_24, 2);
  }

  if (VAR_19->valid.out.tf & VAR_8) {
   u8 VAR_25 = (VAR_19->tf_flags & VAR_5) ?
      0xE0 : 0xEF;

   if (!(VAR_19->ftf_flags & VAR_1))
    VAR_19->tf.device &= VAR_25;
   VAR_19->tf.device |= VAR_16->select;
  }

  VAR_22->tf_load(VAR_16, &VAR_19->hob, VAR_19->valid.out.hob);
  VAR_22->tf_load(VAR_16, &VAR_19->tf, VAR_19->valid.out.tf);
 }

 switch (VAR_19->protocol) {
 case 128:
  if (VAR_19->tf_flags & VAR_7) {
   VAR_22->exec_command(VAR_18, VAR_20->command);
   FUNC_4(400);
   return FUNC_6(VAR_16, VAR_19);
  }
  VAR_21 = VAR_15;

 case 129:
  if (VAR_21 == ((void*)0))
   VAR_21 = VAR_14;
  FUNC_1(VAR_16, VAR_19, VAR_21, VAR_10);
  return VAR_12;
 case 130:
  if (FUNC_0(VAR_16, VAR_19))
   return VAR_13;
  VAR_18->expiry = VAR_23->dma_timer_expiry;
  FUNC_1(VAR_16, VAR_19, VAR_11, 2 * VAR_9);
  VAR_23->dma_start(VAR_16);

 default:
  return VAR_12;
 }
}
