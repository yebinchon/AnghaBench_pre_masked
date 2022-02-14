
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct t4_srq {int pidx; int size; int wq_pidx; TYPE_2__* queue; int in_use; } ;
struct TYPE_3__ {int host_pidx; } ;
struct TYPE_4__ {TYPE_1__ status; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct t4_srq *VAR_2, u8 VAR_3)
{
 VAR_2->in_use++;
 if (++VAR_2->pidx == VAR_2->size)
  VAR_2->pidx = 0;
 VAR_2->wq_pidx += FUNC_0(VAR_3 * 16, VAR_0);
 if (VAR_2->wq_pidx >= VAR_2->size * VAR_1)
  VAR_2->wq_pidx %= VAR_2->size * VAR_1;
 VAR_2->queue[VAR_2->size].status.host_pidx = VAR_2->pidx;
}
