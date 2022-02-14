
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; struct omap_dss_device* next; } ;
struct TYPE_2__ {int (* disable ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (struct omap_dss_device*) ;

void FUNC_1(struct omap_dss_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->next);

 if (VAR_0->ops->disable)
  VAR_0->ops->disable(VAR_0);
}
