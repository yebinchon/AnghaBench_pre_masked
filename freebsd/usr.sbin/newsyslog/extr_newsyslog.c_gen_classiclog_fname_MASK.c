
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2,
    const char *VAR_3, int VAR_4)
{

 if (VAR_2[0] != '\0')
  (void) FUNC_0(VAR_0, VAR_1, "%s/%s.%d", VAR_2,
      VAR_3, VAR_4);
 else
  (void) FUNC_0(VAR_0, VAR_1, "%s.%d", VAR_3, VAR_4);
}
