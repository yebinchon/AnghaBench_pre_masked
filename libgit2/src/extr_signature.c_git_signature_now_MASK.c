
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; } ;
typedef int git_signature ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int **,char const*,char const*,int,int) ;
 int FUNC_2 (struct tm*) ;
 struct tm* FUNC_3 (int*,struct tm*) ;
 int FUNC_4 (int*) ;

int FUNC_5(git_signature **VAR_0, const char *VAR_1, const char *VAR_2)
{
 time_t VAR_3;
 time_t VAR_4;
 struct tm *VAR_5;
 git_signature *VAR_6;
 struct tm VAR_7;

 *VAR_0 = ((void*)0);
 FUNC_4(&VAR_3);
 VAR_5 = FUNC_3(&VAR_3, &VAR_7);
 VAR_5->tm_isdst = -1;
 VAR_4 = (time_t)FUNC_0(VAR_3, FUNC_2(VAR_5));
 VAR_4 /= 60;

 if (FUNC_1(&VAR_6, VAR_1, VAR_2, VAR_3, (int)VAR_4) < 0)
  return -1;

 *VAR_0 = VAR_6;

 return 0;
}
