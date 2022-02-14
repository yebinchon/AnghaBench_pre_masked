
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiButton ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tm* FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,struct tm*) ;

void FUNC_3(uiButton *VAR_3, void *VAR_4)
{
 intptr_t VAR_5;
 time_t VAR_6;
 struct tm VAR_7;

 VAR_5 = (intptr_t) VAR_4;
 VAR_6 = 0;
 if (VAR_5)
  VAR_6 = FUNC_1(((void*)0));
 VAR_7 = *FUNC_0(&VAR_6);

 if (VAR_5) {
  FUNC_2(VAR_1, &VAR_7);
  FUNC_2(VAR_2, &VAR_7);
 } else
  FUNC_2(VAR_0, &VAR_7);
}
