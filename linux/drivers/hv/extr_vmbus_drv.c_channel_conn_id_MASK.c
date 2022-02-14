
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct vmbus_channel {int dummy; } ;
struct hv_monitor_page {TYPE_3__** parameter; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ connectionid; } ;


 size_t FUNC_0 (struct vmbus_channel*) ;
 size_t FUNC_1 (struct vmbus_channel*) ;

__attribute__((used)) static u32 FUNC_2(struct vmbus_channel *VAR_0,
      struct hv_monitor_page *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3 = FUNC_1(VAR_0);
 return VAR_1->parameter[VAR_2][VAR_3].connectionid.u.id;
}
