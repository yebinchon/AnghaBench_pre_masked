
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i915_power_well_desc {int id; } ;
struct i915_power_domains {int power_well_count; TYPE_1__* power_wells; } ;
typedef int power_well_ids ;
typedef enum i915_power_well_id { ____Placeholder_i915_power_well_id } i915_power_well_id ;
struct TYPE_2__ {struct i915_power_well_desc const* desc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct i915_power_domains *VAR_3,
    const struct i915_power_well_desc *VAR_4,
    int VAR_5)
{
 u64 VAR_6 = 0;
 int VAR_7;

 VAR_3->power_well_count = VAR_5;
 VAR_3->power_wells =
    FUNC_2(VAR_5,
     sizeof(*VAR_3->power_wells),
     VAR_2);
 if (!VAR_3->power_wells)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  enum i915_power_well_id VAR_8 = VAR_4[VAR_7].id;

  VAR_3->power_wells[VAR_7].desc = &VAR_4[VAR_7];

  if (VAR_8 == VAR_0)
   continue;

  FUNC_1(VAR_8 >= sizeof(VAR_6) * 8);
  FUNC_1(VAR_6 & FUNC_0(VAR_8));
  VAR_6 |= FUNC_0(VAR_8);
 }

 return 0;
}
