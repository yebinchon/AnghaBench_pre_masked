
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (int,char,char const*,char*,struct tm*,int ) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, struct tm *VAR_1, int *VAR_2,
         time_t VAR_3)
{
 char *VAR_4;
 timestamp_t VAR_5 = FUNC_2(VAR_0, &VAR_4, 10);

 switch (*VAR_4) {
 case ':':
 case '.':
 case '/':
 case '-':
  if (FUNC_0(VAR_4[1])) {
   int VAR_6 = FUNC_1(VAR_5, *VAR_4, VAR_0, VAR_4,
             VAR_1, VAR_3);
   if (VAR_6)
    return VAR_0 + VAR_6;
  }
 }


 if (VAR_0[0] != '0' || VAR_4 - VAR_0 <= 2)
  *VAR_2 = VAR_5;
 return VAR_4;
}
