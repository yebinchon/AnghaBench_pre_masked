
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_year; int tm_mon; int tm_mday; } ;
typedef int locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tm*,int ,int) ;
 int FUNC_3 (int ,char*,int *) ;
 char* FUNC_4 (char const*,char const*,struct tm*,int ) ;

__attribute__((used)) static void
FUNC_5(char const * VAR_2, struct tm *VAR_3)
{
 struct tm VAR_4;
 locale_t VAR_5;
 int VAR_6;
 char *VAR_7;
 const char *VAR_8[] = {
  "%d-%b-%y",
  "%d-%b-%Y",
  "%d-%m-%y",
  "%d-%m-%Y",
  "%H:%M %d-%b-%y",
  "%H:%M %d-%b-%Y",
  "%H:%M %d-%m-%y",
  "%H:%M %d-%m-%Y",
  "%H:%M:%S %d-%b-%y",
  "%H:%M:%S %d-%b-%Y",
  "%H:%M:%S %d-%m-%y",
  "%H:%M:%S %d-%m-%Y",
  "%d-%b-%y %H:%M",
  "%d-%b-%Y %H:%M",
  "%d-%m-%y %H:%M",
  "%d-%m-%Y %H:%M",
  "%d-%b-%y %H:%M:%S",
  "%d-%b-%Y %H:%M:%S",
  "%d-%m-%y %H:%M:%S",
  "%d-%m-%Y %H:%M:%S",
  "%H:%M\t%d-%b-%y",
  "%H:%M\t%d-%b-%Y",
  "%H:%M\t%d-%m-%y",
  "%H:%M\t%d-%m-%Y",
  "%H:%M\t%S %d-%b-%y",
  "%H:%M\t%S %d-%b-%Y",
  "%H:%M\t%S %d-%m-%y",
  "%H:%M\t%S %d-%m-%Y",
  "%d-%b-%y\t%H:%M",
  "%d-%b-%Y\t%H:%M",
  "%d-%m-%y\t%H:%M",
  "%d-%m-%Y\t%H:%M",
  "%d-%b-%y\t%H:%M:%S",
  "%d-%b-%Y\t%H:%M:%S",
  "%d-%m-%y\t%H:%M:%S",
  "%d-%m-%Y\t%H:%M:%S",
  ((void*)0),
 };

 VAR_5 = FUNC_3(VAR_1, "C", ((void*)0));

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 for (VAR_6=0; VAR_8[VAR_6] != ((void*)0); VAR_6++) {
  VAR_7 = FUNC_4(VAR_2, VAR_8[VAR_6], &VAR_4, VAR_5);
  if (VAR_7 && *VAR_7 == '\0') {
   VAR_3->tm_mday = VAR_4.tm_mday;
   VAR_3->tm_mon = VAR_4.tm_mon;
   VAR_3->tm_year = VAR_4.tm_year;
   VAR_3->tm_hour = VAR_4.tm_hour;
   VAR_3->tm_min = VAR_4.tm_min;
   VAR_3->tm_sec = VAR_4.tm_sec;
   FUNC_1(VAR_5);
   return;
  }
 }

 FUNC_1(VAR_5);

 FUNC_0(VAR_0, "Invalid date");
}
