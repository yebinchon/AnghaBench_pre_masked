
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* itf; } ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 struct net_device** VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static struct net_device_stats *FUNC_0(struct net_device *VAR_2)
{
   struct net_device_stats *VAR_3;

    if ( VAR_2 != VAR_0[0] )
        return ((void*)0);
VAR_3 = &VAR_1.itf[0].stats;

    return VAR_3;
}
