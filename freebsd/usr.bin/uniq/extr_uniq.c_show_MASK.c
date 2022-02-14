
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_4, const char *VAR_5)
{

 if ((VAR_1 && VAR_2 == 0) || (VAR_3 && VAR_2 > 0))
  return;
 if (VAR_0)
  (void)FUNC_0(VAR_4, "%4d %s", VAR_2 + 1, VAR_5);
 else
  (void)FUNC_0(VAR_4, "%s", VAR_5);
}
