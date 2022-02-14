
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
struct dmar_res_callback {void** arg; int * cb; } ;
struct acpi_dmar_header {int dummy; } ;
typedef int dmar_res_handler_t ;
typedef int callback ;
typedef int acpi_handle ;





 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_1 (int ,int *,int ,int,int *,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct acpi_dmar_header*,int ,struct dmar_res_callback*) ;
 int FUNC_4 (struct dmar_res_callback*,int ,int) ;

__attribute__((used)) static int FUNC_5(acpi_handle VAR_4, int VAR_5,
      dmar_res_handler_t VAR_6, void *VAR_7)
{
 int VAR_8 = -VAR_2;
 union acpi_object *VAR_9;
 struct acpi_dmar_header *VAR_10;
 struct dmar_res_callback VAR_11;
 static int VAR_12[] = {
  [129] = 132,
  [130] = 131,
  [128] = 133,
 };

 if (!FUNC_2(VAR_4, VAR_5))
  return 0;

 VAR_9 = FUNC_1(VAR_4, &VAR_3, VAR_1,
          VAR_5, ((void*)0), VAR_0);
 if (!VAR_9)
  return -VAR_2;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cb[VAR_12[VAR_5]] = VAR_6;
 VAR_11.arg[VAR_12[VAR_5]] = VAR_7;
 VAR_10 = (struct acpi_dmar_header *)VAR_9->buffer.pointer;
 VAR_8 = FUNC_3(VAR_10, VAR_9->buffer.length, &VAR_11);

 FUNC_0(VAR_9);

 return VAR_8;
}
