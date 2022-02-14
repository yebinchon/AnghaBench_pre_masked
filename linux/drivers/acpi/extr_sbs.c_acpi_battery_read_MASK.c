
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct acpi_battery {int present; int id; scalar_t__ update_time; TYPE_1__* sbs; } ;
struct TYPE_2__ {int hc; scalar_t__ manager_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (int ,int ,int ,int,int *) ;
 int FUNC_3 (int ,int ,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct acpi_battery *VAR_3)
{
 int VAR_4 = 0, VAR_5 = VAR_3->present;
 u16 VAR_6;

 if (VAR_3->sbs->manager_present) {
  VAR_4 = FUNC_2(VAR_3->sbs->hc, VAR_1,
    VAR_0, 0x01, (u8 *)&VAR_6);
  if (!VAR_4)
   VAR_3->present = VAR_6 & (1 << VAR_3->id);
  VAR_6 &= 0x0fff;
  VAR_6 |= 1 << (VAR_3->id + 12);
  FUNC_3(VAR_3->sbs->hc, VAR_2,
      VAR_0, 0x01, (u8 *)&VAR_6, 2);
 } else if (VAR_3->id == 0)
  VAR_3->present = 1;

 if (VAR_4 || !VAR_3->present)
  return VAR_4;

 if (VAR_5 != VAR_3->present) {
  VAR_3->update_time = 0;
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4) {
   VAR_3->present = 0;
   return VAR_4;
  }
 }
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  VAR_3->present = 0;
 return VAR_4;
}
