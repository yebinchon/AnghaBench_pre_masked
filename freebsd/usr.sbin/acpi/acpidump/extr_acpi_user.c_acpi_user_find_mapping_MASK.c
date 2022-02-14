
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct acpi_user_mapping {scalar_t__ pa; scalar_t__ size; scalar_t__ va; } ;


 struct acpi_user_mapping* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct acpi_user_mapping*,int ) ;
 struct acpi_user_mapping* FUNC_2 (struct acpi_user_mapping*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int VAR_3 ;
 struct acpi_user_mapping* FUNC_5 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,size_t,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static struct acpi_user_mapping *
FUNC_9(vm_offset_t VAR_5, size_t VAR_6)
{
 struct acpi_user_mapping *VAR_7;


 for (VAR_7 = FUNC_0(&VAR_4); VAR_7; VAR_7 = FUNC_2(VAR_7, VAR_3)) {
  if (VAR_7->pa <= VAR_5 && VAR_7->size >= VAR_5 + VAR_6 - VAR_7->pa)
   return (VAR_7);
 }


 VAR_6 = FUNC_7(VAR_5 + VAR_6) - FUNC_8(VAR_5);
 VAR_5 = FUNC_8(VAR_5);
 VAR_7 = FUNC_5(sizeof(struct acpi_user_mapping));
 if (!VAR_7)
  FUNC_4(1, "out of memory");
 VAR_7->pa = VAR_5;
 VAR_7->va = FUNC_6(0, VAR_6, VAR_1, VAR_0, VAR_2, VAR_5);
 VAR_7->size = VAR_6;
 if ((intptr_t) VAR_7->va == -1)
  FUNC_3(1, "can't map address");
 FUNC_1(&VAR_4, VAR_7, VAR_3);

 return (VAR_7);
}
