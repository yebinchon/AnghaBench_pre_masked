
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct agp_bridge_data {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* agp_enable ) (struct agp_bridge_data*,int ) ;} ;


 int FUNC_0 (struct agp_bridge_data*,int ) ;

void FUNC_1(struct agp_bridge_data *VAR_0, u32 VAR_1)
{
 if (!VAR_0)
  return;
 VAR_0->driver->agp_enable(VAR_0, VAR_1);
}
