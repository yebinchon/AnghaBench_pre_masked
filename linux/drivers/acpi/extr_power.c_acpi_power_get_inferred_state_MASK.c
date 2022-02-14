
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_6__ {TYPE_2__* states; } ;
struct acpi_device {TYPE_3__ power; } ;
struct TYPE_4__ {scalar_t__ valid; } ;
struct TYPE_5__ {TYPE_1__ flags; struct list_head resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct list_head*,int*) ;
 scalar_t__ FUNC_1 (struct list_head*) ;

int FUNC_2(struct acpi_device *VAR_5, int *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (!VAR_5 || !VAR_6)
  return -VAR_4;





 for (VAR_9 = VAR_1; VAR_9 <= VAR_3; VAR_9++) {
  struct list_head *VAR_10 = &VAR_5->power.states[VAR_9].resources;

  if (FUNC_1(VAR_10))
   continue;

  VAR_7 = FUNC_0(VAR_10, &VAR_8);
  if (VAR_7)
   return VAR_7;

  if (VAR_8 == VAR_0) {
   *VAR_6 = VAR_9;
   return 0;
  }
 }

 *VAR_6 = VAR_5->power.states[VAR_2].flags.valid ?
  VAR_2 : VAR_3;
 return 0;
}
