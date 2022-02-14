
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (char const**,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3)
{
 const char *VAR_4 = VAR_3;
 unsigned VAR_5 = 0;

 while (*VAR_3) {
  if (FUNC_0(&VAR_3, "none"))
   VAR_5 = 0;
  else if (FUNC_0(&VAR_3, "default"))
   VAR_5 = VAR_1;
  else if (FUNC_0(&VAR_3, "all"))
   VAR_5 = VAR_1 | VAR_2 | VAR_0;
  else if (FUNC_0(&VAR_3, "new"))
   VAR_5 |= VAR_1;
  else if (FUNC_0(&VAR_3, "old"))
   VAR_5 |= VAR_2;
  else if (FUNC_0(&VAR_3, "context"))
   VAR_5 |= VAR_0;
  else {
   return -1 - (int)(VAR_3 - VAR_4);
  }
  if (*VAR_3)
   VAR_3++;
 }
 return VAR_5;
}
