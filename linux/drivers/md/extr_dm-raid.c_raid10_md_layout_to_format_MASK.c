
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static const char *FUNC_3(int VAR_0)
{






 if (FUNC_0(VAR_0))
  return "offset";

 if (FUNC_2(VAR_0) > 1)
  return "near";

 if (FUNC_1(VAR_0) > 1)
  return "far";

 return "unknown";
}
