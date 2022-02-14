
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

FILE *FUNC_2(const char *VAR_2)
{
 FILE *VAR_3 = FUNC_0(VAR_2, "w");

 if (!VAR_3 && VAR_1 == VAR_0) {
  if (!FUNC_1(VAR_2))
   VAR_3 = FUNC_0(VAR_2, "w");
  else
   VAR_1 = VAR_0;
 }
 return VAR_3;
}
