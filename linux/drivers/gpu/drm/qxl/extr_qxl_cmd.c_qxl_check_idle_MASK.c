
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_ring_header {scalar_t__ prod; scalar_t__ cons; } ;
struct qxl_ring {int lock; TYPE_1__* ring; } ;
struct TYPE_2__ {struct qxl_ring_header header; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct qxl_ring *VAR_0)
{
 int VAR_1;
 struct qxl_ring_header *VAR_2 = &(VAR_0->ring->header);
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_1 = VAR_2->prod == VAR_2->cons;
 FUNC_1(&VAR_0->lock, VAR_3);
 return VAR_1;
}
