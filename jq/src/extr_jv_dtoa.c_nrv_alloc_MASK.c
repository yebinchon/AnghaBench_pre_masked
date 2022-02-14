
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {int dummy; } ;


 char* FUNC_0 (struct dtoa_context*,int) ;

__attribute__((used)) static char *
FUNC_1(struct dtoa_context* VAR_0, const char *VAR_1, char **VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;

 VAR_5 = VAR_4 = FUNC_0(VAR_0, VAR_3);
 while((*VAR_5 = *VAR_1++)) VAR_5++;
 if (VAR_2)
  *VAR_2 = VAR_5;
 return VAR_4;
 }
