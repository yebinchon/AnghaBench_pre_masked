
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t length; int * pointer; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_4__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ package; } ;


 union acpi_object* FUNC_0 (int) ;
 int FUNC_1 (union acpi_object*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (void*,int *,int) ;

__attribute__((used)) static union acpi_object *FUNC_4(union acpi_object *VAR_3)
{
 int VAR_4;
 void *VAR_5;
 size_t VAR_6 = 0;
 union acpi_object *VAR_7 = ((void*)0);

 if (VAR_3->type != VAR_2) {
  FUNC_2(1, "BIOS bug, unexpected element type: %d\n",
    VAR_3->type);
  goto err;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->package.count; VAR_4++) {
  union acpi_object *VAR_8 = &VAR_3->package.elements[VAR_4];

  if (VAR_8->type == VAR_1)
   VAR_6 += 4;
  else if (VAR_8->type == VAR_0)
   VAR_6 += VAR_8->buffer.length;
  else {
   FUNC_2(1, "BIOS bug, unexpected element type: %d\n",
     VAR_8->type);
   goto err;
  }
 }

 VAR_7 = FUNC_0(sizeof(*VAR_7) + VAR_6);
 if (!VAR_7)
  goto err;

 VAR_5 = VAR_7 + 1;
 VAR_7->type = VAR_0;
 VAR_7->buffer.length = VAR_6;
 VAR_7->buffer.pointer = VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_3->package.count; VAR_4++) {
  union acpi_object *VAR_9 = &VAR_3->package.elements[VAR_4];

  if (VAR_9->type == VAR_1) {
   FUNC_3(VAR_5, &VAR_9->integer.value, 4);
   VAR_5 += 4;
  } else if (VAR_9->type == VAR_0) {
   FUNC_3(VAR_5, VAR_9->buffer.pointer, VAR_9->buffer.length);
   VAR_5 += VAR_9->buffer.length;
  }
 }
err:
 FUNC_1(VAR_3);
 return VAR_7;
}
