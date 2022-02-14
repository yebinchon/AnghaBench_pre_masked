
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tz_dsttime; int tz_minuteswest; } ;
struct TYPE_4__ {int tz_dsttime; int tz_minuteswest; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void)
{
 VAR_1->tz_minuteswest = VAR_0.tz_minuteswest;
 VAR_1->tz_dsttime = VAR_0.tz_dsttime;
 FUNC_0(FUNC_1(VAR_1));
}
