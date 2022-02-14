
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_als {TYPE_1__* device; } ;
typedef unsigned long long s32 ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(struct acpi_als *VAR_2, char *VAR_3, s32 *VAR_4)
{
 unsigned long long VAR_5;
 acpi_status VAR_6;

 VAR_6 = FUNC_2(VAR_2->device->handle, VAR_3, ((void*)0),
           &VAR_5);

 if (FUNC_1(VAR_6)) {
  FUNC_0((VAR_0, VAR_6, "Error reading ALS %s", VAR_3));
  return -VAR_1;
 }

 *VAR_4 = VAR_5;

 return 0;
}
