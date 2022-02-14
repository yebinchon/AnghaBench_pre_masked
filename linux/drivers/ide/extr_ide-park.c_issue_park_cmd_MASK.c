
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct TYPE_7__ {int lock; int timer; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {int dev_flags; unsigned long sleep; struct request_queue* queue; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_10__ {unsigned long* special; void* type; } ;
struct TYPE_9__ {int cmd_len; int * cmd; scalar_t__ result; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct request_queue*,int *,struct request*,int) ;
 struct request* FUNC_2 (struct request_queue*,int ,int ) ;
 int FUNC_3 (struct request_queue*,int) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,struct request*) ;
 int VAR_7 ;
 TYPE_5__* FUNC_7 (struct request*) ;
 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_8 (struct request*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned long,unsigned long) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(ide_drive_t *VAR_9, unsigned long VAR_10)
{
 ide_hwif_t *VAR_11 = VAR_9->hwif;
 struct request_queue *VAR_12 = VAR_9->queue;
 struct request *VAR_13;
 int VAR_14;

 VAR_10 += VAR_8;
 FUNC_9(&VAR_11->lock);
 if (VAR_9->dev_flags & VAR_3) {
  int VAR_15 = FUNC_11(VAR_10, VAR_9->sleep);
  int VAR_16 = 0;

  VAR_9->sleep = VAR_10;
  FUNC_12(&VAR_7);
  if (VAR_15 && FUNC_5(&VAR_11->timer))
   VAR_16 = 1;
  FUNC_10(&VAR_11->lock);

  if (VAR_16)
   FUNC_3(VAR_12, 1);
  return;
 }
 FUNC_10(&VAR_11->lock);

 VAR_13 = FUNC_2(VAR_12, VAR_4, 0);
 FUNC_8(VAR_13)->cmd[0] = VAR_5;
 FUNC_8(VAR_13)->cmd_len = 1;
 FUNC_7(VAR_13)->type = VAR_0;
 FUNC_7(VAR_13)->special = &VAR_10;
 FUNC_1(VAR_12, ((void*)0), VAR_13, 1);
 VAR_14 = FUNC_8(VAR_13)->result ? -VAR_2 : 0;
 FUNC_4(VAR_13);
 if (VAR_14)
  goto out;





 VAR_13 = FUNC_2(VAR_12, VAR_4, VAR_1);
 if (FUNC_0(VAR_13))
  goto out;

 FUNC_8(VAR_13)->cmd[0] = VAR_6;
 FUNC_8(VAR_13)->cmd_len = 1;
 FUNC_7(VAR_13)->type = VAR_0;
 FUNC_9(&VAR_11->lock);
 FUNC_6(VAR_9, VAR_13);
 FUNC_10(&VAR_11->lock);

out:
 return;
}
