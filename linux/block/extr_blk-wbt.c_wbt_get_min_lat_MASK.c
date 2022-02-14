
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rq_qos {int dummy; } ;
struct request_queue {int dummy; } ;
struct TYPE_2__ {int min_lat_nsec; } ;


 TYPE_1__* FUNC_0 (struct rq_qos*) ;
 struct rq_qos* FUNC_1 (struct request_queue*) ;

u64 FUNC_2(struct request_queue *VAR_0)
{
 struct rq_qos *VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return 0;
 return FUNC_0(VAR_1)->min_lat_nsec;
}
