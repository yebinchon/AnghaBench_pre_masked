
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_gem_context {int jump_whitelist_cmds; int jump_whitelist; int i915; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(const struct i915_gem_context *VAR_2,
    u32 *VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6,
    u64 VAR_7,
    u64 VAR_8)
{
 u64 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;


 if (FUNC_0(VAR_2->i915)) {
  FUNC_1("CMD: Rejecting BB_START for ggtt based submission\n");
  return -VAR_0;
 }

 if (VAR_5 != 3) {
  FUNC_1("CMD: Recursive BB_START with bad length(%u)\n",
     VAR_5);
  return -VAR_1;
 }

 VAR_10 = *(u64*)(VAR_3+1);
 VAR_9 = VAR_10 - VAR_7;





 if (VAR_9 >= VAR_6) {
  FUNC_1("CMD: BB_START to 0x%llx jumps out of BB\n",
     VAR_10);
  return -VAR_1;
 }





 VAR_11 = FUNC_2(VAR_9);
 VAR_12 = VAR_11 / sizeof(u32);

 *(u64*)(VAR_3 + 1) = VAR_8 + VAR_11;

 if (VAR_12 == VAR_4)
  return 0;

 if (VAR_2->jump_whitelist_cmds <= VAR_12) {
  FUNC_1("CMD: Rejecting BB_START - truncated whitelist array\n");
  return -VAR_1;
 } else if (!FUNC_3(VAR_12, VAR_2->jump_whitelist)) {
  FUNC_1("CMD: BB_START to 0x%llx not a previously executed cmd\n",
     VAR_10);
  return -VAR_1;
 }

 return 0;
}
