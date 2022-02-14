
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int match_driver; } ;
struct acpi_device {int dev; TYPE_1__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device**,int *,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(int VAR_1)
{
 struct acpi_device *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2, ((void*)0),
     VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->flags.match_driver = 1;
 return FUNC_1(&VAR_2->dev);
}
