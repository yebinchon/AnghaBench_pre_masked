
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_3, const char *VAR_4,
        int VAR_5)
{
 if (!FUNC_2(VAR_4, "bool"))
  VAR_2 = VAR_0;
 else if (!FUNC_2(VAR_4, "ulong"))
  VAR_2 = VAR_1;
 else
  FUNC_1(FUNC_0("unrecognized --type argument, %s"), VAR_4);

 return 0;
}
