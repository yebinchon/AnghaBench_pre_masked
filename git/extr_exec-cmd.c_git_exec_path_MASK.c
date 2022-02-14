
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;

const char *FUNC_3(void)
{
 if (!VAR_2) {
  const char *VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 && *VAR_3)
   VAR_2 = FUNC_2(VAR_3);
  else
   VAR_2 = FUNC_1(VAR_1);
 }
 return VAR_2;
}
