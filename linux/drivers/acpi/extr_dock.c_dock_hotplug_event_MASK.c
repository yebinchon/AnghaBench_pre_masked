
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dock_dependent_device {struct acpi_device* adev; } ;
struct acpi_device {TYPE_1__* hp; } ;
typedef enum dock_callback_type { ____Placeholder_dock_callback_type } dock_callback_type ;
struct TYPE_2__ {void (* fixup ) (struct acpi_device*) ;void (* uevent ) (struct acpi_device*,int ) ;int (* notify ) (struct acpi_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct dock_dependent_device *VAR_2, u32 VAR_3,
          enum dock_callback_type VAR_4)
{
 struct acpi_device *VAR_5 = VAR_2->adev;

 FUNC_0();

 if (!VAR_5->hp)
  goto out;

 if (VAR_4 == VAR_0) {
  void (*VAR_6)(struct acpi_device *);

  VAR_6 = VAR_5->hp->fixup;
  if (VAR_6) {
   FUNC_1();
   VAR_6(VAR_5);
   return;
  }
 } else if (VAR_4 == VAR_1) {
  void (*VAR_7)(struct acpi_device *, u32);

  VAR_7 = VAR_5->hp->uevent;
  if (VAR_7) {
   FUNC_1();
   VAR_7(VAR_5, VAR_3);
   return;
  }
 } else {
  int (*VAR_8)(struct acpi_device *, u32);

  VAR_8 = VAR_5->hp->notify;
  if (VAR_8) {
   FUNC_1();
   VAR_8(VAR_5, VAR_3);
   return;
  }
 }

 out:
 FUNC_1();
}
