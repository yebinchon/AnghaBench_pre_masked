
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct qxl_ring_header {int cons; int prod; int notify_on_prod; } ;
struct qxl_ring {int n_elements; int element_size; int lock; TYPE_1__* ring; } ;
struct TYPE_2__ {int * elements; struct qxl_ring_header header; } ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct qxl_ring *VAR_0,
    void *VAR_1)
{
 volatile struct qxl_ring_header *VAR_2 = &(VAR_0->ring->header);
 volatile uint8_t *VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0->lock, VAR_5);
 if (VAR_2->cons == VAR_2->prod) {
  VAR_2->notify_on_prod = VAR_2->cons + 1;
  FUNC_2(&VAR_0->lock, VAR_5);
  return 0;
 }

 VAR_4 = VAR_2->cons & (VAR_0->n_elements - 1);
 VAR_3 = VAR_0->ring->elements + VAR_4 * VAR_0->element_size;

 FUNC_0(VAR_1, (void *)VAR_3, VAR_0->element_size);

 VAR_2->cons++;

 FUNC_2(&VAR_0->lock, VAR_5);
 return 1;
}
