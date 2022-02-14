
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ioremap {int virt; int phys; int refcount; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct acpi_ioremap*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct acpi_ioremap *VAR_0)
{
 if (!VAR_0->refcount) {
  FUNC_2();
  FUNC_0(VAR_0->phys, VAR_0->virt);
  FUNC_1(VAR_0);
 }
}
