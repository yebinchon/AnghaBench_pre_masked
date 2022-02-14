
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int dependent_devices; } ;
struct dock_dependent_device {int list; struct acpi_device* adev; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct dock_dependent_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct dock_station *VAR_2,
         struct acpi_device *VAR_3)
{
 struct dock_dependent_device *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->adev = VAR_3;
 FUNC_0(&VAR_4->list);
 FUNC_2(&VAR_4->list, &VAR_2->dependent_devices);

 return 0;
}
