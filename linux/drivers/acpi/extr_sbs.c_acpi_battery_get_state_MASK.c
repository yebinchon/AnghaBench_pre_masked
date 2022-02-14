
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct acpi_battery {scalar_t__ update_time; TYPE_1__* sbs; } ;
struct TYPE_5__ {int offset; int command; int mode; } ;
struct TYPE_4__ {int hc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct acpi_battery *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (VAR_4->update_time &&
     FUNC_3(VAR_2, VAR_4->update_time +
    FUNC_2(VAR_1)))
  return 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); ++VAR_5) {
  VAR_6 = FUNC_1(VAR_4->sbs->hc,
      VAR_3[VAR_5].mode,
      VAR_0,
      VAR_3[VAR_5].command,
             (u8 *)VAR_4 +
      VAR_3[VAR_5].offset);
  if (VAR_6)
   goto end;
 }
      end:
 VAR_4->update_time = VAR_2;
 return VAR_6;
}
