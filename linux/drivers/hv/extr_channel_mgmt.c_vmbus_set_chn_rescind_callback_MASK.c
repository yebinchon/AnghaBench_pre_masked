
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {void (* chn_rescind_callback ) (struct vmbus_channel*) ;} ;



void FUNC_0(struct vmbus_channel *VAR_0,
  void (*VAR_1)(struct vmbus_channel *))
{
 VAR_0->chn_rescind_callback = VAR_1;
}
