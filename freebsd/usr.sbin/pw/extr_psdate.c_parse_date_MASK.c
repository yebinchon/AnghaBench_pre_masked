
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef long time_t ;
struct tm {int tm_mon; int tm_mday; int tm_year; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 struct tm* FUNC_2 (long*) ;
 long FUNC_3 (struct tm*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char*,struct tm*) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char const*,int) ;
 char* FUNC_8 (char*,char) ;
 long FUNC_9 (char const*,char**,int ) ;
 long FUNC_10 (int *) ;
 int FUNC_11 (char const**) ;

time_t
FUNC_12(time_t VAR_0, char const * VAR_1)
{
 char *VAR_2;
 int VAR_3;
 long VAR_4;
 struct tm *VAR_5;

 if (VAR_0 == 0)
  VAR_0 = FUNC_10(((void*)0));

 while (*VAR_1 && FUNC_0((unsigned char)*VAR_1))
  ++VAR_1;

 if (FUNC_4(VAR_1)) {
  VAR_0 = FUNC_9(VAR_1, &VAR_2, 0);
 } else if (*VAR_1 == '+' || *VAR_1 == '-') {
  VAR_4 = FUNC_9(VAR_1, &VAR_2, 0);
  switch (*VAR_2) {
  case 'h':
  case 'H':
   VAR_0 += (VAR_4 * 3600L);
   break;
  case '\0':
  case 'm':
  case 'M':
   VAR_0 += (VAR_4 * 60L);
   break;
  case 's':
  case 'S':
   VAR_0 += VAR_4;
   break;
  case 'd':
  case 'D':
   VAR_0 += (VAR_4 * 86400L);
   break;
  case 'w':
  case 'W':
   VAR_0 += (VAR_4 * 604800L);
   break;
  case 'o':
  case 'O':
   VAR_5 = FUNC_2(&VAR_0);
   VAR_5->tm_mon += (int) VAR_4;
   VAR_3 = VAR_5->tm_mday;
   goto fixday;
  case 'y':
  case 'Y':
   VAR_5 = FUNC_2(&VAR_0);
   VAR_5->tm_year += (int) VAR_4;
   VAR_3 = VAR_5->tm_mday;
 fixday:
   VAR_0 = FUNC_3(VAR_5);
   VAR_5 = FUNC_2(&VAR_0);
   if (VAR_5->tm_mday != VAR_3) {
    VAR_5->tm_mday = 1;
    VAR_0 = FUNC_3(VAR_5);
    VAR_0 -= (time_t) 86400L;
   }
  default:
   break;
  }
 } else {
  char *VAR_6, VAR_7[64];




  FUNC_11(&VAR_1);
  FUNC_7(VAR_7, VAR_1, sizeof(VAR_7));
  VAR_1 = VAR_7;
  VAR_5 = FUNC_2(&VAR_0);




  while ((VAR_6 = FUNC_8(VAR_7, ' ')) != ((void*)0)) {
   if (FUNC_6("(+-", VAR_6[1]) != ((void*)0))
    *VAR_6 = '\0';
   else {
    int VAR_8 = 1;

    while (VAR_6[VAR_8] && FUNC_1((unsigned char)VAR_6[VAR_8]))
     ++VAR_8;
    if (VAR_6[VAR_8] == '\0')
     *VAR_6 = '\0';
    else
     break;
   }
  }

  FUNC_5(VAR_7, VAR_5);
  VAR_0 = FUNC_3(VAR_5);
 }
 return VAR_0;
}
