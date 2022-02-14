
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct TYPE_5__ {int tx; } ;
struct acpi_processor_limit {TYPE_3__ user; TYPE_2__ thermal; } ;
struct TYPE_4__ {int state_count; int state; } ;
struct acpi_processor {int throttling_platform_limit; struct acpi_processor_limit limit; TYPE_1__ throttling; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (struct acpi_processor*,int,int) ;
 scalar_t__ VAR_1 ;

int FUNC_2(struct acpi_processor *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5;
 struct acpi_processor_limit *VAR_6;
 int VAR_7;

 if (VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {

  return VAR_3;
 }

 VAR_4 = VAR_2->throttling_platform_limit;
 if (VAR_4 >= VAR_2->throttling.state_count) {

  return -VAR_0;
 }

 VAR_5 = VAR_2->throttling.state;
 if (VAR_5 > VAR_4) {







  VAR_6 = &VAR_2->limit;
  VAR_7 = VAR_4;
  if (VAR_6->thermal.tx > VAR_7)
   VAR_7 = VAR_6->thermal.tx;
  if (VAR_6->user.tx > VAR_7)
   VAR_7 = VAR_6->user.tx;
 } else if (VAR_5 == VAR_4) {



  return 0;
 } else {







  VAR_7 = VAR_4;
 }
 return FUNC_1(VAR_2, VAR_7, 0);
}
