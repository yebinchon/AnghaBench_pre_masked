
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ring_buffer_mutex; } ;
struct TYPE_3__ {int ring_buffer_mutex; } ;
struct vmbus_channel {TYPE_2__ outbound; TYPE_1__ inbound; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct vmbus_channel *VAR_0)
{
 FUNC_0(&VAR_0->inbound.ring_buffer_mutex);
 FUNC_0(&VAR_0->outbound.ring_buffer_mutex);
}
