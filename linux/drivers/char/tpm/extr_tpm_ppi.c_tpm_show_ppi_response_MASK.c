
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
typedef int u64 ;
struct tpm_chip {int acpi_dev_handle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 int FUNC_0 (union acpi_object*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ,char*,int,...) ;
 struct tpm_chip* FUNC_2 (struct device*) ;
 union acpi_object* FUNC_3 (int ,int ,int ,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_8,
         struct device_attribute *VAR_9,
         char *VAR_10)
{
 acpi_status VAR_11 = -VAR_3;
 union acpi_object *VAR_12, *VAR_13;
 u64 VAR_14, VAR_15;
 struct tpm_chip *VAR_16 = FUNC_2(VAR_8);

 VAR_12 = FUNC_3(VAR_16->acpi_dev_handle, VAR_6,
      VAR_1, ((void*)0), VAR_7);
 if (!VAR_12)
  return -VAR_4;
 VAR_13 = VAR_12->package.elements;
 if (VAR_12->package.count < 3 ||
     VAR_13[0].type != VAR_0 ||
     VAR_13[1].type != VAR_0 ||
     VAR_13[2].type != VAR_0)
  goto cleanup;

 if (VAR_13[0].integer.value) {
  VAR_11 = -VAR_2;
  goto cleanup;
 }

 VAR_14 = VAR_13[1].integer.value;
 VAR_15 = VAR_13[2].integer.value;
 if (VAR_14) {
  if (VAR_15 == 0)
   VAR_11 = FUNC_1(VAR_10, VAR_5, "%llu %s\n", VAR_14,
        "0: Success");
  else if (VAR_15 == 0xFFFFFFF0)
   VAR_11 = FUNC_1(VAR_10, VAR_5, "%llu %s\n", VAR_14,
        "0xFFFFFFF0: User Abort");
  else if (VAR_15 == 0xFFFFFFF1)
   VAR_11 = FUNC_1(VAR_10, VAR_5, "%llu %s\n", VAR_14,
        "0xFFFFFFF1: BIOS Failure");
  else if (VAR_15 >= 1 && VAR_15 <= 0x00000FFF)
   VAR_11 = FUNC_1(VAR_10, VAR_5, "%llu %llu: %s\n",
        VAR_14, VAR_15, "Corresponding TPM error");
  else
   VAR_11 = FUNC_1(VAR_10, VAR_5, "%llu %llu: %s\n",
        VAR_14, VAR_15, "Error");
 } else {
  VAR_11 = FUNC_1(VAR_10, VAR_5, "%llu: %s\n",
       VAR_14, "No Recent Request");
 }

cleanup:
 FUNC_0(VAR_12);
 return VAR_11;
}
