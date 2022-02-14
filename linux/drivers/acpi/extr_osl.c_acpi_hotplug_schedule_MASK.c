
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_hp_work {int work; int src; struct acpi_device* adev; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct acpi_hp_work*) ;
 struct acpi_hp_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;

acpi_status FUNC_5(struct acpi_device *VAR_7, u32 VAR_8)
{
 struct acpi_hp_work *VAR_9;

 FUNC_0((VAR_0,
    "Scheduling hotplug event (%p, %u) for deferred execution.\n",
    VAR_7, VAR_8));

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return VAR_2;

 FUNC_1(&VAR_9->work, VAR_5);
 VAR_9->adev = VAR_7;
 VAR_9->src = VAR_8;






 if (!FUNC_4(VAR_6, &VAR_9->work)) {
  FUNC_2(VAR_9);
  return VAR_1;
 }
 return VAR_3;
}
