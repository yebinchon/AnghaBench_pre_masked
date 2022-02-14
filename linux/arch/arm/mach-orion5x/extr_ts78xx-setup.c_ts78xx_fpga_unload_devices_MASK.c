
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int present; } ;
struct TYPE_7__ {int present; } ;
struct TYPE_6__ {int present; } ;
struct TYPE_9__ {TYPE_3__ ts_rng; TYPE_2__ ts_nand; TYPE_1__ ts_rtc; } ;
struct TYPE_10__ {TYPE_4__ supports; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_1 = 0;

 if (VAR_0.supports.ts_rtc.present == 1)
  FUNC_2();
 if (VAR_0.supports.ts_nand.present == 1)
  FUNC_0();
 if (VAR_0.supports.ts_rng.present == 1)
  FUNC_1();

 return VAR_1;
}
