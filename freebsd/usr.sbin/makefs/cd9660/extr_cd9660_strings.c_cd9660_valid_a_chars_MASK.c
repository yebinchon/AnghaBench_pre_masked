
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (unsigned char) ;

int
FUNC_2(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;
 int VAR_2 = 0;

 while ((*VAR_1) != '\0') {
  if (!(FUNC_0(*VAR_1))) {
   if (FUNC_1((unsigned char)*VAR_1) )
    VAR_2 = 1;
   else
    return 0;
  }
  VAR_1++;
 }
 return VAR_2 + 1;
}
