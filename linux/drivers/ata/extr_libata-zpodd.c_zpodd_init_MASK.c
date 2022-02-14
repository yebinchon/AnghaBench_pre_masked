
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpodd {int mech_type; struct ata_device* dev; } ;
struct ata_device {int tdev; struct zpodd* zpodd; } ;
struct acpi_device {int dummy; } ;
typedef enum odd_mech_type { ____Placeholder_odd_mech_type } odd_mech_type ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (int *,int ) ;
 struct zpodd* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ata_device*) ;

void FUNC_6(struct ata_device *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(&VAR_2->tdev);
 enum odd_mech_type VAR_4;
 struct zpodd *VAR_5;

 if (VAR_2->zpodd || !VAR_3 || !FUNC_1(VAR_3))
  return;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 == VAR_1)
  return;

 VAR_5 = FUNC_4(sizeof(struct zpodd), VAR_0);
 if (!VAR_5)
  return;

 VAR_5->mech_type = VAR_4;

 FUNC_2(VAR_2);
 VAR_5->dev = VAR_2;
 VAR_2->zpodd = VAR_5;
 FUNC_3(&VAR_2->tdev, 0);
}
