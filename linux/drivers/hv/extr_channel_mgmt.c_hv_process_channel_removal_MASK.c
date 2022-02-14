
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ child_relid; } ;
struct vmbus_channel {scalar_t__ target_cpu; scalar_t__ affinity_policy; TYPE_1__ offermsg; int alloced_cpus_in_node; int lock; int sc_list; struct vmbus_channel* primary_channel; int listentry; int rescind; } ;
struct TYPE_4__ {int channel_mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct vmbus_channel*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vmbus_channel*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int (*) (struct vmbus_channel*),struct vmbus_channel*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 TYPE_2__ VAR_2 ;
 int FUNC_11 (scalar_t__) ;

void FUNC_12(struct vmbus_channel *VAR_3)
{
 struct vmbus_channel *VAR_4;
 unsigned long VAR_5;

 FUNC_0(!FUNC_5(&VAR_2.channel_mutex));
 FUNC_0(!VAR_3->rescind);

 if (VAR_3->target_cpu != FUNC_3()) {
  FUNC_7();
  FUNC_8(VAR_3->target_cpu,
      FUNC_6, VAR_3, 1);
 } else {
  FUNC_6(VAR_3);
  FUNC_7();
 }

 if (VAR_3->primary_channel == ((void*)0)) {
  FUNC_4(&VAR_3->listentry);

  VAR_4 = VAR_3;
 } else {
  VAR_4 = VAR_3->primary_channel;
  FUNC_9(&VAR_4->lock, VAR_5);
  FUNC_4(&VAR_3->sc_list);
  FUNC_10(&VAR_4->lock, VAR_5);
 }





 if (VAR_3->affinity_policy == VAR_0)
  FUNC_1(VAR_3->target_cpu,
      &VAR_4->alloced_cpus_in_node);
 if (VAR_3->offermsg.child_relid != VAR_1)
  FUNC_11(VAR_3->offermsg.child_relid);

 FUNC_2(VAR_3);
}
