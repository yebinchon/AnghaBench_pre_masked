
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,int ) ;
 int FUNC_2 (int ,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

void FUNC_4(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (FUNC_3(VAR_1, VAR_2) < 0)
  FUNC_2(FUNC_0("could not migrate git directory from '%s' to '%s'"),
   VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_2, 0);
}
