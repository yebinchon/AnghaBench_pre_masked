
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t4_srq {size_t cidx; size_t size; int ooo_count; TYPE_2__* queue; } ;
struct TYPE_3__ {size_t host_cidx; } ;
struct TYPE_4__ {TYPE_1__ status; } ;



__attribute__((used)) static inline void FUNC_0(struct t4_srq *VAR_0)
{
 VAR_0->cidx++;
 if (VAR_0->cidx == VAR_0->size)
  VAR_0->cidx = 0;
 VAR_0->queue[VAR_0->size].status.host_cidx = VAR_0->cidx;
 VAR_0->ooo_count--;
}
