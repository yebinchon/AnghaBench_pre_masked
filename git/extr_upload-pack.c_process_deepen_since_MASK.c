
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char**,int ) ;
 scalar_t__ FUNC_2 (char const*,char*,char const**) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, timestamp_t *VAR_1, int *VAR_2)
{
 const char *VAR_3;
 if (FUNC_2(VAR_0, "deepen-since ", &VAR_3)) {
  char *VAR_4 = ((void*)0);
  *VAR_1 = FUNC_1(VAR_3, &VAR_4, 0);
  if (!VAR_4 || *VAR_4 || !VAR_1 ||

      *VAR_1 == -1)
   FUNC_0("Invalid deepen-since: %s", VAR_0);
  *VAR_2 = 1;
  return 1;
 }
 return 0;
}
