
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int member_0; } ;
typedef int git_time_t ;


 char* FUNC_0 (char const*,struct tm*,struct tm*,int*,int*) ;
 char* FUNC_1 (char const*,struct tm*,int*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (int *,struct tm*) ;
 int FUNC_5 (struct tm*,int*) ;
 int FUNC_6 (struct tm*,struct tm*,int ) ;

__attribute__((used)) static git_time_t FUNC_7(const char *VAR_0,
 time_t VAR_1,
 int *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 struct tm VAR_5 = {0}, VAR_6;

 FUNC_4(&VAR_1, &VAR_5);
 VAR_6 = VAR_5;

 VAR_5.tm_year = -1;
 VAR_5.tm_mon = -1;
 VAR_5.tm_mday = -1;

 for (;;) {
  unsigned char VAR_7 = *VAR_0;
  if (!VAR_7)
   break;
  VAR_0++;
  if (FUNC_3(VAR_7)) {
   FUNC_5(&VAR_5, &VAR_3);
   VAR_0 = FUNC_1(VAR_0-1, &VAR_5, &VAR_3);
   VAR_4 = 1;
   continue;
  }
  if (FUNC_2(VAR_7))
   VAR_0 = FUNC_0(VAR_0-1, &VAR_5, &VAR_6, &VAR_3, &VAR_4);
 }
 FUNC_5(&VAR_5, &VAR_3);
 if (!VAR_4)
  *VAR_2 = 1;
 return FUNC_6(&VAR_5, &VAR_6, 0);
}
