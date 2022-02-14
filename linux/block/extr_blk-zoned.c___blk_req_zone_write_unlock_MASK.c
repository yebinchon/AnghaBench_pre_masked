
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* q; int rq_flags; } ;
struct TYPE_2__ {scalar_t__ seq_zones_wlock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct request *VAR_1)
{
 VAR_1->rq_flags &= ~VAR_0;
 if (VAR_1->q->seq_zones_wlock)
  FUNC_0(!FUNC_2(FUNC_1(VAR_1),
       VAR_1->q->seq_zones_wlock));
}
