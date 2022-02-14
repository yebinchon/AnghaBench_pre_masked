
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*) ;
 scalar_t__ VAR_1 ;

char *
FUNC_2(const char *VAR_2)
{
 char *VAR_3;

 if (!VAR_2)
  VAR_2 = "Oops";
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0)) {
  if (VAR_1)
   VAR_0 = 1;
  else
   FUNC_0("out of memory\n");
 }
 return VAR_3;
}
