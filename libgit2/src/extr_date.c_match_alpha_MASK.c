
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {unsigned int tm_mon; unsigned int tm_wday; int tm_hour; } ;
struct TYPE_3__ {char* name; int offset; scalar_t__ dst; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,char*) ;
 char** VAR_0 ;
 size_t FUNC_2 (char const*) ;
 size_t FUNC_3 (char*) ;
 TYPE_1__* VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static size_t FUNC_4(const char *VAR_3, struct tm *VAR_4, int *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < 12; VAR_6++) {
  size_t VAR_7 = FUNC_1(VAR_3, VAR_0[VAR_6]);
  if (VAR_7 >= 3) {
   VAR_4->tm_mon = VAR_6;
   return VAR_7;
  }
 }

 for (VAR_6 = 0; VAR_6 < 7; VAR_6++) {
  size_t VAR_8 = FUNC_1(VAR_3, VAR_2[VAR_6]);
  if (VAR_8 >= 3) {
   VAR_4->tm_wday = VAR_6;
   return VAR_8;
  }
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  size_t VAR_9 = FUNC_1(VAR_3, VAR_1[VAR_6].name);
  if (VAR_9 >= 3 || VAR_9 == FUNC_3(VAR_1[VAR_6].name)) {
   int VAR_10 = VAR_1[VAR_6].offset;


   VAR_10 += VAR_1[VAR_6].dst;


   if (*VAR_5 == -1)
    *VAR_5 = 60*VAR_10;

   return VAR_9;
  }
 }

 if (FUNC_1(VAR_3, "PM") == 2) {
  VAR_4->tm_hour = (VAR_4->tm_hour % 12) + 12;
  return 2;
 }

 if (FUNC_1(VAR_3, "AM") == 2) {
  VAR_4->tm_hour = (VAR_4->tm_hour % 12) + 0;
  return 2;
 }


 return FUNC_2(VAR_3);
}
