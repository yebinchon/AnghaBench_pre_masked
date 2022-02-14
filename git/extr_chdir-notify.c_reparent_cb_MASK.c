
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const*,char*) ;
 int FUNC_2 (int *,char*,char const*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const char *VAR_1,
   const char *VAR_2,
   const char *VAR_3,
   void *VAR_4)
{
 char **VAR_5 = VAR_4;
 char *VAR_6 = *VAR_5;

 if (!VAR_6)
  return;

 *VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6);
 FUNC_0(VAR_6);

 if (VAR_1) {
  FUNC_2(&VAR_0,
     "setup: reparent %s to '%s'",
     VAR_1, *VAR_5);
 }
}
