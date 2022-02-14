
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{

 if (FUNC_1(VAR_0, "pthread") == 0)

  FUNC_0("-pthread");
 else if (FUNC_1(VAR_0, "rt") == 0)

  ;
 else if (FUNC_1(VAR_0, "xnet") == 0)

  ;
 else {
  FUNC_0("-l");
  FUNC_0(VAR_0);
 }
}
