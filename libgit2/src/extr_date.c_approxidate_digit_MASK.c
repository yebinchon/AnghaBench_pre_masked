
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;


 int FUNC_0 (char) ;
 size_t FUNC_1 (unsigned long,char,char const*,char*,struct tm*) ;
 unsigned long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, struct tm *VAR_1, int *VAR_2)
{
 char *VAR_3;
 unsigned long VAR_4 = FUNC_2(VAR_0, &VAR_3, 10);

 switch (*VAR_3) {
 case ':':
 case '.':
 case '/':
 case '-':
  if (FUNC_0(VAR_3[1])) {
   size_t VAR_5 = FUNC_1(VAR_4, *VAR_3, VAR_0, VAR_3, VAR_1);
   if (VAR_5)
    return VAR_0 + VAR_5;
  }
 }


 if (VAR_0[0] != '0' || VAR_3 - VAR_0 <= 2)
  *VAR_2 = VAR_4;
 return VAR_3;
}
