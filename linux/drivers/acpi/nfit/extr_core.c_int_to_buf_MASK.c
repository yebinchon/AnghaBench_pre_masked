
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int length; void* pointer; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ buffer; } ;


 union acpi_object* FUNC_0 (int) ;
 int FUNC_1 (union acpi_object*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (void*,int *,int) ;

__attribute__((used)) static union acpi_object *FUNC_4(union acpi_object *VAR_2)
{
 union acpi_object *VAR_3 = FUNC_0(sizeof(*VAR_3) + 4);
 void *VAR_4 = ((void*)0);

 if (!VAR_3)
  goto err;

 if (VAR_2->type != VAR_1) {
  FUNC_2(1, "BIOS bug, unexpected element type: %d\n",
    VAR_2->type);
  goto err;
 }

 VAR_4 = VAR_3 + 1;
 VAR_3->type = VAR_0;
 VAR_3->buffer.length = 4;
 VAR_3->buffer.pointer = VAR_4;
 FUNC_3(VAR_4, &VAR_2->integer.value, 4);
err:
 FUNC_1(VAR_2);
 return VAR_3;
}
