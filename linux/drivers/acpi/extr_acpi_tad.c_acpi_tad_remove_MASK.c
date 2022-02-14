
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct platform_device {struct device dev; } ;
struct acpi_tad_driver_data {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct device*,int ) ;
 struct acpi_tad_driver_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct acpi_tad_driver_data *VAR_7 = FUNC_2(VAR_6);

 FUNC_3(VAR_6, 0);

 FUNC_5(VAR_6);

 if (VAR_7->capabilities & VAR_2)
  FUNC_7(&VAR_6->kobj, &VAR_4);

 FUNC_7(&VAR_6->kobj, &VAR_3);

 FUNC_1(VAR_6, VAR_0);
 FUNC_0(VAR_6, VAR_0);
 if (VAR_7->capabilities & VAR_2) {
  FUNC_1(VAR_6, VAR_1);
  FUNC_0(VAR_6, VAR_1);
 }

 FUNC_6(VAR_6);
 FUNC_4(VAR_6);
 return 0;
}
