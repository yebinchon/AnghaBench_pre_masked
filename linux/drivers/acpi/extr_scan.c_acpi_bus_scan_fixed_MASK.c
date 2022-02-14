
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int match_driver; } ;
struct acpi_device {int dev; TYPE_1__ flags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_device**,int *,int ,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_6 = 0;




 if (!(VAR_5.flags & VAR_2)) {
  struct acpi_device *VAR_7 = ((void*)0);

  VAR_6 = FUNC_0(&VAR_7, ((void*)0),
      VAR_0,
      VAR_4);
  if (VAR_6)
   return VAR_6;

  VAR_7->flags.match_driver = 1;
  VAR_6 = FUNC_1(&VAR_7->dev);
  if (VAR_6 < 0)
   return VAR_6;

  FUNC_2(&VAR_7->dev, 1);
 }

 if (!(VAR_5.flags & VAR_3)) {
  struct acpi_device *VAR_8 = ((void*)0);

  VAR_6 = FUNC_0(&VAR_8, ((void*)0),
      VAR_1,
      VAR_4);
  if (VAR_6)
   return VAR_6;

  VAR_8->flags.match_driver = 1;
  VAR_6 = FUNC_1(&VAR_8->dev);
 }

 return VAR_6 < 0 ? VAR_6 : 0;
}
