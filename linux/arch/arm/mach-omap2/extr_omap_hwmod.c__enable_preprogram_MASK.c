
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod {TYPE_1__* class; } ;
struct TYPE_2__ {int (* enable_preprogram ) (struct omap_hwmod*) ;} ;


 int FUNC_0 (struct omap_hwmod*) ;

__attribute__((used)) static int FUNC_1(struct omap_hwmod *VAR_0)
{
 if (!VAR_0->class->enable_preprogram)
  return 0;

 return VAR_0->class->enable_preprogram(VAR_0);
}
