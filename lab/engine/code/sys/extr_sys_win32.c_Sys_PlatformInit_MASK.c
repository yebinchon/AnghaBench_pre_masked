
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptc ;
struct TYPE_3__ {int wPeriodMin; } ;
typedef TYPE_1__ TIMECAPS ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;

void FUNC_4( void )
{

 TIMECAPS VAR_2;


 FUNC_1();


 if(FUNC_3(&VAR_2, sizeof(VAR_2)) == VAR_0)
 {
  VAR_1 = VAR_2.wPeriodMin;

  if(VAR_1 > 1)
  {
   FUNC_0("Warning: Minimum supported timer resolution is %ums "
    "on this system, recommended resolution 1ms\n", VAR_1);
  }

  FUNC_2(VAR_1);
 }
 else
  VAR_1 = 0;

}
