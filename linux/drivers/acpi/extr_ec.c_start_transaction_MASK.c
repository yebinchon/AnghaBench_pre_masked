
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ec {TYPE_1__* curr; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ ri; scalar_t__ wi; scalar_t__ irq_count; } ;



__attribute__((used)) static void FUNC_0(struct acpi_ec *VAR_0)
{
 VAR_0->curr->irq_count = VAR_0->curr->wi = VAR_0->curr->ri = 0;
 VAR_0->curr->flags = 0;
}
