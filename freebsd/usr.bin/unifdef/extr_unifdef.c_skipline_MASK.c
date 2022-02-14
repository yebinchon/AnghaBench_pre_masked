
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_2)
{
 const char *VAR_3;
 if (*VAR_2 != '\0')
  VAR_1 = VAR_0;
 while (*VAR_2 != '\0') {
  VAR_2 = FUNC_0(VAR_3 = VAR_2);
  if (VAR_3 == VAR_2)
   VAR_2++;
 }
 return (VAR_2);
}
