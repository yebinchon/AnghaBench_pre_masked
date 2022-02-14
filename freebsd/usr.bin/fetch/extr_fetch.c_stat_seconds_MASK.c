
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,long,...) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1, long VAR_2)
{

 if (VAR_2 > 86400)
  FUNC_0(VAR_0, VAR_1, "%02ldd%02ldh",
      VAR_2 / 86400, (VAR_2 % 86400) / 3600);
 else if (VAR_2 > 3600)
  FUNC_0(VAR_0, VAR_1, "%02ldh%02ldm",
      VAR_2 / 3600, (VAR_2 % 3600) / 60);
 else if (VAR_2 > 60)
  FUNC_0(VAR_0, VAR_1, "%02ldm%02lds",
      VAR_2 / 60, VAR_2 % 60);
 else
  FUNC_0(VAR_0, VAR_1, "   %02lds",
      VAR_2);
}
