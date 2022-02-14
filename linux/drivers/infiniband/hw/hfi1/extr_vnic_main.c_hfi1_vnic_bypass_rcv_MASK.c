
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int data; } ;
struct hfi1_vnic_vport_info {TYPE_4__* stats; int netdev; struct hfi1_vnic_rx_queue* rxq; } ;
struct hfi1_vnic_rx_queue {int napi; int skbq; } ;
struct hfi1_packet {int tlen; int ebuf; TYPE_2__* rcd; } ;
struct TYPE_5__ {int vesws; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;
struct TYPE_7__ {int rx_fifo_errors; int rx_nohandler; } ;
struct TYPE_8__ {TYPE_3__ netstats; int rx_drop_state; } ;
struct TYPE_6__ {size_t vnic_q_idx; int ctxt; struct hfi1_devdata* dd; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hfi1_devdata*,char*,int,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (char*,size_t) ;
 int VAR_4 ;
 struct hfi1_vnic_vport_info* FUNC_17 (int *,unsigned long*,int ,int ) ;
 struct hfi1_vnic_vport_info* FUNC_18 (int *,int) ;

void FUNC_19(struct hfi1_packet *VAR_5)
{
 struct hfi1_devdata *VAR_6 = VAR_5->rcd->dd;
 struct hfi1_vnic_vport_info *VAR_7 = ((void*)0);
 struct hfi1_vnic_rx_queue *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11 = -1;
 u8 VAR_12;

 VAR_10 = FUNC_3(VAR_5->ebuf);
 if (FUNC_4(VAR_10 == VAR_1)) {
  VAR_11 = FUNC_0(VAR_5->ebuf);
  VAR_7 = FUNC_18(&VAR_6->vnic.vesws, VAR_11);





  if (FUNC_15(!VAR_7)) {
   struct hfi1_vnic_vport_info *VAR_13;
   unsigned long VAR_14 = 0;

   VAR_13 = FUNC_17(&VAR_6->vnic.vesws, &VAR_14, VAR_2,
     VAR_3);
   if (VAR_13) {
    FUNC_13(&VAR_4);
    VAR_13->stats[0].netstats.rx_nohandler++;
    FUNC_14(&VAR_4);
   }
  }
 }

 if (FUNC_15(!VAR_7)) {
  FUNC_2(VAR_6, "vnic rcv err: l4 %d vesw id %d ctx %d\n",
       VAR_10, VAR_11, VAR_5->rcd->ctxt);
  return;
 }

 VAR_12 = VAR_5->rcd->vnic_q_idx;
 VAR_8 = &VAR_7->rxq[VAR_12];
 if (FUNC_15(!FUNC_8(VAR_7->netdev))) {
  VAR_7->stats[VAR_12].rx_drop_state++;
  FUNC_11(&VAR_8->skbq);
  return;
 }

 if (FUNC_15(FUNC_10(&VAR_8->skbq) > VAR_0)) {
  VAR_7->stats[VAR_12].netstats.rx_fifo_errors++;
  return;
 }

 VAR_9 = FUNC_7(VAR_7->netdev, VAR_5->tlen);
 if (FUNC_15(!VAR_9)) {
  VAR_7->stats[VAR_12].netstats.rx_fifo_errors++;
  return;
 }

 FUNC_5(VAR_9->data, VAR_5->ebuf, VAR_5->tlen);
 FUNC_9(VAR_9, VAR_5->tlen);
 FUNC_12(&VAR_8->skbq, VAR_9);

 if (FUNC_6(&VAR_8->napi)) {
  FUNC_16("napi %d scheduling\n", VAR_12);
  FUNC_1(&VAR_8->napi);
 }
}
