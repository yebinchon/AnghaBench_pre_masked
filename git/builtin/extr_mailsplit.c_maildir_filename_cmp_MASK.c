
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 while (*VAR_0 && *VAR_1) {
  if (FUNC_0(*VAR_0) && FUNC_0(*VAR_1)) {
   long int VAR_2, VAR_3;
   VAR_2 = FUNC_1(VAR_0, (char **)&VAR_0, 10);
   VAR_3 = FUNC_1(VAR_1, (char **)&VAR_1, 10);
   if (VAR_2 != VAR_3)
    return VAR_2 - VAR_3;

  }
  else {
   if (*VAR_0 != *VAR_1)
    return (unsigned char)*VAR_0 - (unsigned char)*VAR_1;
   VAR_0++;
   VAR_1++;
  }
 }
 return (unsigned char)*VAR_0 - (unsigned char)*VAR_1;
}
