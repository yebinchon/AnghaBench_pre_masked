
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state_count; } ;
struct TYPE_3__ {scalar_t__ throttling; } ;
struct acpi_processor {TYPE_2__ throttling; TYPE_1__ flags; int id; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct acpi_processor *VAR_0)
{
 int VAR_1 = 0;





 VAR_1 += FUNC_0(VAR_0->id);
 if (VAR_0->flags.throttling)
  VAR_1 += (VAR_0->throttling.state_count -1);

 return VAR_1;
}
