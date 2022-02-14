
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_forcewake_range {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, const struct intel_forcewake_range *VAR_1)
{
 if (VAR_0 < VAR_1->start)
  return -1;
 else if (VAR_0 > VAR_1->end)
  return 1;
 else
  return 0;
}
