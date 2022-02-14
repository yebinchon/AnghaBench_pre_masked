
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {unsigned int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_1__ reference; TYPE_2__ package; } ;
struct list_head {int dummy; } ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (union acpi_object*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,struct list_head*) ;
 int FUNC_3 (struct list_head*) ;

int FUNC_4(union acpi_object *VAR_3, unsigned int VAR_4,
     struct list_head *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = VAR_4; VAR_6 < VAR_3->package.count; VAR_6++) {
  union acpi_object *VAR_8 = &VAR_3->package.elements[VAR_6];
  acpi_handle VAR_9;

  if (VAR_8->type != VAR_0) {
   VAR_7 = -VAR_1;
   break;
  }
  VAR_9 = VAR_8->reference.handle;
  if (!VAR_9) {
   VAR_7 = -VAR_2;
   break;
  }


  if (FUNC_1(VAR_3, VAR_4, VAR_6))
   continue;

  VAR_7 = FUNC_0(VAR_9);
  if (VAR_7)
   break;

  VAR_7 = FUNC_2(VAR_9, VAR_5);
  if (VAR_7)
   break;
 }
 if (VAR_7)
  FUNC_3(VAR_5);

 return VAR_7;
}
