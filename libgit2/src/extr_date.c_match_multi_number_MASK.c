
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {unsigned long tm_hour; long tm_min; long tm_sec; } ;


 int FUNC_0 (long,unsigned long,long,struct tm*,int ,struct tm*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *,struct tm*) ;
 long FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static size_t FUNC_5(unsigned long VAR_0, char VAR_1, const char *VAR_2, char *VAR_3, struct tm *VAR_4)
{
 time_t VAR_5;
 struct tm VAR_6;
 struct tm *VAR_7;
 long VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_3+1, &VAR_3, 10);
 VAR_9 = -1;
 if (*VAR_3 == VAR_1 && FUNC_1(VAR_3[1]))
  VAR_9 = FUNC_3(VAR_3+1, &VAR_3, 10);


 switch (VAR_1) {
 case ':':
  if (VAR_9 < 0)
   VAR_9 = 0;
  if (VAR_0 < 25 && VAR_8 >= 0 && VAR_8 < 60 && VAR_9 >= 0 && VAR_9 <= 60) {
   VAR_4->tm_hour = VAR_0;
   VAR_4->tm_min = VAR_8;
   VAR_4->tm_sec = VAR_9;
   break;
  }
  return 0;

 case '-':
 case '/':
 case '.':
  VAR_5 = FUNC_4(((void*)0));
  VAR_7 = ((void*)0);
  if (FUNC_2(&VAR_5, &VAR_6))
   VAR_7 = &VAR_6;

  if (VAR_0 > 70) {

   if (FUNC_0(VAR_0, VAR_8, VAR_9, VAR_7, VAR_5, VAR_4))
    break;

   if (FUNC_0(VAR_0, VAR_9, VAR_8, VAR_7, VAR_5, VAR_4))
    break;
  }




  if (VAR_1 != '.' &&
      FUNC_0(VAR_9, VAR_0, VAR_8, VAR_7, VAR_5, VAR_4))
   break;

  if (FUNC_0(VAR_9, VAR_8, VAR_0, VAR_7, VAR_5, VAR_4))
   break;

  if (VAR_1 == '.' &&
      FUNC_0(VAR_9, VAR_0, VAR_8, VAR_7, VAR_5, VAR_4))
   break;
  return 0;
 }
 return VAR_3 - VAR_2;
}
