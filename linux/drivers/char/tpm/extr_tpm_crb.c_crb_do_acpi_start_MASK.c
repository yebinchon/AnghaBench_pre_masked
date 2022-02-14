
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {TYPE_1__ integer; } ;
struct tpm_chip {int acpi_dev_handle; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_1 (int ,int *,int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_4)
{
 union acpi_object *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4->acpi_dev_handle,
    &VAR_3,
    VAR_1,
    VAR_0,
    ((void*)0));
 if (!VAR_5)
  return -VAR_2;
 VAR_6 = VAR_5->integer.value == 0 ? 0 : -VAR_2;
 FUNC_0(VAR_5);
 return VAR_6;
}
