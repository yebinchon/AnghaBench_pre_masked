
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0)
{
 if (VAR_0 < 0)
  return "error";

 if (VAR_0 > 0)
  return "signaled";

 return "active";
}
