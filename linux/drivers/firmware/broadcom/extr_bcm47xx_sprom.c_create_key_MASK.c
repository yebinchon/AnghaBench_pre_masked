
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const char *VAR_1,
         const char *VAR_2, char *VAR_3, int VAR_4)
{
 if (VAR_0 && VAR_1)
  FUNC_0(VAR_3, VAR_4, "%s%s%s", VAR_0, VAR_2, VAR_1);
 else if (VAR_0)
  FUNC_0(VAR_3, VAR_4, "%s%s", VAR_0, VAR_2);
 else if (VAR_1)
  FUNC_0(VAR_3, VAR_4, "%s%s", VAR_2, VAR_1);
 else
  FUNC_0(VAR_3, VAR_4, "%s", VAR_2);
}
