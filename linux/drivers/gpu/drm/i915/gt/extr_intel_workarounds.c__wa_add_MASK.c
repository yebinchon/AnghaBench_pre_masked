
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {unsigned int count; struct i915_wa* list; int wa_count; } ;
struct i915_wa {int mask; int val; int reg; int read; } ;


 int FUNC_0 (int,unsigned int const) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int const) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned int const) ;
 struct i915_wa* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct i915_wa*,struct i915_wa*,int) ;
 int FUNC_8 (struct i915_wa,struct i915_wa) ;

__attribute__((used)) static void FUNC_9(struct i915_wa_list *VAR_2, const struct i915_wa *VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_3->reg);
 unsigned int VAR_5 = 0, VAR_6 = VAR_2->count;
 const unsigned int VAR_7 = VAR_1;
 struct i915_wa *VAR_8;

 FUNC_2(!FUNC_5(VAR_7));

 if (FUNC_3(VAR_2->count, VAR_7)) {
  struct i915_wa *VAR_9;

  VAR_9 = FUNC_6(FUNC_0(VAR_2->count + 1, VAR_7), sizeof(*VAR_3),
         VAR_0);
  if (!VAR_9) {
   FUNC_1("No space for workaround init!\n");
   return;
  }

  if (VAR_2->list)
   FUNC_7(VAR_9, VAR_2->list, sizeof(*VAR_3) * VAR_2->count);

  VAR_2->list = VAR_9;
 }

 while (VAR_5 < VAR_6) {
  unsigned int VAR_10 = VAR_5 + (VAR_6 - VAR_5) / 2;

  if (FUNC_4(VAR_2->list[VAR_10].reg) < VAR_4) {
   VAR_5 = VAR_10 + 1;
  } else if (FUNC_4(VAR_2->list[VAR_10].reg) > VAR_4) {
   VAR_6 = VAR_10;
  } else {
   VAR_8 = &VAR_2->list[VAR_10];

   if ((VAR_3->mask & ~VAR_8->mask) == 0) {
    FUNC_1("Discarding overwritten w/a for reg %04x (mask: %08x, value: %08x)\n",
       FUNC_4(VAR_8->reg),
       VAR_8->mask, VAR_8->val);

    VAR_8->val &= ~VAR_3->mask;
   }

   VAR_2->wa_count++;
   VAR_8->val |= VAR_3->val;
   VAR_8->mask |= VAR_3->mask;
   VAR_8->read |= VAR_3->read;
   return;
  }
 }

 VAR_2->wa_count++;
 VAR_8 = &VAR_2->list[VAR_2->count++];
 *VAR_8 = *VAR_3;

 while (VAR_8-- > VAR_2->list) {
  FUNC_2(FUNC_4(VAR_8[0].reg) ==
      FUNC_4(VAR_8[1].reg));
  if (FUNC_4(VAR_8[1].reg) >
      FUNC_4(VAR_8[0].reg))
   break;

  FUNC_8(VAR_8[1], VAR_8[0]);
 }
}
