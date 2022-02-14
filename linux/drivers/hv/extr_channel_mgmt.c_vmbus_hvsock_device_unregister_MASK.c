
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int device_obj; int rescind; int probe_done; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmbus_channel*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct vmbus_channel *VAR_0)
{
 FUNC_0(!FUNC_2(VAR_0));


 while (!FUNC_1(VAR_0->probe_done) || !FUNC_1(VAR_0->rescind))
  FUNC_3(1);

 FUNC_4(VAR_0->device_obj);
}
