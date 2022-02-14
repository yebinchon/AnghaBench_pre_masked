
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
typedef char* (* nth_line_fn_t ) (void*,long) ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int,int *,char*,int) ;
 int FUNC_3 (int *,char const*,int,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static const char *FUNC_6(const char *VAR_1, nth_line_fn_t VAR_2,
        void *VAR_3, long VAR_4, long VAR_5, long *VAR_6)
{
 char *VAR_7;
 const char *VAR_8;
 long VAR_9;
 int VAR_10;
 regex_t VAR_11;
 regmatch_t VAR_12[1];





 if (1 <= VAR_5 && (VAR_1[0] == '+' || VAR_1[0] == '-')) {
  VAR_9 = FUNC_5(VAR_1 + 1, &VAR_7, 10);
  if (VAR_7 != VAR_1 + 1) {
   if (!VAR_6)
    return VAR_7;
   if (VAR_9 == 0)
    FUNC_0("-L invalid empty range");
   if (VAR_1[0] == '-')
    VAR_9 = 0 - VAR_9;
   if (0 < VAR_9)
    *VAR_6 = VAR_5 + VAR_9 - 2;
   else if (!VAR_9)
    *VAR_6 = VAR_5;
   else
    *VAR_6 = VAR_5 + VAR_9 > 0 ? VAR_5 + VAR_9 : 1;
   return VAR_7;
  }
  return VAR_1;
 }
 VAR_9 = FUNC_5(VAR_1, &VAR_7, 10);
 if (VAR_7 != VAR_1) {
  if (VAR_6) {
   if (VAR_9 <= 0)
    FUNC_0("-L invalid line number: %ld", VAR_9);
   *VAR_6 = VAR_9;
  }
  return VAR_7;
 }

 if (VAR_5 < 0) {
  if (VAR_1[0] != '^')
   VAR_5 = -VAR_5;
  else {
   VAR_5 = 1;
   VAR_1++;
  }
 }

 if (VAR_1[0] != '/')
  return VAR_1;


 for (VAR_7 = (char *) VAR_1 + 1; *VAR_7 && *VAR_7 != '/'; VAR_7++) {
  if (*VAR_7 == '\\')
   VAR_7++;
 }
 if (*VAR_7 != '/')
  return VAR_1;


 if (!VAR_6)
  return VAR_7+1;


 *VAR_7 = 0;
 VAR_5--;
 VAR_8 = VAR_2(VAR_3, VAR_5);

 if (!(VAR_10 = FUNC_1(&VAR_11, VAR_1 + 1, VAR_0)) &&
     !(VAR_10 = FUNC_3(&VAR_11, VAR_8, 1, VAR_12, 0))) {
  const char *VAR_13 = VAR_8 + VAR_12[0].rm_so;
  const char *VAR_14;

  while (VAR_5++ < VAR_4) {
   VAR_14 = VAR_2(VAR_3, VAR_5);
   if (VAR_8 <= VAR_13 && VAR_13 < VAR_14)
    break;
   VAR_8 = VAR_14;
  }
  *VAR_6 = VAR_5;
  FUNC_4(&VAR_11);
  *VAR_7++ = '/';
  return VAR_7;
 }
 else {
  char VAR_15[1024];
  FUNC_2(VAR_10, &VAR_11, VAR_15, 1024);
  FUNC_0("-L parameter '%s' starting at line %ld: %s",
      VAR_1 + 1, VAR_5 + 1, VAR_15);
 }
}
