
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct acpi_iort_node {int mapping_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct acpi_iort_node* FUNC_0 (struct device*) ;
 int FUNC_1 (struct acpi_iort_node*) ;
 scalar_t__ FUNC_2 (struct acpi_iort_node*,int *,int) ;
 scalar_t__ FUNC_3 (struct acpi_iort_node*,int *,int ,int) ;

int FUNC_4(struct device *VAR_2, u32 *VAR_3)
{
 int VAR_4, VAR_5;
 struct acpi_iort_node *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_6);

 if (VAR_5 >= 0) {
  if (FUNC_2(VAR_6, VAR_3, VAR_5))
   return 0;
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_6->mapping_count; VAR_4++) {
   if (FUNC_3(VAR_6, VAR_3,
            VAR_1, VAR_4))
    return 0;
  }
 }

 return -VAR_0;
}
