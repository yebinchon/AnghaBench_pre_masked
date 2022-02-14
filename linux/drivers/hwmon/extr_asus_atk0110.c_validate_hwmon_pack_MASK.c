
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int const count; union acpi_object* elements; } ;
union acpi_object {int type; TYPE_2__ package; } ;
struct device {int dummy; } ;
struct atk_data {int old_interface; TYPE_1__* acpi_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 union acpi_object* FUNC_0 (struct atk_data*,union acpi_object*,int ) ;
 int FUNC_1 (struct atk_data*,union acpi_object*) ;
 int FUNC_2 (struct device*,char*,int const,...) ;

__attribute__((used)) static int FUNC_3(struct atk_data *VAR_13, union acpi_object *VAR_14)
{
 struct device *VAR_15 = &VAR_13->acpi_dev->dev;
 union acpi_object *VAR_16;
 bool VAR_17 = VAR_13->old_interface;
 int const VAR_18 = VAR_17 ? VAR_12 :
        VAR_11;

 if (VAR_14->type != VAR_1) {
  FUNC_2(VAR_15, "Invalid type: %d\n", VAR_14->type);
  return -VAR_3;
 }

 if (VAR_14->package.count != VAR_18) {
  FUNC_2(VAR_15, "Invalid package size: %d, expected: %d\n",
    VAR_14->package.count, VAR_18);
  return -VAR_3;
 }

 VAR_16 = FUNC_0(VAR_13, VAR_14, VAR_5);
 if (VAR_16->type != VAR_0) {
  FUNC_2(VAR_15, "Invalid type (flag): %d\n", VAR_16->type);
  return -VAR_3;
 }

 VAR_16 = FUNC_0(VAR_13, VAR_14, VAR_8);
 if (VAR_16->type != VAR_2) {
  FUNC_2(VAR_15, "Invalid type (name): %d\n", VAR_16->type);
  return -VAR_3;
 }
 VAR_16 = FUNC_0(VAR_13, VAR_14, VAR_6);
 if (VAR_16->type != VAR_0) {
  FUNC_2(VAR_15, "Invalid type (limit1): %d\n", VAR_16->type);
  return -VAR_3;
 }

 VAR_16 = FUNC_0(VAR_13, VAR_14, VAR_7);
 if (VAR_16->type != VAR_0) {
  FUNC_2(VAR_15, "Invalid type (limit2): %d\n", VAR_16->type);
  return -VAR_3;
 }

 VAR_16 = FUNC_0(VAR_13, VAR_14, VAR_4);
 if (VAR_16->type != VAR_0) {
  FUNC_2(VAR_15, "Invalid type (enable): %d\n", VAR_16->type);
  return -VAR_3;
 }

 FUNC_1(VAR_13, VAR_14);

 return 0;
}
