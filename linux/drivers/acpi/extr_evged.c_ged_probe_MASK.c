
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct acpi_ged_device {int event_list; int * dev; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int ,struct acpi_ged_device*) ;
 int FUNC_4 (int *,char*) ;
 struct acpi_ged_device* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,struct acpi_ged_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct acpi_ged_device *VAR_5;
 acpi_status VAR_6;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dev = &VAR_4->dev;
 FUNC_2(&VAR_5->event_list);
 VAR_6 = FUNC_3(FUNC_1(&VAR_4->dev), "_CRS",
           VAR_3, VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_4(&VAR_4->dev, "unable to parse the _CRS record\n");
  return -VAR_0;
 }
 FUNC_6(VAR_4, VAR_5);

 return 0;
}
