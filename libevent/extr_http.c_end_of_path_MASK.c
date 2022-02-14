
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum uri_part { ____Placeholder_uri_part } uri_part ;


 scalar_t__ FUNC_0 (char) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;



 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_2, enum uri_part VAR_3, unsigned VAR_4)
{
 if (VAR_4 & VAR_0) {





  switch (VAR_3) {
  case 129:
   while (*VAR_2 && *VAR_2 != '#' && *VAR_2 != '?')
    ++VAR_2;
   break;
  case 128:
   while (*VAR_2 && *VAR_2 != '#')
    ++VAR_2;
   break;
  case 130:
   VAR_2 += FUNC_3(VAR_2);
   break;
  };
  return VAR_2;
 }

 while (*VAR_2) {
  if (FUNC_0(*VAR_2) ||
      FUNC_2(VAR_1, *VAR_2) ||
      *VAR_2 == ':' || *VAR_2 == '@' || *VAR_2 == '/')
   ++VAR_2;
  else if (*VAR_2 == '%' && FUNC_1(VAR_2[1]) &&
      FUNC_1(VAR_2[2]))
   VAR_2 += 3;
  else if (*VAR_2 == '?' && VAR_3 != 129)
   ++VAR_2;
  else
   return VAR_2;
 }
 return VAR_2;
}
