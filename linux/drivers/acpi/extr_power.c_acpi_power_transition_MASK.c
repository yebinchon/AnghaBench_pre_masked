
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int state; TYPE_2__* states; } ;
struct TYPE_4__ {int power_manageable; } ;
struct acpi_device {TYPE_3__ power; TYPE_1__ flags; } ;
struct TYPE_5__ {int resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct acpi_device *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (!VAR_5 || (VAR_6 < VAR_0) || (VAR_6 > VAR_1))
  return -VAR_3;

 if (VAR_5->power.state == VAR_6 || !VAR_5->flags.power_manageable)
  return 0;

 if ((VAR_5->power.state < VAR_0)
     || (VAR_5->power.state > VAR_1))
  return -VAR_4;






 if (VAR_6 < VAR_1)
  VAR_7 = FUNC_1(
   &VAR_5->power.states[VAR_6].resources);

 if (!VAR_7 && VAR_5->power.state < VAR_1)
  FUNC_0(
   &VAR_5->power.states[VAR_5->power.state].resources);


 VAR_5->power.state = VAR_7 ? VAR_2 : VAR_6;

 return VAR_7;
}
