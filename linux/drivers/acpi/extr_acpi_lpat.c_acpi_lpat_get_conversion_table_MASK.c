
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {scalar_t__ value; } ;
union acpi_object {scalar_t__ type; TYPE_2__ package; TYPE_1__ integer; } ;
struct acpi_lpat_conversion_table {int lpat_count; struct acpi_lpat* lpat; } ;
struct acpi_lpat {int dummy; } ;
struct acpi_buffer {int* pointer; int * member_1; int member_0; } ;
typedef int s64 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int*) ;
 struct acpi_lpat_conversion_table* FUNC_4 (int,int ) ;

struct acpi_lpat_conversion_table *FUNC_5(acpi_handle
          VAR_4)
{
 struct acpi_lpat_conversion_table *VAR_5 = ((void*)0);
 struct acpi_buffer VAR_6 = { &VAR_0, ((void*)0) };
 union acpi_object *VAR_7, *VAR_8;
 int *VAR_9, VAR_10;
 acpi_status VAR_11;

 VAR_11 = FUNC_1(VAR_4, "LPAT", ((void*)0), &VAR_6);
 if (FUNC_0(VAR_11))
  return ((void*)0);

 VAR_7 = (union acpi_object *)VAR_6.pointer;
 if (!VAR_7 || (VAR_7->type != VAR_2) ||
     (VAR_7->package.count % 2) || (VAR_7->package.count < 4))
  goto out;

 VAR_9 = FUNC_2(VAR_7->package.count, sizeof(int), VAR_3);
 if (!VAR_9)
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_7->package.count; VAR_10++) {
  VAR_8 = &VAR_7->package.elements[VAR_10];
  if (VAR_8->type != VAR_1) {
   FUNC_3(VAR_9);
   goto out;
  }
  VAR_9[VAR_10] = (s64)VAR_8->integer.value;
 }

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  FUNC_3(VAR_9);
  goto out;
 }

 VAR_5->lpat = (struct acpi_lpat *)VAR_9;
 VAR_5->lpat_count = VAR_7->package.count / 2;

out:
 FUNC_3(VAR_6.pointer);
 return VAR_5;
}
