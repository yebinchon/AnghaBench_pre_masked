
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rq_qos {int q; } ;
struct TYPE_4__ {int queue_depth; } ;
struct TYPE_5__ {TYPE_1__ rq_depth; } ;


 TYPE_2__* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rq_qos *VAR_0)
{
 FUNC_0(VAR_0)->rq_depth.queue_depth = FUNC_2(VAR_0->q);
 FUNC_1(FUNC_0(VAR_0));
}
