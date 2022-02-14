
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* elements; int count; } ;
union acpi_object {scalar_t__ type; TYPE_3__ package; } ;
struct acpi_pld_info {int dummy; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {scalar_t__ length; int pointer; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ buffer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,struct acpi_pld_info**) ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (union acpi_object*) ;

acpi_status
FUNC_4(acpi_handle VAR_5, struct acpi_pld_info **VAR_6)
{
 acpi_status VAR_7;
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_9;

 VAR_7 = FUNC_2(VAR_5, "_PLD", ((void*)0), &VAR_8);

 if (FUNC_0(VAR_7))
  return VAR_7;

 VAR_9 = VAR_8.pointer;

 if (!VAR_9 || VAR_9->type != VAR_3
     || !VAR_9->package.count
     || VAR_9->package.elements[0].type != VAR_2
     || VAR_9->package.elements[0].buffer.length < VAR_1) {
  VAR_7 = VAR_4;
  goto out;
 }

 VAR_7 = FUNC_1(
   VAR_9->package.elements[0].buffer.pointer,
   VAR_9->package.elements[0].buffer.length,
   VAR_6);

out:
 FUNC_3(VAR_8.pointer);
 return VAR_7;
}
