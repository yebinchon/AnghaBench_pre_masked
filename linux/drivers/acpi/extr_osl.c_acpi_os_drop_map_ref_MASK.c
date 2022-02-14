
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ioremap {int list; int refcount; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct acpi_ioremap *VAR_0)
{
 if (!--VAR_0->refcount)
  FUNC_0(&VAR_0->list);
}
