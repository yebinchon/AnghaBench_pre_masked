
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int platform_id; } ;
struct TYPE_3__ {TYPE_2__ type; } ;
struct acpi_device {TYPE_1__ pnp; int children; int handle; } ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,char*,int *,unsigned long long*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_5, bool VAR_6)
{
 bool VAR_7 = 1;
 unsigned long long VAR_8;
 acpi_status VAR_9;

 VAR_9 = FUNC_1(VAR_5->handle, "_STA", ((void*)0), &VAR_8);
 if (VAR_9 == VAR_1)
  VAR_7 = 0;
 else if (FUNC_0(VAR_9) || !(VAR_8 & VAR_0))
  return -VAR_2;

 if (VAR_6 && FUNC_2(&VAR_5->children))
  return -VAR_2;
 return VAR_7 && !VAR_5->pnp.type.platform_id ?
   VAR_3 : VAR_4;
}
