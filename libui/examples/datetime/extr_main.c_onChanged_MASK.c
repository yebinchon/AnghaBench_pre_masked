
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDateTimePicker ;
struct tm {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int,int ,struct tm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(uiDateTimePicker *VAR_0, void *VAR_1)
{
 struct tm VAR_2;
 char VAR_3[64];

 FUNC_2(VAR_0, &VAR_2);
 FUNC_0(VAR_3, sizeof (VAR_3), FUNC_1(VAR_0), &VAR_2);
 FUNC_4(FUNC_3(VAR_1), VAR_3);
}
