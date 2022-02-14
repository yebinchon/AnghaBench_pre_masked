
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_iort_node {int type; } ;


 int FUNC_0 (int ) ;
 struct acpi_iort_node* FUNC_1 (struct acpi_iort_node*,int *,int) ;
 struct acpi_iort_node* FUNC_2 (struct acpi_iort_node*,int ,int *,int) ;

__attribute__((used)) static struct acpi_iort_node *FUNC_3(
  struct acpi_iort_node *VAR_0, u32 *VAR_1, u8 VAR_2,
  int VAR_3)
{
 struct acpi_iort_node *VAR_4;
 u32 VAR_5;


 VAR_4 = FUNC_1(VAR_0, &VAR_5, VAR_3);
 if (!VAR_4)
  return ((void*)0);







 if (!(FUNC_0(VAR_4->type) & VAR_2))
  VAR_4 = FUNC_2(VAR_4, VAR_5, VAR_1, VAR_2);
 else
  if (VAR_1)
   *VAR_1 = VAR_5;

 return VAR_4;
}
