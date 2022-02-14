
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct port_des {TYPE_2__* nmd; int ring; struct overflow_queue* oq; } ;
struct overflow_queue {scalar_t__ n; } ;
struct netmap_slot {int buf_idx; } ;
struct TYPE_6__ {size_t output_rings; } ;
struct TYPE_5__ {TYPE_1__* nifp; } ;
struct TYPE_4__ {int ni_bufs_head; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 struct netmap_slot FUNC_3 (struct overflow_queue*) ;
 struct port_des* VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_2, VAR_3 = 0;
 struct port_des *VAR_4 = &VAR_1[VAR_0.output_rings];


 for (VAR_2 = 0; VAR_2 < VAR_0.output_rings + 1; VAR_2++) {
  struct port_des *VAR_5 = &VAR_1[VAR_2];
  struct overflow_queue *VAR_6 = VAR_5->oq;

  if (!VAR_6)
   continue;

  while (VAR_6->n) {
   struct netmap_slot VAR_7 = FUNC_3(VAR_6);
   uint32_t *VAR_8 = (uint32_t *)FUNC_1(VAR_5->ring, VAR_7.buf_idx);

   *VAR_8 = VAR_4->nmd->nifp->ni_bufs_head;
   VAR_4->nmd->nifp->ni_bufs_head = VAR_7.buf_idx;
   VAR_3++;
  }
 }
 FUNC_0("added %d buffers to netmap free list", VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_0.output_rings + 1; ++VAR_2) {
  FUNC_2(VAR_1[VAR_2].nmd);
 }
}
