
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_wa {int val; int read; int mask; int reg; } ;


 int FUNC_0 (char*,char const*,char const*,int ,int,int,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(const struct i915_wa *VAR_0, u32 VAR_1, const char *VAR_2, const char *VAR_3)
{
 if ((VAR_1 ^ VAR_0->val) & VAR_0->read) {
  FUNC_0("%s workaround lost on %s! (%x=%x/%x, expected %x, mask=%x)\n",
     VAR_2, VAR_3, FUNC_1(VAR_0->reg),
     VAR_1, VAR_1 & VAR_0->read,
     VAR_0->val, VAR_0->mask);

  return 0;
 }

 return 1;
}
