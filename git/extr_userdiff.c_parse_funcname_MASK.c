
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_funcname {int cflags; int pattern; } ;


 scalar_t__ FUNC_0 (int *,char const*,char const*) ;

__attribute__((used)) static int FUNC_1(struct userdiff_funcname *VAR_0, const char *VAR_1,
  const char *VAR_2, int VAR_3)
{
 if (FUNC_0(&VAR_0->pattern, VAR_1, VAR_2) < 0)
  return -1;
 VAR_0->cflags = VAR_3;
 return 0;
}
