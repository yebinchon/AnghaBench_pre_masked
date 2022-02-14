
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_4,
       const char *VAR_5, int VAR_6)
{
 if (VAR_6 || !FUNC_1(VAR_5, "abort"))
  VAR_3 = VAR_2;
 else if (!FUNC_1(VAR_5, "drop"))
  VAR_3 = VAR_0;
 else if (!FUNC_1(VAR_5, "rewrite"))
  VAR_3 = VAR_1;
 else
  return FUNC_0("Unknown tag-of-filtered mode: %s", VAR_5);
 return 0;
}
