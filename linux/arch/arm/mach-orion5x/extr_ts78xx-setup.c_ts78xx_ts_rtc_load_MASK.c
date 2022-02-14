
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int init; } ;
struct TYPE_5__ {TYPE_1__ ts_rtc; } ;
struct TYPE_6__ {TYPE_2__ supports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2;

 if (VAR_0.supports.ts_rtc.init == 0) {
  VAR_2 = FUNC_1(&VAR_1);
  if (!VAR_2)
   VAR_0.supports.ts_rtc.init = 1;
 } else {
  VAR_2 = FUNC_0(&VAR_1);
 }

 if (VAR_2)
  FUNC_2("RTC could not be registered: %d\n", VAR_2);

 return VAR_2;
}
