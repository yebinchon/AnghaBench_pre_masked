
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* q; } ;
struct TYPE_2__ {int seq_zones_wlock; } ;





 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;

bool FUNC_3(struct request *VAR_0)
{
 if (!VAR_0->q->seq_zones_wlock)
  return 0;

 if (FUNC_0(VAR_0))
  return 0;

 switch (FUNC_2(VAR_0)) {
 case 128:
 case 129:
 case 130:
  return FUNC_1(VAR_0);
 default:
  return 0;
 }
}
