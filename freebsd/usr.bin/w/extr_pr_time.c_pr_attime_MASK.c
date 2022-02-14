
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int time_t ;
struct tm {scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int buf ;


 struct tm* FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int,char const*,struct tm*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,unsigned long) ;
 int FUNC_5 (char*,char*,...) ;

int
FUNC_6(time_t *VAR_1, time_t *VAR_2)
{
 static wchar_t VAR_3[256];
 struct tm VAR_4, VAR_5;
 time_t VAR_6;
 const wchar_t *VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;

 VAR_4 = *FUNC_0(VAR_1);
 VAR_5 = *FUNC_0(VAR_2);
 VAR_6 = *VAR_2 - *VAR_1;


 if (VAR_6 > 86400 * 7)
  VAR_7 = L"%d%b%y";


 else if (VAR_5.tm_mday != VAR_4.tm_mday ||
   VAR_5.tm_mon != VAR_4.tm_mon ||
   VAR_5.tm_year != VAR_4.tm_year) {


  VAR_7 = VAR_0 ? L"%a%I%p" : L"%a%H";
 }


 else {
  VAR_7 = VAR_0 ? L"%l:%M%p" : L"%k:%M";
 }

 (void)FUNC_1(VAR_3, sizeof(VAR_3), VAR_7, &VAR_4);
 VAR_8 = FUNC_2(VAR_3);
 VAR_9 = FUNC_3(VAR_3, VAR_8);
 FUNC_4("since", "%lu", (unsigned long) *VAR_1);
 FUNC_4("delta", "%lu", (unsigned long) VAR_6);
 if (VAR_8 == VAR_9)
  FUNC_5("{:login-time/%-7.7ls/%ls}", VAR_3);
 else if (VAR_9 < 7)
         FUNC_5("{:login-time/%ls}%.*s", VAR_3, 7 - VAR_9, "      ");
 else {
  FUNC_5("{:login-time/%ls}", VAR_3);
  VAR_10 = VAR_9 - 7;
 }
 return (VAR_10);
}
