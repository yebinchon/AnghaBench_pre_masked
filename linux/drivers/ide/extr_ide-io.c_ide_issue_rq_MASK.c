
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct request {int rq_flags; int queuelist; } ;
struct ide_host {int host_flags; TYPE_2__* cur_port; } ;
typedef scalar_t__ ide_startstop_t ;
struct TYPE_14__ {int lock; struct request* rq; TYPE_3__* cur_dev; struct ide_host* host; TYPE_1__* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_15__ {int dev_flags; int rq_list; int sleep; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
typedef int blk_status_t ;
struct TYPE_17__ {int * special; } ;
struct TYPE_16__ {int resid_len; } ;
struct TYPE_13__ {int (* write_devctl ) (TYPE_2__*,int) ;} ;


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
 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct ide_host*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_9__* FUNC_6 (struct request*) ;
 int FUNC_7 (TYPE_3__*,struct request*) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (struct ide_host*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 TYPE_6__* FUNC_12 (struct request*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (TYPE_3__*,struct request*) ;
 int FUNC_16 (TYPE_2__*,int) ;
 scalar_t__ FUNC_17 (int ,int ) ;

blk_status_t FUNC_18(ide_drive_t *VAR_13, struct request *VAR_14,
     bool VAR_15)
{
 ide_hwif_t *VAR_16 = VAR_13->hwif;
 struct ide_host *VAR_17 = VAR_16->host;
 ide_startstop_t VAR_18;

 if (!FUNC_3(VAR_14) && !(VAR_14->rq_flags & VAR_9)) {
  VAR_14->rq_flags |= VAR_9;
  FUNC_6(VAR_14)->special = ((void*)0);
 }


 FUNC_11();

 if (FUNC_4(VAR_17, VAR_16))
  return VAR_2;

 FUNC_13(&VAR_16->lock);

 if (!FUNC_5(VAR_16)) {
  ide_hwif_t *VAR_19;

  FUNC_0(VAR_16->rq);
repeat:
  VAR_19 = VAR_16->host->cur_port;
  if (VAR_13->dev_flags & VAR_7 &&
      FUNC_17(VAR_13->sleep, VAR_12)) {
   FUNC_9(VAR_16);
   goto plug_device;
  }

  if ((VAR_16->host->host_flags & VAR_8) &&
      VAR_16 != VAR_19) {
   ide_drive_t *VAR_20 =
    VAR_19 ? VAR_19->cur_dev : ((void*)0);





   if (VAR_20 &&
       (VAR_20->dev_flags & VAR_5) == 0)
    VAR_19->tp_ops->write_devctl(VAR_19,
        VAR_1 |
        VAR_0);

   VAR_16->host->cur_port = VAR_16;
  }
  VAR_16->cur_dev = VAR_13;
  VAR_13->dev_flags &= ~(VAR_7 | VAR_6);
  if ((VAR_13->dev_flags & VAR_4) &&
      FUNC_1(VAR_14) == 0 &&
      (VAR_14->rq_flags & VAR_10) == 0) {

   FUNC_9(VAR_16);
   goto plug_device;
  }

  FUNC_12(VAR_14)->resid_len = FUNC_2(VAR_14);
  VAR_16->rq = VAR_14;

  FUNC_14(&VAR_16->lock);
  VAR_18 = FUNC_15(VAR_13, VAR_14);
  FUNC_13(&VAR_16->lock);

  if (VAR_18 == VAR_11) {
   VAR_14 = VAR_16->rq;
   VAR_16->rq = ((void*)0);
   if (VAR_14)
    goto repeat;
   FUNC_9(VAR_16);
   goto out;
  }
 } else {
plug_device:
  if (VAR_15)
   FUNC_10(&VAR_14->queuelist, &VAR_13->rq_list);
  FUNC_14(&VAR_16->lock);
  FUNC_8(VAR_17);
  if (!VAR_15)
   FUNC_7(VAR_13, VAR_14);
  return VAR_3;
 }

out:
 FUNC_14(&VAR_16->lock);
 if (VAR_14 == ((void*)0))
  FUNC_8(VAR_17);
 return VAR_3;
}
