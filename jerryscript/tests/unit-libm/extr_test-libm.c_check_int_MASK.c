
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_1, int VAR_2, int VAR_3)
{
  FUNC_0 ("%s = %d [expected=%d] ", VAR_1, VAR_2, VAR_3);

  bool VAR_4 = VAR_2 == VAR_3;
  FUNC_0 ("%s\n", VAR_4 ? "PASS" : "FAIL");

  VAR_0 &= VAR_4;
}
