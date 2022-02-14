
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pointer; } ;
union acpi_object {TYPE_1__ string; } ;
struct tpm_chip {int groups_cnt; int ** groups; int ppi_version; int acpi_dev_handle; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int) ;
 union acpi_object* FUNC_2 (int ,int *,int ,int,int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_4 ;

void FUNC_4(struct tpm_chip *VAR_5)
{
 union acpi_object *VAR_6;

 if (!VAR_5->acpi_dev_handle)
  return;

 if (!FUNC_1(VAR_5->acpi_dev_handle, &VAR_4,
       VAR_2, 1 << VAR_1))
  return;


 VAR_6 = FUNC_2(VAR_5->acpi_dev_handle, &VAR_4,
          VAR_2,
          VAR_1,
          ((void*)0), VAR_0);
 if (VAR_6) {
  FUNC_3(VAR_5->ppi_version, VAR_6->string.pointer,
   sizeof(VAR_5->ppi_version));
  FUNC_0(VAR_6);
 }

 VAR_5->groups[VAR_5->groups_cnt++] = &VAR_3;
}
