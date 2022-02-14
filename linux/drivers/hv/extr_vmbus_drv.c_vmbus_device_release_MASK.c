
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int dummy; } ;
struct hv_device {struct vmbus_channel* channel; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int channel_mutex; } ;


 struct hv_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (struct hv_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct hv_device *VAR_2 = FUNC_0(VAR_1);
 struct vmbus_channel *VAR_3 = VAR_2->channel;

 FUNC_3(&VAR_0.channel_mutex);
 FUNC_1(VAR_3);
 FUNC_4(&VAR_0.channel_mutex);
 FUNC_2(VAR_2);
}
