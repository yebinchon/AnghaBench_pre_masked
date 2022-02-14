
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int throttling; } ;
struct acpi_processor {TYPE_2__ throttling; TYPE_1__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_processor*,int,int,int) ;
 int FUNC_2 (struct acpi_processor*,scalar_t__) ;
 int FUNC_3 (struct acpi_processor*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct acpi_processor *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 u64 VAR_6;

 if (!VAR_3)
  return -VAR_1;

 if (!VAR_3->flags.throttling)
  return -VAR_2;

 VAR_3->throttling.state = 0;

 VAR_6 = 0;
 VAR_5 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_5 >= 0) {
  VAR_4 = FUNC_2(VAR_3, VAR_6);
  if (VAR_4 == -1) {
   FUNC_0((VAR_0,
    "Invalid throttling state, reset\n"));
   VAR_4 = 0;
   VAR_5 = FUNC_1(VAR_3, VAR_4, 1,
             1);
   if (VAR_5)
    return VAR_5;
  }
  VAR_3->throttling.state = VAR_4;
 }

 return 0;
}
