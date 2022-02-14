
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opregion_acpi {scalar_t__ csts; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {struct opregion_acpi* acpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{







 struct opregion_acpi *VAR_6;

 if (!VAR_2)
  return VAR_0;

 VAR_6 = VAR_2->acpi;
 VAR_6->csts = 0;

 return VAR_1;
}
