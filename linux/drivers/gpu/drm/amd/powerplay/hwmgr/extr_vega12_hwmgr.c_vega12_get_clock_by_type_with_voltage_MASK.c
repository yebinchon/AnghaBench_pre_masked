
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct pp_clock_levels_with_voltage {scalar_t__ num_levels; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0,
  enum amd_pp_clock_type VAR_1,
  struct pp_clock_levels_with_voltage *VAR_2)
{
 VAR_2->num_levels = 0;

 return 0;
}
