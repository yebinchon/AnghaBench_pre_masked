
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int kobj; int callback_event; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_3(struct vmbus_channel *VAR_0)
{
 FUNC_1(&VAR_0->callback_event);
 FUNC_2(VAR_0);

 FUNC_0(&VAR_0->kobj);
}
