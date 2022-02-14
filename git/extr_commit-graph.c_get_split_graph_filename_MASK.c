
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char*,char const*,char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0,
          const char *VAR_1)
{
 char *VAR_2 = FUNC_4("%s/info/commit-graphs/graph-%s.graph",
     VAR_0,
     VAR_1);
 char *VAR_3 = FUNC_3(FUNC_2(VAR_2) + 1);
 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_2);
 return VAR_3;
}
