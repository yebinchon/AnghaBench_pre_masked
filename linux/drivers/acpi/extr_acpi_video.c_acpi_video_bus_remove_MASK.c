
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_video_bus {struct acpi_video_bus* attached_array; int entry; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_video_bus* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_video_bus*) ;
 int FUNC_2 (struct acpi_video_bus*) ;
 int FUNC_3 (struct acpi_video_bus*) ;
 int FUNC_4 (struct acpi_video_bus*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_2)
{
 struct acpi_video_bus *VAR_3 = ((void*)0);


 if (!VAR_2 || !FUNC_0(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 FUNC_6(&VAR_1);
 FUNC_5(&VAR_3->entry);
 FUNC_7(&VAR_1);

 FUNC_4(VAR_3->attached_array);
 FUNC_4(VAR_3);

 return 0;
}
