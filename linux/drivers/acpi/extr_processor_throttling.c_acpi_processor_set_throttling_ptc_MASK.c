
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int state_count; int state; } ;
struct TYPE_4__ {int throttling; } ;
struct acpi_processor {int throttling_platform_limit; TYPE_1__ throttling; TYPE_2__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_processor*,int,scalar_t__*) ;
 int FUNC_1 (struct acpi_processor*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct acpi_processor *VAR_3,
          int VAR_4, bool VAR_5)
{
 int VAR_6;
 u64 VAR_7;

 if (!VAR_3)
  return -VAR_0;

 if ((VAR_4 < 0) || (VAR_4 > (VAR_3->throttling.state_count - 1)))
  return -VAR_0;

 if (!VAR_3->flags.throttling)
  return -VAR_1;

 if (!VAR_5 && (VAR_4 == VAR_3->throttling.state))
  return 0;

 if (VAR_4 < VAR_3->throttling_platform_limit)
  return -VAR_2;

 VAR_7 = 0;
 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_7);
 if (VAR_6 >= 0) {
  FUNC_1(VAR_3, VAR_7);
  VAR_3->throttling.state = VAR_4;
 }

 return 0;
}
