
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct i915_wa_list {unsigned int count; struct i915_wa* list; } ;
struct i915_wa {int reg; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static enum forcewake_domains
FUNC_1(struct intel_uncore *VAR_2, const struct i915_wa_list *VAR_3)
{
 enum forcewake_domains VAR_4 = 0;
 struct i915_wa *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0, VAR_5 = VAR_3->list; VAR_6 < VAR_3->count; VAR_6++, VAR_5++)
  VAR_4 |= FUNC_0(VAR_2,
           VAR_5->reg,
           VAR_0 |
           VAR_1);

 return VAR_4;
}
