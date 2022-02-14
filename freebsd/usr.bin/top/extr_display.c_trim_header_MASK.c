
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int) ;

char *
FUNC_2(const char *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_3 = ((void*)0);
 VAR_4 = VAR_1;
 VAR_0 = FUNC_0(VAR_2);
 if (VAR_0 >= VAR_4) {
  VAR_3 = FUNC_1(VAR_2, VAR_4);
  if (VAR_3 == ((void*)0))
   return (((void*)0));
 }
 return (VAR_3);
}
