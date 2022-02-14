
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bfq_class_idle_last_service; int * service_tree; } ;
struct TYPE_4__ {int * parent; } ;
struct bfq_group {TYPE_1__ sched_data; int rq_pos_tree; struct bfq_data* bfqd; int * my_entity; TYPE_2__ entity; } ;
struct bfq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct bfq_group *VAR_4,
    struct bfq_data *VAR_5)
{
 int VAR_6;






 VAR_4->rq_pos_tree = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4->sched_data.service_tree[VAR_6] = VAR_1;
 VAR_4->sched_data.bfq_class_idle_last_service = VAR_3;
}
