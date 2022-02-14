
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct host_txq_entry {int* status; scalar_t__ incarn; int skb; struct fore200e_vc_map* vc_map; TYPE_2__* tpd; int data; } ;
struct host_txq {scalar_t__ txing; size_t tail; struct host_txq_entry* host_entry; } ;
struct fore200e_vc_map {scalar_t__ incarn; struct atm_vcc* vcc; } ;
struct fore200e {struct host_txq host_txq; TYPE_3__* atm_dev; int dev; } ;
struct atm_vcc {TYPE_4__* stats; int (* pop ) (struct atm_vcc*,int ) ;int flags; } ;
struct TYPE_8__ {int tx; int tx_err; } ;
struct TYPE_7__ {int number; } ;
struct TYPE_6__ {TYPE_1__* tsd; } ;
struct TYPE_5__ {int length; int buffer; } ;


 int FUNC_0 (struct atm_vcc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,struct host_txq_entry*,...) ;
 int FUNC_2 (size_t,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct atm_vcc*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct fore200e* VAR_6)
{
    struct host_txq* VAR_7 = &VAR_6->host_txq;
    struct host_txq_entry* VAR_8;
    struct atm_vcc* VAR_9;
    struct fore200e_vc_map* VAR_10;

    if (VAR_6->host_txq.txing == 0)
 return;

    for (;;) {

 VAR_8 = &VAR_7->host_entry[ VAR_7->tail ];

        if ((*VAR_8->status & VAR_3) == 0) {
     break;
 }

 FUNC_1(3, "TX COMPLETED: entry = %p [tail = %d], vc_map = %p, skb = %p\n",
  VAR_8, VAR_7->tail, VAR_8->vc_map, VAR_8->skb);


 FUNC_6(VAR_8->data);


 FUNC_5(VAR_6->dev, VAR_8->tpd->tsd[ 0 ].buffer, VAR_8->tpd->tsd[ 0 ].length,
     VAR_1);

 VAR_10 = VAR_8->vc_map;


 if ((VAR_10->vcc == ((void*)0)) ||
     (FUNC_8(VAR_0, &VAR_10->vcc->flags) == 0)) {

     FUNC_1(1, "no ready vcc found for PDU sent on device %d\n",
      VAR_6->atm_dev->number);

     FUNC_4(VAR_8->skb);
 }
 else {
     FUNC_0(VAR_10->vcc);


     if (VAR_10->incarn != VAR_8->incarn) {
  FUNC_1(1, "vcc closed-then-re-opened; dropping PDU sent on device %d\n",
   VAR_6->atm_dev->number);

  FUNC_4(VAR_8->skb);
     }
     else {
  VAR_9 = VAR_10->vcc;
  FUNC_0(VAR_9);


  if (VAR_9->pop) {
      VAR_9->pop(VAR_9, VAR_8->skb);
  }
  else {
      FUNC_4(VAR_8->skb);
  }


  if (*VAR_8->status & VAR_4)
      FUNC_3(&VAR_9->stats->tx_err);
  else
      FUNC_3(&VAR_9->stats->tx);
     }
 }

 *VAR_8->status = VAR_5;

 VAR_6->host_txq.txing--;

 FUNC_2(VAR_7->tail, VAR_2);
    }
}
