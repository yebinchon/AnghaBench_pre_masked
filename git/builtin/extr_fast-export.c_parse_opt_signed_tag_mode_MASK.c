
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_5 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_6,
         const char *VAR_7, int VAR_8)
{
 if (VAR_8 || !FUNC_1(VAR_7, "abort"))
  VAR_5 = VAR_0;
 else if (!FUNC_1(VAR_7, "verbatim") || !FUNC_1(VAR_7, "ignore"))
  VAR_5 = VAR_2;
 else if (!FUNC_1(VAR_7, "warn"))
  VAR_5 = VAR_3;
 else if (!FUNC_1(VAR_7, "warn-strip"))
  VAR_5 = VAR_4;
 else if (!FUNC_1(VAR_7, "strip"))
  VAR_5 = VAR_1;
 else
  return FUNC_0("Unknown signed-tags mode: %s", VAR_7);
 return 0;
}
