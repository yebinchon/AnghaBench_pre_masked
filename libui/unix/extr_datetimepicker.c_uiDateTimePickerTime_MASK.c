
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; } ;
typedef TYPE_1__ uiDateTimePicker ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef int GDateTime ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (struct tm*,struct tm*,int) ;
 int * FUNC_4 (int ) ;

void FUNC_5(uiDateTimePicker *VAR_0, struct tm *VAR_1)
{
 time_t VAR_2;
 struct tm VAR_3;
 GDateTime *VAR_4;

 VAR_4 = FUNC_4(VAR_0->d);
 VAR_2 = FUNC_0(VAR_4);
 FUNC_1(VAR_4);



 VAR_3 = *FUNC_2(&VAR_2);
 FUNC_3(VAR_1, &VAR_3, sizeof (struct tm));
}
