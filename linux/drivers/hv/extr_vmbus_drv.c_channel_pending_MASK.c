
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct vmbus_channel {int dummy; } ;
struct hv_monitor_page {TYPE_1__* trigger_group; } ;
struct TYPE_2__ {int pending; } ;


 size_t FUNC_0 (struct vmbus_channel const*) ;

__attribute__((used)) static u32 FUNC_1(const struct vmbus_channel *VAR_0,
      const struct hv_monitor_page *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0);

 return VAR_1->trigger_group[VAR_2].pending;
}
