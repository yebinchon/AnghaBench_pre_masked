
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int class; int flags; int name; void* get_cmd_length_mask; void* reg_table_count; void* reg_tables; int i915; } ;
struct drm_i915_cmd_table {int dummy; } ;


 void* FUNC_0 (void*) ;

 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;



 int FUNC_5 (struct intel_engine_cs*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_6 (struct intel_engine_cs*,struct drm_i915_cmd_table const*,int) ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_7 (struct intel_engine_cs*,struct drm_i915_cmd_table const*,int) ;
 int FUNC_8 (struct intel_engine_cs*) ;

void FUNC_9(struct intel_engine_cs *VAR_18)
{
 const struct drm_i915_cmd_table *VAR_19;
 int VAR_20;
 int VAR_21;

 if (!FUNC_2(VAR_18->i915, 7) && !(FUNC_2(VAR_18->i915, 9) &&
       VAR_18->class == 131))
  return;

 switch (VAR_18->class) {
 case 130:
  if (FUNC_3(VAR_18->i915)) {
   VAR_19 = VAR_14;
   VAR_20 =
    FUNC_0(VAR_14);
  } else {
   VAR_19 = VAR_5;
   VAR_20 = FUNC_0(VAR_5);
  }

  if (FUNC_3(VAR_18->i915)) {
   VAR_18->reg_tables = VAR_13;
   VAR_18->reg_table_count = FUNC_0(VAR_13);
  } else {
   VAR_18->reg_tables = VAR_17;
   VAR_18->reg_table_count = FUNC_0(VAR_17);
  }
  VAR_18->get_cmd_length_mask = VAR_6;
  break;
 case 129:
  VAR_19 = VAR_7;
  VAR_20 = FUNC_0(VAR_7);
  VAR_18->get_cmd_length_mask = VAR_4;
  break;
 case 131:
  VAR_18->get_cmd_length_mask = VAR_3;
  if (FUNC_2(VAR_18->i915, 9)) {
   VAR_19 = VAR_8;
   VAR_20 = FUNC_0(VAR_8);
   VAR_18->get_cmd_length_mask =
    VAR_9;


   VAR_18->flags |= VAR_0;
  } else if (FUNC_3(VAR_18->i915)) {
   VAR_19 = VAR_12;
   VAR_20 = FUNC_0(VAR_12);
  } else {
   VAR_19 = VAR_2;
   VAR_20 = FUNC_0(VAR_2);
  }

  if (FUNC_2(VAR_18->i915, 9)) {
   VAR_18->reg_tables = VAR_10;
   VAR_18->reg_table_count =
    FUNC_0(VAR_10);
  } else if (FUNC_3(VAR_18->i915)) {
   VAR_18->reg_tables = VAR_11;
   VAR_18->reg_table_count = FUNC_0(VAR_11);
  } else {
   VAR_18->reg_tables = VAR_16;
   VAR_18->reg_table_count = FUNC_0(VAR_16);
  }
  break;
 case 128:
  VAR_19 = VAR_15;
  VAR_20 = FUNC_0(VAR_15);

  VAR_18->get_cmd_length_mask = VAR_4;
  break;
 default:
  FUNC_4(VAR_18->class);
  return;
 }

 if (!FUNC_7(VAR_18, VAR_19, VAR_20)) {
  FUNC_1("%s: command descriptions are not sorted\n",
     VAR_18->name);
  return;
 }
 if (!FUNC_8(VAR_18)) {
  FUNC_1("%s: registers are not sorted\n", VAR_18->name);
  return;
 }

 VAR_21 = FUNC_6(VAR_18, VAR_19, VAR_20);
 if (VAR_21) {
  FUNC_1("%s: initialised failed!\n", VAR_18->name);
  FUNC_5(VAR_18);
  return;
 }

 VAR_18->flags |= VAR_1;
}
