
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct qxl_ring_header {int prod; scalar_t__ cons; scalar_t__ num_items; scalar_t__ notify_on_cons; int notify_on_prod; } ;
struct qxl_ring {int n_elements; int element_size; int lock; int prod_notify; TYPE_1__* ring; int * push_event; } ;
struct TYPE_2__ {int * elements; struct qxl_ring_header header; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void*,void const*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qxl_ring*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct qxl_ring *VAR_0,
    const void *VAR_1, bool VAR_2)
{
 struct qxl_ring_header *VAR_3 = &(VAR_0->ring->header);
 uint8_t *VAR_4;
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_5(&VAR_0->lock, VAR_7);
 if (VAR_3->prod - VAR_3->cons == VAR_3->num_items) {
  VAR_3->notify_on_cons = VAR_3->cons + 1;
  FUNC_1();
  FUNC_6(&VAR_0->lock, VAR_7);
  if (!FUNC_0()) {
   while (!FUNC_4(VAR_0))
    FUNC_7(1);
  } else {
   if (VAR_2) {
    VAR_6 = FUNC_9(*VAR_0->push_event,
              FUNC_4(VAR_0));
    if (VAR_6)
     return VAR_6;
   } else {
    FUNC_8(*VAR_0->push_event,
        FUNC_4(VAR_0));
   }

  }
  FUNC_5(&VAR_0->lock, VAR_7);
 }

 VAR_5 = VAR_3->prod & (VAR_0->n_elements - 1);
 VAR_4 = VAR_0->ring->elements + VAR_5 * VAR_0->element_size;

 FUNC_2((void *)VAR_4, VAR_1, VAR_0->element_size);

 VAR_3->prod++;

 FUNC_1();

 if (VAR_3->prod == VAR_3->notify_on_prod)
  FUNC_3(0, VAR_0->prod_notify);

 FUNC_6(&VAR_0->lock, VAR_7);
 return 0;
}
