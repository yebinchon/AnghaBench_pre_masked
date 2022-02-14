
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* pointer; } ;
struct TYPE_5__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ string; TYPE_2__ package; } ;
struct TYPE_4__ {union acpi_object* of_compatible; } ;
struct acpi_device {TYPE_1__ data; int handle; } ;
struct acpi_buffer {char* pointer; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,struct acpi_buffer*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 char FUNC_4 (char) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_6, char *VAR_7,
         int VAR_8)
{
 struct acpi_buffer VAR_9 = { VAR_0 };
 const union acpi_object *VAR_10, *VAR_11;
 acpi_status VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17;

 VAR_12 = FUNC_2(VAR_6->handle, VAR_1, &VAR_9);
 if (FUNC_0(VAR_12))
  return -VAR_4;


 for (VAR_17 = VAR_9.pointer; *VAR_17 != '\0'; VAR_17++)
  *VAR_17 = FUNC_4(*VAR_17);

 VAR_13 = FUNC_3(VAR_7, VAR_8, "of:N%sT", (char *)VAR_9.pointer);
 FUNC_1(VAR_9.pointer);

 if (VAR_13 <= 0)
  return VAR_13;

 VAR_10 = VAR_6->data.of_compatible;
 if (VAR_10->type == VAR_2) {
  VAR_16 = VAR_10->package.count;
  VAR_11 = VAR_10->package.elements;
 } else {
  VAR_16 = 1;
  VAR_11 = VAR_10;
 }
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++, VAR_11++) {
  VAR_14 = FUNC_3(&VAR_7[VAR_13], VAR_8, "C%s",
     VAR_11->string.pointer);
  if (VAR_14 < 0)
   return -VAR_3;

  if (VAR_14 >= VAR_8)
   return -VAR_5;

  VAR_13 += VAR_14;
  VAR_8 -= VAR_14;
 }
 VAR_7[VAR_13] = '\0';
 return VAR_13;
}
