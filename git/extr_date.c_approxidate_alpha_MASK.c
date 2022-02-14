
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typelen {char* type; int length; } ;
struct tm {int tm_mon; int tm_wday; scalar_t__ tm_year; } ;
struct special {char* name; int (* fn ) (struct tm*,struct tm*,int*) ;} ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*) ;
 char** VAR_0 ;
 char** VAR_1 ;
 struct special* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tm*,struct tm*,int*) ;
 struct typelen* VAR_3 ;
 int FUNC_4 (struct tm*,struct tm*,int) ;
 char** VAR_4 ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_5, struct tm *VAR_6, struct tm *VAR_7, int *VAR_8, int *VAR_9)
{
 const struct typelen *VAR_10;
 const struct special *VAR_11;
 const char *VAR_12 = VAR_5;
 int VAR_13;

 while (FUNC_0(*++VAR_12))
  ;

 for (VAR_13 = 0; VAR_13 < 12; VAR_13++) {
  int VAR_14 = FUNC_1(VAR_5, VAR_0[VAR_13]);
  if (VAR_14 >= 3) {
   VAR_6->tm_mon = VAR_13;
   *VAR_9 = 1;
   return VAR_12;
  }
 }

 for (VAR_11 = VAR_2; VAR_11->name; VAR_11++) {
  int VAR_15 = FUNC_2(VAR_11->name);
  if (FUNC_1(VAR_5, VAR_11->name) == VAR_15) {
   VAR_11->fn(VAR_6, VAR_7, VAR_8);
   *VAR_9 = 1;
   return VAR_12;
  }
 }

 if (!*VAR_8) {
  for (VAR_13 = 1; VAR_13 < 11; VAR_13++) {
   int VAR_16 = FUNC_2(VAR_1[VAR_13]);
   if (FUNC_1(VAR_5, VAR_1[VAR_13]) == VAR_16) {
    *VAR_8 = VAR_13;
    *VAR_9 = 1;
    return VAR_12;
   }
  }
  if (FUNC_1(VAR_5, "last") == 4) {
   *VAR_8 = 1;
   *VAR_9 = 1;
  }
  return VAR_12;
 }

 VAR_10 = VAR_3;
 while (VAR_10->type) {
  int VAR_17 = FUNC_2(VAR_10->type);
  if (FUNC_1(VAR_5, VAR_10->type) >= VAR_17-1) {
   FUNC_4(VAR_6, VAR_7, VAR_10->length * *VAR_8);
   *VAR_8 = 0;
   *VAR_9 = 1;
   return VAR_12;
  }
  VAR_10++;
 }

 for (VAR_13 = 0; VAR_13 < 7; VAR_13++) {
  int VAR_18 = FUNC_1(VAR_5, VAR_4[VAR_13]);
  if (VAR_18 >= 3) {
   int VAR_19, VAR_20 = *VAR_8 -1;
   *VAR_8 = 0;

   VAR_19 = VAR_6->tm_wday - VAR_13;
   if (VAR_19 <= 0)
    VAR_20++;
   VAR_19 += 7*VAR_20;

   FUNC_4(VAR_6, VAR_7, VAR_19 * 24 * 60 * 60);
   *VAR_9 = 1;
   return VAR_12;
  }
 }

 if (FUNC_1(VAR_5, "months") >= 5) {
  int VAR_21;
  FUNC_4(VAR_6, VAR_7, 0);
  VAR_21 = VAR_6->tm_mon - *VAR_8;
  *VAR_8 = 0;
  while (VAR_21 < 0) {
   VAR_21 += 12;
   VAR_6->tm_year--;
  }
  VAR_6->tm_mon = VAR_21;
  *VAR_9 = 1;
  return VAR_12;
 }

 if (FUNC_1(VAR_5, "years") >= 4) {
  FUNC_4(VAR_6, VAR_7, 0);
  VAR_6->tm_year -= *VAR_8;
  *VAR_8 = 0;
  *VAR_9 = 1;
  return VAR_12;
 }

 return VAR_12;
}
