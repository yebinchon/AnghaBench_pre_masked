
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* states; } ;
struct acpi_device {TYPE_2__ power; } ;
struct TYPE_3__ {int resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct acpi_device *VAR_3, int VAR_4)
{
 if (!VAR_3 || VAR_4 < VAR_0 || VAR_4 > VAR_1)
  return -VAR_2;

 return FUNC_0(&VAR_3->power.states[VAR_4].resources);
}
