
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int throttling; } ;
struct TYPE_3__ {scalar_t__ state; int state_count; } ;
struct acpi_processor {TYPE_2__ flags; TYPE_1__ throttling; } ;


 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (struct acpi_processor*,int ,int) ;

void FUNC_2(struct acpi_processor *VAR_0,
     bool VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {



  VAR_0->flags.throttling = 0;
  return;
 }



 if (!VAR_0->throttling.state_count) {



  VAR_0->flags.throttling = 0;
  return;
 }
 VAR_0->flags.throttling = 1;






 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto end;

 if (VAR_0->throttling.state) {
  VAR_2 = FUNC_1(VAR_0, 0, 0);
  if (VAR_2)
   goto end;
 }

end:
 if (VAR_2)
  VAR_0->flags.throttling = 0;
}
