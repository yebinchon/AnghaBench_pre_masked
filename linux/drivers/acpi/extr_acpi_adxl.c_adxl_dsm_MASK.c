
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {int type; TYPE_2__ package; TYPE_1__ integer; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_1 (int ,int *,int ,int,union acpi_object*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static union acpi_object *FUNC_3(int VAR_5, union acpi_object VAR_6[])
{
 union acpi_object *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_4, &VAR_3, VAR_2,
          VAR_5, VAR_6, VAR_1);
 if (!VAR_7) {
  FUNC_2("DSM call failed for cmd=%d\n", VAR_5);
  return ((void*)0);
 }

 if (VAR_7->package.count != 2) {
  FUNC_2("Bad pkg count %d\n", VAR_7->package.count);
  goto err;
 }

 VAR_8 = VAR_7->package.elements;
 if (VAR_8->type != VAR_0) {
  FUNC_2("Bad 1st element type %d\n", VAR_8->type);
  goto err;
 }
 if (VAR_8->integer.value) {
  FUNC_2("Bad ret val %llu\n", VAR_8->integer.value);
  goto err;
 }

 VAR_8 = VAR_7->package.elements + 1;
 if (VAR_8->type != VAR_1) {
  FUNC_2("Bad 2nd element type %d\n", VAR_8->type);
  goto err;
 }
 return VAR_7;

err:
 FUNC_0(VAR_7);
 return ((void*)0);
}
