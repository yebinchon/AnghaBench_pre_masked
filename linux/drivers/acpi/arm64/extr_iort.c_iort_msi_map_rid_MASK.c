
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct acpi_iort_node {int dummy; } ;


 int VAR_0 ;
 struct acpi_iort_node* FUNC_0 (struct device*) ;
 int FUNC_1 (struct acpi_iort_node*,int ,int *,int ) ;

u32 FUNC_2(struct device *VAR_1, u32 VAR_2)
{
 struct acpi_iort_node *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return VAR_2;

 FUNC_1(VAR_3, VAR_2, &VAR_4, VAR_0);
 return VAR_4;
}
