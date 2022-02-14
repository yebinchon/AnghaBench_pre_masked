
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct platform_device {struct device dev; } ;
struct acpi_tad_driver_data {unsigned long long capabilities; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct platform_device*) ;
 int VAR_10 ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,struct acpi_tad_driver_data*) ;
 int FUNC_8 (struct device*,int) ;
 struct acpi_tad_driver_data* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 acpi_handle VAR_13 = FUNC_1(VAR_12);
 struct acpi_tad_driver_data *VAR_14;
 acpi_status VAR_15;
 unsigned long long VAR_16;
 int VAR_17;





 VAR_15 = FUNC_2(VAR_13, "_GCP", ((void*)0), &VAR_16);
 if (FUNC_0(VAR_15)) {
  FUNC_5(VAR_12, "Unable to get capabilities\n");
  return -VAR_5;
 }

 if (!(VAR_16 & VAR_0)) {
  FUNC_5(VAR_12, "Unsupported capabilities\n");
  return -VAR_5;
 }

 if (!FUNC_3(VAR_13, "_PRW")) {
  FUNC_5(VAR_12, "Missing _PRW\n");
  return -VAR_5;
 }

 VAR_14 = FUNC_9(VAR_12, sizeof(*VAR_14), VAR_7);
 if (!VAR_14)
  return -VAR_6;

 VAR_14->capabilities = VAR_16;
 FUNC_7(VAR_12, VAR_14);







 FUNC_8(VAR_12, 1);
 FUNC_6(VAR_12, VAR_4 |
         VAR_3);




 FUNC_11(VAR_12);
 FUNC_10(VAR_12);
 FUNC_12(VAR_12);

 VAR_17 = FUNC_13(&VAR_12->kobj, &VAR_8);
 if (VAR_17)
  goto fail;

 if (VAR_16 & VAR_1) {
  VAR_17 = FUNC_13(&VAR_12->kobj, &VAR_9);
  if (VAR_17)
   goto fail;
 }

 if (VAR_16 & VAR_2) {
  VAR_17 = FUNC_13(&VAR_12->kobj, &VAR_10);
  if (VAR_17)
   goto fail;
 }

 return 0;

fail:
 FUNC_4(VAR_11);
 return VAR_17;
}
