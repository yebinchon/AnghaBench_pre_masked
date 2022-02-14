
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum acpi_backlight_type { ____Placeholder_acpi_backlight_type } acpi_backlight_type ;
struct TYPE_3__ {scalar_t__ priority; int notifier_call; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int *,long*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int VAR_16 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_17 ;

enum acpi_backlight_type FUNC_9(void)
{
 static DEFINE_MUTEX(VAR_18);
 static bool VAR_19;
 static long VAR_20;


 FUNC_7(&VAR_18);
 if (!VAR_19) {
  FUNC_2();
  FUNC_6(VAR_17);
  FUNC_3(VAR_1, VAR_0,
        VAR_2, VAR_16, ((void*)0),
        &VAR_20, ((void*)0));
  FUNC_0(&VAR_15,
     VAR_12);
  VAR_13.notifier_call = VAR_11;
  VAR_13.priority = 0;
  if (FUNC_5(&VAR_13) == 0)
   VAR_14 = 1;
  VAR_19 = 1;
 }
 FUNC_8(&VAR_18);

 if (VAR_5 != VAR_8)
  return VAR_5;

 if (VAR_6 != VAR_8)
  return VAR_6;

 if (!(VAR_20 & VAR_3))
  return VAR_9;

 if (FUNC_1() && FUNC_4(VAR_4))
  return VAR_7;

 return VAR_10;
}
