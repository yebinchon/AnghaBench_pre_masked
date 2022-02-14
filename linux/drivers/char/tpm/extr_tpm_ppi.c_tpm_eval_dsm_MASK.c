
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
typedef int u64 ;
typedef int acpi_object_type ;
typedef int acpi_handle ;


 int FUNC_0 (int) ;
 union acpi_object* FUNC_1 (int ,int *,int ,int,union acpi_object*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline union acpi_object *
FUNC_2(acpi_handle VAR_1, int VAR_2, acpi_object_type VAR_3,
      union acpi_object *VAR_4, u64 VAR_5)
{
 FUNC_0(!VAR_1);
 return FUNC_1(VAR_1, &VAR_0,
           VAR_5, VAR_2, VAR_4, VAR_3);
}
