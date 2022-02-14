
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ monitorid; } ;
struct vmbus_channel {TYPE_1__ offermsg; } ;



__attribute__((used)) static u8 FUNC_0(const struct vmbus_channel *VAR_0)
{
 return (u8)VAR_0->offermsg.monitorid % 32;
}
