
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const) ;

__attribute__((used)) static int
FUNC_1(const char *const VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == -1)
  return VAR_3;
 else if (VAR_3<VAR_1)
  return VAR_1;
 else if (VAR_3>VAR_2)
  return VAR_2;
 else
  return VAR_3;
}
