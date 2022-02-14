
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int drop_bytes; int drop; int pkts; int bytes; } ;
struct port_des {TYPE_1__ ctr; struct overflow_queue* oq; struct netmap_ring* ring; } ;
struct overflow_queue {size_t n; } ;
struct netmap_slot {size_t ptr; size_t buf_idx; scalar_t__ len; int flags; } ;
struct netmap_ring {size_t head; size_t tail; struct netmap_slot* slot; } ;
struct group_des {size_t nports; struct port_des* ports; } ;
struct TYPE_6__ {size_t output_rings; } ;
struct TYPE_5__ {int name; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*,size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct overflow_queue* VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 size_t FUNC_1 (struct netmap_ring*,size_t) ;
 struct netmap_slot FUNC_2 (struct overflow_queue*) ;
 scalar_t__ FUNC_3 (struct overflow_queue*) ;
 int FUNC_4 (struct overflow_queue*,struct netmap_slot*) ;
 scalar_t__ FUNC_5 (struct overflow_queue*) ;
 struct port_des* VAR_7 ;

uint32_t FUNC_6(struct group_des *VAR_8, struct netmap_slot *VAR_9)
{
 uint32_t VAR_10 = VAR_9->ptr;
 uint32_t VAR_11 = VAR_10 % VAR_8->nports;
 struct port_des *VAR_12 = &VAR_8->ports[VAR_11];
 struct netmap_ring *VAR_13 = VAR_12->ring;
 struct overflow_queue *VAR_14 = VAR_12->oq;






 if (VAR_13->head != VAR_13->tail && (VAR_14 == ((void*)0) || FUNC_3(VAR_14))) {
  struct netmap_slot *VAR_15 = &VAR_13->slot[VAR_13->head];
  struct netmap_slot VAR_16 = *VAR_15;

  VAR_15->buf_idx = VAR_9->buf_idx;
  VAR_15->len = VAR_9->len;
  VAR_15->flags |= VAR_1;
  VAR_15->ptr = VAR_9->ptr;
  VAR_13->head = FUNC_1(VAR_13, VAR_13->head);
  VAR_12->ctr.bytes += VAR_9->len;
  VAR_12->ctr.pkts++;
  VAR_3++;
  return VAR_16.buf_idx;
 }


 if (VAR_14 == ((void*)0) || FUNC_5(VAR_14)) {



  VAR_2++;
  VAR_12->ctr.drop++;
  VAR_12->ctr.drop_bytes += VAR_9->len;
  return VAR_9->buf_idx;
 }

 FUNC_4(VAR_14, VAR_9);





 if (FUNC_3(VAR_4)) {



  uint32_t VAR_17;
  struct port_des *VAR_18 = &VAR_7[0];
  uint32_t VAR_19 = VAR_18->oq->n;


  for (VAR_17 = 1; VAR_17 < VAR_5.output_rings; VAR_17++) {
   struct port_des *VAR_20 = &VAR_7[VAR_17];
   if (VAR_20->oq->n > VAR_19) {
    VAR_18 = VAR_20;
    VAR_19 = VAR_20->oq->n;
   }
  }





  for (VAR_17 = 0; VAR_18->oq->n && VAR_17 < VAR_0; VAR_17++) {
   struct netmap_slot VAR_21 = FUNC_2(VAR_18->oq);

   VAR_2++;
   VAR_18->ctr.drop++;
   VAR_18->ctr.drop_bytes += VAR_21.len;

   FUNC_4(VAR_4, &VAR_21);
  }

  FUNC_0(1, "revoked %d buffers from %s", VAR_17, VAR_6->name);
 }

 return FUNC_2(VAR_4).buf_idx;
}
