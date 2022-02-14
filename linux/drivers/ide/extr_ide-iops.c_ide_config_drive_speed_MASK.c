
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int tf ;
struct ide_tp_ops {int (* write_devctl ) (TYPE_2__*,int) ;int (* exec_command ) (TYPE_2__*,int ) ;int (* tf_load ) (TYPE_3__*,struct ide_taskfile*,int) ;int (* dev_select ) (TYPE_3__*) ;} ;
struct ide_taskfile {int nsect; int feature; } ;
struct TYPE_17__ {TYPE_1__* dma_ops; struct ide_tp_ops* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_18__ {int* id; int dev_flags; int init_speed; int current_speed; int ready_stat; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_16__ {int (* dma_host_set ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_3__*,int) ;
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
 int FUNC_1 (TYPE_3__*,int ,int,int ,int*) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (struct ide_taskfile*,int ,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_3__*,struct ide_taskfile*,int) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (int) ;

int FUNC_15(ide_drive_t *VAR_24, u8 VAR_25)
{
 ide_hwif_t *VAR_26 = VAR_24->hwif;
 const struct ide_tp_ops *VAR_27 = VAR_26->tp_ops;
 struct ide_taskfile VAR_28;
 u16 *VAR_29 = VAR_24->id, VAR_30;
 int VAR_31 = 0;
 u8 VAR_32;







 if ((VAR_25 & 0xf8) == VAR_19 && FUNC_2(VAR_24->id) == 0)
  goto skip;
 FUNC_14(1);
 VAR_27->dev_select(VAR_24);
 FUNC_0(VAR_24, 1);
 FUNC_14(1);
 VAR_27->write_devctl(VAR_26, VAR_9 | VAR_2);

 FUNC_6(&VAR_28, 0, sizeof(VAR_28));
 VAR_28.feature = VAR_14;
 VAR_28.nsect = VAR_25;

 VAR_27->tf_load(VAR_24, &VAR_28, VAR_12 | VAR_13);

 VAR_27->exec_command(VAR_26, VAR_1);

 if (VAR_24->dev_flags & VAR_10)
  VAR_27->write_devctl(VAR_26, VAR_2);

 VAR_31 = FUNC_1(VAR_24, VAR_24->ready_stat,
    VAR_0 | VAR_3 | VAR_4,
    VAR_15, &VAR_32);

 FUNC_0(VAR_24, 0);

 if (VAR_31) {
  (void) FUNC_5(VAR_24, "set_drive_speed_status", VAR_32);
  return VAR_31;
 }

 if (VAR_25 >= VAR_22) {
  VAR_29[VAR_8] &= ~0xFF00;
  VAR_29[VAR_6] &= ~0x0700;
  VAR_29[VAR_7] &= ~0x0700;
  if (FUNC_3(VAR_29))
   VAR_29[VAR_5] &= ~0x0E00;
 } else if (FUNC_3(VAR_29))
  VAR_29[VAR_5] &= ~0x01C0;

 skip:







 if (VAR_25 >= VAR_23) {
  VAR_30 = 1 << (VAR_25 - VAR_23);
  VAR_29[VAR_8] |= (VAR_30 << 8 | VAR_30);
 } else if (FUNC_3(VAR_29) && VAR_25 >= VAR_18) {
  VAR_30 = VAR_25 - VAR_17;
  VAR_29[VAR_5] |= VAR_30 << 9;
 } else if (VAR_25 >= VAR_16) {
  VAR_30 = 1 << (VAR_25 - VAR_16);
  VAR_29[VAR_6] |= (VAR_30 << 8 | VAR_30);
 } else if (VAR_25 >= VAR_22) {
  VAR_30 = 1 << (VAR_25 - VAR_22);
  VAR_29[VAR_7] |= (VAR_30 << 8 | VAR_30);
 } else if (FUNC_3(VAR_29) && VAR_25 >= VAR_21) {
  VAR_30 = VAR_25 - VAR_20;
  VAR_29[VAR_5] |= VAR_30 << 6;
 }

 if (!VAR_24->init_speed)
  VAR_24->init_speed = VAR_25;
 VAR_24->current_speed = VAR_25;
 return VAR_31;
}
