
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {scalar_t__ target_cpu; int callback_event; int * sc_creation_callback; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct vmbus_channel*) ;
 int FUNC_3 (scalar_t__,int (*) (struct vmbus_channel*),struct vmbus_channel*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct vmbus_channel *VAR_0)
{







 FUNC_4(&VAR_0->callback_event);

 VAR_0->sc_creation_callback = ((void*)0);


 if (VAR_0->target_cpu != FUNC_0()) {
  FUNC_1();
  FUNC_3(VAR_0->target_cpu, FUNC_2,
      VAR_0, 1);
 } else {
  FUNC_2(VAR_0);
  FUNC_1();
 }


 FUNC_5(&VAR_0->callback_event);
}
