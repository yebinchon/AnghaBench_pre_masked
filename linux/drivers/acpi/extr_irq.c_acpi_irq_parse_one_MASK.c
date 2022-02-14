
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int dummy; } ;
struct acpi_irq_parse_one_ctx {unsigned int member_1; unsigned long* member_2; int rc; struct irq_fwspec* member_3; int member_0; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,struct acpi_irq_parse_one_ctx*) ;

__attribute__((used)) static int FUNC_1(acpi_handle VAR_3, unsigned int VAR_4,
         struct irq_fwspec *VAR_5, unsigned long *VAR_6)
{
 struct acpi_irq_parse_one_ctx VAR_7 = { -VAR_0, VAR_4, VAR_6, VAR_5 };

 FUNC_0(VAR_3, VAR_1, VAR_2, &VAR_7);
 return VAR_7.rc;
}
