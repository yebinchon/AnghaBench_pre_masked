
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,char*,struct acpi_object_list*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4(char *VAR_5, u32 VAR_6)
{
 struct acpi_object_list VAR_7;
 union acpi_object VAR_8;
 acpi_status VAR_9;

 FUNC_2(VAR_3);



 VAR_7.count = 1;
 VAR_7.pointer = &VAR_8;
 VAR_8.type = VAR_0;
 VAR_8.integer.value = (u64)VAR_6;

 VAR_9 = FUNC_3(((void*)0), VAR_5, &VAR_7, ((void*)0));
 if (FUNC_1(VAR_9) && VAR_9 != VAR_2) {
  FUNC_0((VAR_1, VAR_9, "While executing method %s",
    VAR_5));
 }

 VAR_4;
}
