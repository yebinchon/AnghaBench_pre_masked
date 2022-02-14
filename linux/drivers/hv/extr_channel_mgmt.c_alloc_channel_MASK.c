
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int callback_event; int percpu_list; int sc_list; int rescind_event; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (int *) ;
 struct vmbus_channel* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static struct vmbus_channel *FUNC_6(void)
{
 struct vmbus_channel *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_4(&VAR_2->lock);
 FUNC_2(&VAR_2->rescind_event);

 FUNC_0(&VAR_2->sc_list);
 FUNC_0(&VAR_2->percpu_list);

 FUNC_5(&VAR_2->callback_event,
       VAR_1, (unsigned long)VAR_2);

 FUNC_1(VAR_2);

 return VAR_2;
}
