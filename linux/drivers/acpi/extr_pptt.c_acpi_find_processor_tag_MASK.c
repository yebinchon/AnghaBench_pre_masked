
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_pptt_processor {int flags; int parent; } ;


 int VAR_0 ;
 struct acpi_pptt_processor* FUNC_0 (struct acpi_table_header*,int ) ;
 scalar_t__ FUNC_1 (struct acpi_table_header*,struct acpi_pptt_processor*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static struct acpi_pptt_processor *FUNC_3(struct acpi_table_header *VAR_1,
          struct acpi_pptt_processor *VAR_2,
          int VAR_3, int VAR_4)
{
 struct acpi_pptt_processor *VAR_5;

 while (VAR_2 && VAR_3) {

  if (VAR_4 == VAR_0) {
   if (FUNC_1(VAR_1, VAR_2))
    break;
  } else if (VAR_2->flags & VAR_4)
   break;
  FUNC_2("level %d\n", VAR_3);
  VAR_5 = FUNC_0(VAR_1, VAR_2->parent);
  if (VAR_5 == ((void*)0))
   break;
  VAR_2 = VAR_5;
  VAR_3--;
 }
 return VAR_2;
}
