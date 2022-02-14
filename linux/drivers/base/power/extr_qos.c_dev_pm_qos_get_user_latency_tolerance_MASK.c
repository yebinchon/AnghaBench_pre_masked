
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* qos; } ;
struct device {TYPE_4__ power; } ;
typedef int s32 ;
struct TYPE_10__ {TYPE_3__* latency_tolerance_req; } ;
struct TYPE_6__ {int prio; } ;
struct TYPE_7__ {TYPE_1__ pnode; } ;
struct TYPE_8__ {TYPE_2__ data; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

s32 FUNC_3(struct device *VAR_2)
{
 s32 VAR_3;

 FUNC_1(&VAR_1);
 VAR_3 = FUNC_0(VAR_2->power.qos)
  || !VAR_2->power.qos->latency_tolerance_req ?
   VAR_0 :
   VAR_2->power.qos->latency_tolerance_req->data.pnode.prio;
 FUNC_2(&VAR_1);
 return VAR_3;
}
