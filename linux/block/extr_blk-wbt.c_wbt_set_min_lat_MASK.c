
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rq_qos {int dummy; } ;
struct request_queue {int dummy; } ;
struct TYPE_3__ {int enable_state; int min_lat_nsec; } ;


 TYPE_1__* FUNC_0 (struct rq_qos*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 struct rq_qos* FUNC_2 (struct request_queue*) ;

void FUNC_3(struct request_queue *VAR_1, u64 VAR_2)
{
 struct rq_qos *VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return;
 FUNC_0(VAR_3)->min_lat_nsec = VAR_2;
 FUNC_0(VAR_3)->enable_state = VAR_0;
 FUNC_1(FUNC_0(VAR_3));
}
