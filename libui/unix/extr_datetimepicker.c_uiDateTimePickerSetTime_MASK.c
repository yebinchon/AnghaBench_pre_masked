
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int setBlock; int d; } ;
typedef TYPE_1__ uiDateTimePicker ;
typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tm*,struct tm const*,int) ;
 int FUNC_5 (struct tm*) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(uiDateTimePicker *VAR_0, const struct tm *VAR_1)
{
 time_t VAR_2;
 struct tm VAR_3;


 FUNC_2(VAR_0->d, VAR_0->setBlock);


 FUNC_4(&VAR_3, VAR_1, sizeof (struct tm));
 VAR_2 = FUNC_5(&VAR_3);

 FUNC_6(VAR_0->d, FUNC_1(VAR_2));
 FUNC_0(VAR_0->d);

 FUNC_3(VAR_0->d, VAR_0->setBlock);
}
