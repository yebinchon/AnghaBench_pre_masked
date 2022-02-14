
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int rq_flags; TYPE_1__* q; } ;
struct TYPE_2__ {int seq_zones_wlock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct request *VAR_1)
{
 if (FUNC_0(FUNC_2(FUNC_1(VAR_1),
       VAR_1->q->seq_zones_wlock)))
  return;

 FUNC_0(VAR_1->rq_flags & VAR_0);
 VAR_1->rq_flags |= VAR_0;
}
