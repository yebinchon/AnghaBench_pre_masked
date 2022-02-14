
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct ring {int dummy; } ;
struct qxl_ring_header {int dummy; } ;
struct qxl_ring {int element_size; int n_elements; int prod_notify; int lock; int * push_event; struct ring* ring; } ;


 int VAR_0 ;
 struct qxl_ring* FUNC_0 (int,int ) ;
 int FUNC_1 (struct qxl_ring*) ;
 int FUNC_2 (int *) ;

struct qxl_ring *
FUNC_3(struct qxl_ring_header *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  bool VAR_5,
  wait_queue_head_t *VAR_6)
{
 struct qxl_ring *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->ring = (struct ring *)VAR_1;
 VAR_7->element_size = VAR_2;
 VAR_7->n_elements = VAR_3;
 VAR_7->prod_notify = VAR_4;
 VAR_7->push_event = VAR_6;
 if (VAR_5)
  FUNC_1(VAR_7);
 FUNC_2(&VAR_7->lock);
 return VAR_7;
}
