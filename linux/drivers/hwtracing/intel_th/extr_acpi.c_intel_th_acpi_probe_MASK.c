
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct platform_device {int num_resources; int dev; struct resource* resource; } ;
struct intel_th {int dummy; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct acpi_device {struct intel_th* driver_data; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct intel_th*) ;
 int FUNC_2 (struct intel_th*) ;
 int VAR_3 ;
 struct acpi_device_id* FUNC_3 (int ,int *) ;
 int VAR_4 ;
 struct intel_th* FUNC_4 (int *,void*,struct resource*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct acpi_device *VAR_6 = FUNC_0(&VAR_5->dev);
 struct resource VAR_7[VAR_3];
 const struct acpi_device_id *VAR_8;
 struct intel_th *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_4, &VAR_5->dev);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_5->num_resources && VAR_11 < VAR_3; VAR_10++)
  if (VAR_5->resource[VAR_10].flags &
      (VAR_1 | VAR_2))
   VAR_7[VAR_11++] = VAR_5->resource[VAR_10];

 VAR_9 = FUNC_4(&VAR_5->dev, (void *)VAR_8->driver_data, VAR_7, VAR_11);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_6->driver_data = VAR_9;

 return 0;
}
