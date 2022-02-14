
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 const char *VAR_1;
 if (FUNC_1(VAR_0, "allocstall1") == 0) {
  FUNC_0("Examine PARTIAL_RAT_STALLS.SLOW_LEA_WINDOW / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh > .05";
 } else if (FUNC_1(VAR_0, "allocstall2") == 0) {
  FUNC_0("Examine PARTIAL_RAT_STALLS.FLAGS_MERGE_UOP_CYCLES/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh > .05";
 } else if (FUNC_1(VAR_0, "br_miss") == 0) {
  FUNC_0("Examine (20 * BR_MISP_RETIRED.ALL_BRANCHES)/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .2";
 } else if (FUNC_1(VAR_0, "splitload") == 0) {
  FUNC_0("Examine MEM_UOPS_RETIRED.SPLIT_LOADS * 5) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .1";
 } else if (FUNC_1(VAR_0, "splitstore") == 0) {
  FUNC_0("Examine MEM_UOPS_RETIRED.SPLIT_STORES / MEM_UOPS_RETIRED.ALL_STORES\n");
  VAR_1 = "thresh >= .01";
 } else if (FUNC_1(VAR_0, "contested") == 0) {
  FUNC_0("Examine (MEM_LOAD_UOPS_LLC_HIT_RETIRED.XSNP_HITM * 60) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .05";
 } else if (FUNC_1(VAR_0, "blockstorefwd") == 0) {
  FUNC_0("Examine (LD_BLOCKS_STORE_FORWARD * 13) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .05";
 } else if (FUNC_1(VAR_0, "cache2") == 0) {
  FUNC_0("Examine ((MEM_LOAD_RETIRED.L3_HIT * 26) + \n");
  FUNC_0("         (MEM_LOAD_UOPS_LLC_HIT_RETIRED.XSNP_HIT * 43) + \n");
  FUNC_0("         (MEM_LOAD_UOPS_LLC_HIT_RETIRED.XSNP_HITM * 60)) / CPU_CLK_UNHALTED.THREAD_P\n");
  FUNC_0("**Note we have it labeled MEM_LOAD_UOPS_RETIRED.LLC_HIT not MEM_LOAD_RETIRED.L3_HIT\n");
  VAR_1 = "thresh >= .2";
 } else if (FUNC_1(VAR_0, "cache1") == 0) {
  FUNC_0("Examine (MEM_LOAD_UOPS_MISC_RETIRED.LLC_MISS * 180) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .2";
 } else if (FUNC_1(VAR_0, "dtlbmissload") == 0) {
  FUNC_0("Examine (((DTLB_LOAD_MISSES.STLB_HIT * 7) + DTLB_LOAD_MISSES.WALK_DURATION)\n");
  FUNC_0("         / CPU_CLK_UNHALTED.THREAD_P)\n");
  VAR_1 = "thresh >= .1";
 } else if (FUNC_1(VAR_0, "frontendstall") == 0) {
  FUNC_0("Examine IDQ_UOPS_NOT_DELIVERED.CORE / (CPU_CLK_UNHALTED.THREAD_P * 4)\n");
  VAR_1 = "thresh >= .15";
 } else if (FUNC_1(VAR_0, "clears") == 0) {
  FUNC_0("Examine ((MACHINE_CLEARS.MEMORY_ORDERING + \n");
  FUNC_0("          MACHINE_CLEARS.SMC + \n");
  FUNC_0("          MACHINE_CLEARS.MASKMOV ) * 100 ) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .02";
 } else if (FUNC_1(VAR_0, "microassist") == 0) {
  FUNC_0("Examine IDQ.MS_CYCLES / (CPU_CLK_UNHALTED.THREAD_P * 4)\n");
  FUNC_0("***We use IDQ.MS_UOPS,cmask=1 to get cycles\n");
  VAR_1 = "thresh >= .05";
 } else if (FUNC_1(VAR_0, "aliasing_4k") == 0) {
  FUNC_0("Examine (LD_BLOCKS_PARTIAL.ADDRESS_ALIAS * 5) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .1";
 } else if (FUNC_1(VAR_0, "fpassist") == 0) {
  FUNC_0("Examine FP_ASSIST.ANY/INST_RETIRED.ANY_P\n");
  VAR_1 = "look for a excessive value";
 } else if (FUNC_1(VAR_0, "otherassistavx") == 0) {
  FUNC_0("Examine (OTHER_ASSISTS.AVX_TO_SSE * 75)/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "look for a excessive value";
 } else if (FUNC_1(VAR_0, "otherassistsse") == 0) {
  FUNC_0("Examine (OTHER_ASSISTS.SSE_TO_AVX * 75)/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "look for a excessive value";
 } else if (FUNC_1(VAR_0, "eff1") == 0) {
  FUNC_0("Examine (UOPS_RETIRED.RETIRE_SLOTS)/(4 *CPU_CLK_UNHALTED.THREAD_P)\n");
  VAR_1 = "thresh < .9";
 } else if (FUNC_1(VAR_0, "eff2") == 0) {
  FUNC_0("Examine CPU_CLK_UNHALTED.THREAD_P/INST_RETIRED.ANY_P\n");
  VAR_1 = "thresh > 1.0";
 } else if (FUNC_1(VAR_0, "dtlbmissstore") == 0) {
  FUNC_0("Examine (((DTLB_STORE_MISSES.STLB_HIT * 7) + DTLB_STORE_MISSES.WALK_DURATION)\n");
  FUNC_0("         / CPU_CLK_UNHALTED.THREAD_P)\n");
  VAR_1 = "thresh >= .05";
 } else {
  FUNC_0("Unknown name:%s\n", VAR_0);
  VAR_1 = "unknown entry";
        }
 FUNC_0("If the value printed is %s we may have the ability to improve performance\n", VAR_1);
}
