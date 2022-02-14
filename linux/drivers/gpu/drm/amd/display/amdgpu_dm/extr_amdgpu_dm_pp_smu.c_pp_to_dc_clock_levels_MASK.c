
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dm_pp_clock_levels {size_t num_levels; int * clocks_in_khz; } ;
struct amd_pp_clocks {scalar_t__ count; int * clock; } ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void FUNC_2(
  const struct amd_pp_clocks *VAR_1,
  struct dm_pp_clock_levels *VAR_2,
  enum dm_pp_clock_type VAR_3)
{
 uint32_t VAR_4;

 if (VAR_1->count > VAR_0) {
  FUNC_1("DM_PPLIB: Warning: %s clock: number of levels %d exceeds maximum of %d!\n",
    FUNC_0(VAR_3),
    VAR_1->count,
    VAR_0);

  VAR_2->num_levels = VAR_0;
 } else
  VAR_2->num_levels = VAR_1->count;

 FUNC_1("DM_PPLIB: values for %s clock\n",
   FUNC_0(VAR_3));

 for (VAR_4 = 0; VAR_4 < VAR_2->num_levels; VAR_4++) {
  FUNC_1("DM_PPLIB:\t %d\n", VAR_1->clock[VAR_4]);
  VAR_2->clocks_in_khz[VAR_4] = VAR_1->clock[VAR_4];
 }
}
