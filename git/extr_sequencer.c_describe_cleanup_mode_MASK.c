
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static const char *FUNC_2(int VAR_0)
{
 static const char *VAR_1[] = { "whitespace",
           "verbatim",
           "scissors",
           "strip" };

 if (VAR_0 < FUNC_0(VAR_1))
  return VAR_1[VAR_0];

 FUNC_1("invalid cleanup_mode provided (%d)", VAR_0);
}
