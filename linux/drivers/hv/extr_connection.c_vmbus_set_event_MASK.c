
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int child_relid; } ;
struct vmbus_channel {int sig_event; int sig_events; int is_dedicated_interrupt; TYPE_1__ offermsg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct vmbus_channel *VAR_1)
{
 u32 VAR_2 = VAR_1->offermsg.child_relid;

 if (!VAR_1->is_dedicated_interrupt)
  FUNC_1(VAR_2);

 ++VAR_1->sig_events;

 FUNC_0(VAR_0, VAR_1->sig_event);
}
