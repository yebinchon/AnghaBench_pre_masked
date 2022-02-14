
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0)
{
 VAR_0 = FUNC_2(VAR_0);
 if (FUNC_3(VAR_0, 0700))
  FUNC_1(FUNC_0("failed to create directory %s"), VAR_0);
}
