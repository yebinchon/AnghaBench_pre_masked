
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct args_info {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (struct args_info*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char**,int ) ;

int FUNC_3(
 uint16_t *VAR_0, struct args_info *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_1, VAR_2);
 uint16_t VAR_4;
 char *VAR_5 = ((void*)0);

 if (!VAR_3)
  return 0;

 VAR_4 = (uint16_t)FUNC_2(VAR_3, &VAR_5, 0);
 if (!VAR_5 || *VAR_5 != '\0')
  FUNC_0("expected number after argument", VAR_2);

 if (VAR_0)
  *VAR_0 = VAR_4;
 return 1;
}
