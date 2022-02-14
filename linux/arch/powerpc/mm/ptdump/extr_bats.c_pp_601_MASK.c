
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(int VAR_0, int VAR_1)
{
 if (VAR_1 == 0)
  return VAR_0 ? "NA" : "RWX";
 if (VAR_1 == 1)
  return VAR_0 ? "ROX" : "RWX";
 if (VAR_1 == 2)
  return VAR_0 ? "RWX" : "RWX";
 return VAR_0 ? "ROX" : "ROX";
}
