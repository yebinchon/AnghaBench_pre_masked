
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {int length; int pointer; } ;
union acpi_object {scalar_t__ type; TYPE_2__ package; TYPE_1__ buffer; } ;
struct soc_button_info {int dummy; } ;
struct device {int dummy; } ;
struct acpi_buffer {union acpi_object* pointer; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct soc_button_info* FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int *,struct acpi_buffer*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*) ;
 struct soc_button_info* FUNC_5 (struct device*,int,int,int ) ;
 int FUNC_6 (union acpi_object*) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (union acpi_object*) ;
 scalar_t__ FUNC_9 (struct device*,union acpi_object*,int,struct soc_button_info*) ;

__attribute__((used)) static struct soc_button_info *FUNC_10(struct device *VAR_7)
{
 struct acpi_buffer VAR_8 = { VAR_0 };
 const union acpi_object *VAR_9, *VAR_10, *VAR_11, *VAR_12 = ((void*)0);
 struct soc_button_info *VAR_13;
 acpi_status VAR_14;
 int VAR_15, VAR_16, VAR_17 = -1;

 VAR_14 = FUNC_3(FUNC_1(VAR_7), "_DSD", ((void*)0),
         &VAR_8, VAR_2);
 if (FUNC_0(VAR_14)) {
  FUNC_4(VAR_7, "ACPI _DSD object not found\n");
  return FUNC_2(-VAR_3);
 }


 VAR_9 = VAR_8.pointer;
 for (VAR_15 = 0; (VAR_15 + 1) < VAR_9->package.count; VAR_15 += 2) {
  VAR_11 = &VAR_9->package.elements[VAR_15];

  if (VAR_11->type != VAR_1 ||
      VAR_11->buffer.length != 16 ||
      VAR_9->package.elements[VAR_15 + 1].type != VAR_2) {
   break;
  }

  if (FUNC_7(VAR_11->buffer.pointer, VAR_6, 16) == 0) {
   VAR_12 = &VAR_9->package.elements[VAR_15 + 1];
   break;
  }
 }

 if (!VAR_12) {
  FUNC_4(VAR_7, "ACPI Button Descriptors not found\n");
  VAR_13 = FUNC_2(-VAR_3);
  goto out;
 }


 VAR_10 = &VAR_12->package.elements[0];
 if (VAR_10->type == VAR_2 &&
     VAR_10->package.count == 5 &&

     FUNC_8(&VAR_10->package.elements[0]) == 0 &&

     FUNC_8(&VAR_10->package.elements[2]) == 0) {
  VAR_17 = FUNC_8(
      &VAR_10->package.elements[1]);
 }
 if (VAR_17 == -1) {
  FUNC_4(VAR_7, "Invalid Button Collection Descriptor\n");
  VAR_13 = FUNC_2(-VAR_3);
  goto out;
 }


 VAR_13 = FUNC_5(VAR_7, VAR_12->package.count,
       sizeof(*VAR_13), VAR_5);
 if (!VAR_13) {
  VAR_13 = FUNC_2(-VAR_4);
  goto out;
 }


 for (VAR_15 = 1, VAR_16 = 0; VAR_15 < VAR_12->package.count; VAR_15++, VAR_16++) {
  if (FUNC_9(VAR_7,
           &VAR_12->package.elements[VAR_15],
           VAR_17,
           &VAR_13[VAR_16])) {
   VAR_13 = FUNC_2(-VAR_3);
   goto out;
  }
 }

out:
 FUNC_6(VAR_8.pointer);
 return VAR_13;
}
