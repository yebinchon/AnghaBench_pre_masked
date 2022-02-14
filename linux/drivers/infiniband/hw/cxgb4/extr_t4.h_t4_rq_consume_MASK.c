
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cidx; scalar_t__ size; int in_use; } ;
struct t4_wq {TYPE_1__ rq; } ;



__attribute__((used)) static inline void FUNC_0(struct t4_wq *VAR_0)
{
 VAR_0->rq.in_use--;
 if (++VAR_0->rq.cidx == VAR_0->rq.size)
  VAR_0->rq.cidx = 0;
}
