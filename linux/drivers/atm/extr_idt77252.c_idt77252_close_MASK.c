
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int queue; } ;
struct TYPE_10__ {TYPE_5__ rx_pool; } ;
struct vc_map {unsigned long index; scalar_t__ class; size_t scd_index; TYPE_7__* scq; scalar_t__ ntste; int lock; TYPE_6__* estimator; int * tx_vcc; int flags; TYPE_2__ rcv; int * rx_vcc; } ;
struct idt77252_dev {unsigned long rct_base; int mutex; int ** scd2vc; int tst_free; int name; int cmd_lock; } ;
struct TYPE_11__ {scalar_t__ traffic_class; } ;
struct TYPE_9__ {scalar_t__ traffic_class; } ;
struct TYPE_12__ {TYPE_3__ txtp; TYPE_1__ rxtp; } ;
struct atm_vcc {int vci; TYPE_4__ qos; int flags; int vpi; struct vc_map* dev_data; struct atm_dev* dev; } ;
struct atm_dev {struct idt77252_dev* dev_data; } ;
struct TYPE_15__ {int used; } ;
struct TYPE_14__ {int timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,unsigned long,int ,int) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct idt77252_dev*,TYPE_7__*,scalar_t__) ;
 int FUNC_5 (struct idt77252_dev*,struct vc_map*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct idt77252_dev*,TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*) ;
 unsigned long FUNC_9 (unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ,scalar_t__) ;
 int FUNC_13 (struct idt77252_dev*,TYPE_5__*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct idt77252_dev*) ;
 int FUNC_18 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_19(struct atm_vcc *VAR_12)
{
 struct atm_dev *VAR_13 = VAR_12->dev;
 struct idt77252_dev *VAR_14 = VAR_13->dev_data;
 struct vc_map *VAR_15 = VAR_12->dev_data;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;

 FUNC_10(&VAR_14->mutex);

 FUNC_1("%s: idt77252_close: vc = %d (%d.%d)\n",
  VAR_14->name, VAR_15->index, VAR_12->vpi, VAR_12->vci);

 FUNC_3(VAR_1, &VAR_12->flags);

 if (VAR_12->qos.rxtp.traffic_class != VAR_0) {

  FUNC_15(&VAR_15->lock, VAR_16);
  FUNC_3(VAR_10, &VAR_15->flags);
  VAR_15->rx_vcc = ((void*)0);
  FUNC_16(&VAR_15->lock, VAR_16);

  if ((VAR_12->vci == 3) || (VAR_12->vci == 4))
   goto done;

  VAR_17 = VAR_14->rct_base + VAR_15->index * VAR_5;

  FUNC_15(&VAR_14->cmd_lock, VAR_16);
  FUNC_18(VAR_2 | (VAR_17 << 2), VAR_3);
  FUNC_17(VAR_14);
  FUNC_16(&VAR_14->cmd_lock, VAR_16);

  if (FUNC_14(&VAR_15->rcv.rx_pool.queue) != 0) {
   FUNC_0("%s: closing a VC with pending rx buffers.\n",
    VAR_14->name);

   FUNC_13(VAR_14, &VAR_15->rcv.rx_pool);
  }
 }

done:
 if (VAR_12->qos.txtp.traffic_class != VAR_0) {

  FUNC_15(&VAR_15->lock, VAR_16);
  FUNC_3(VAR_11, &VAR_15->flags);
  FUNC_3(VAR_8, &VAR_15->flags);
  FUNC_3(VAR_9, &VAR_15->flags);
  VAR_15->tx_vcc = ((void*)0);

  if (VAR_15->estimator) {
   FUNC_6(&VAR_15->estimator->timer);
   FUNC_8(VAR_15->estimator);
   VAR_15->estimator = ((void*)0);
  }
  FUNC_16(&VAR_15->lock, VAR_16);

  VAR_18 = 5 * 1000;
  while (FUNC_2(&VAR_15->scq->used) > 0) {
   VAR_18 = FUNC_9(VAR_18);
   if (!VAR_18) {
    FUNC_12("%s: SCQ drain timeout: %u used\n",
     VAR_14->name, FUNC_2(&VAR_15->scq->used));
    break;
   }
  }

  FUNC_18(VAR_7 | VAR_15->index, VAR_4);
  FUNC_4(VAR_14, VAR_15->scq, VAR_15->class);

  if (VAR_15->class == VAR_6) {
   FUNC_5(VAR_14, VAR_15);
   VAR_14->tst_free += VAR_15->ntste;
   VAR_15->ntste = 0;
  }

  VAR_14->scd2vc[VAR_15->scd_index] = ((void*)0);
  FUNC_7(VAR_14, VAR_15->scq);
 }

 FUNC_11(&VAR_14->mutex);
}
