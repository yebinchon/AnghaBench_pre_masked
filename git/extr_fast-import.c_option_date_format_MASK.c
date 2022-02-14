
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(const char *VAR_4)
{
 if (!FUNC_1(VAR_4, "raw"))
  VAR_3 = VAR_1;
 else if (!FUNC_1(VAR_4, "rfc2822"))
  VAR_3 = VAR_2;
 else if (!FUNC_1(VAR_4, "now"))
  VAR_3 = VAR_0;
 else
  FUNC_0("unknown --date-format argument %s", VAR_4);
}
