
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sysc_module_data {int name; } ;
struct omap_hwmod_reset {int reset; int len; int match; } ;
struct omap_hwmod {TYPE_1__* class; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int reset; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct device *VAR_0, struct omap_hwmod *VAR_1,
       const struct ti_sysc_module_data *VAR_2,
       const struct omap_hwmod_reset *VAR_3,
       int VAR_4)
{
 const struct omap_hwmod_reset *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];
  if (!FUNC_0(VAR_2->name, VAR_5->match, VAR_5->len)) {
   VAR_1->class->reset = VAR_5->reset;

   return;
  }
 }
}
