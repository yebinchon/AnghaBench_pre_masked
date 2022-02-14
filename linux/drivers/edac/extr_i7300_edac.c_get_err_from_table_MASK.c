
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0[], int VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_2 >= VAR_1))
  return "Reserved";

 if (FUNC_0(!VAR_0[VAR_2]))
  return "Reserved";

 return VAR_0[VAR_2];
}
