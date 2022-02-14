
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
 if (FUNC_1(VAR_0, "eff1") == 0) {
  FUNC_0("Examine (UOPS_RETIRED.RETIRE_SLOTS)/(4 *CPU_CLK_UNHALTED.THREAD_P)\n");
  VAR_1 = "thresh < .75";
 } else if (FUNC_1(VAR_0, "eff2") == 0) {
  FUNC_0("Examine CPU_CLK_UNHALTED.THREAD_P/INST_RETIRED.ANY_P\n");
  VAR_1 = "thresh > 1.0";
 } else if (FUNC_1(VAR_0, "itlbmiss") == 0) {
  FUNC_0("Examine (7 * ITLB_MISSES_STLB_HIT_4K + ITLB_MISSES.WALK_DURATION)/ CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh > .05";
 } else if (FUNC_1(VAR_0, "icachemiss") == 0) {
  FUNC_0("Examine ( 36.0 * ICACHE.MISSES)/ CPU_CLK_UNHALTED.THREAD_P ??? may not be right \n");
  VAR_1 = "thresh > .05";
 } else if (FUNC_1(VAR_0, "lcpstall") == 0) {
  FUNC_0("Examine ILD_STALL.LCP/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh > .05";
 } else if (FUNC_1(VAR_0, "cache1") == 0) {
  FUNC_0("Examine (MEM_LOAD_UOPS_LLC_MISS_RETIRED.LOCAL_DRAM * 180) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .1";
 } else if (FUNC_1(VAR_0, "cache2") == 0) {
  FUNC_0("Examine (36.0 * MEM_LOAD_UOPS_RETIRED.L3_HIT / CPU_CLK_UNHALTED.THREAD_P)\n");
  VAR_1 = "thresh >= .2";
 } else if (FUNC_1(VAR_0, "contested") == 0) {
  FUNC_0("Examine ((MEM_LOAD_UOPS_LLC_HIT_RETIRED.XSNP_HITM * 84) +  MEM_LOAD_UOPS_LLC_HIT_RETIRED.XSNP_MISS)/ CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .05";
 } else if (FUNC_1(VAR_0, "datashare") == 0) {
  FUNC_0("Examine (MEM_LOAD_UOPS_L3_HIT_RETIRED.XSNP_HIT * 72)/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh > .05";
 } else if (FUNC_1(VAR_0, "blockstorefwd") == 0) {
  FUNC_0("Examine (LD_BLOCKS_STORE_FORWARD * 13) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .05";
 } else if (FUNC_1(VAR_0, "aliasing_4k") == 0) {
  FUNC_0("Examine (LD_BLOCKS_PARTIAL.ADDRESS_ALIAS * 7) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .1";
 } else if (FUNC_1(VAR_0, "dtlbmissload") == 0) {
  FUNC_0("Examine (((DTLB_LOAD_MISSES.STLB_HIT * 7) + DTLB_LOAD_MISSES.WALK_DURATION)\n");
  FUNC_0("         / CPU_CLK_UNHALTED.THREAD_P)\n");
  VAR_1 = "thresh >= .1";

 } else if (FUNC_1(VAR_0, "br_miss") == 0) {
  FUNC_0("Examine BR_MISP_RETIRED.ALL_BRANCHS_PS / (BR_MISP_RETIED.ALL_BRANCHES_PS + MACHINE_CLEARS.COUNT) *\n");
  FUNC_0(" (UOPS_ISSUEDF.ANY - UOPS_RETIRED.RETIRE_SLOTS + 4 * INT_MISC.RECOVERY_CYCLES) /\n");
  FUNC_0("CPU_CLK_UNHALTED.THREAD * 4)\n");
  VAR_1 = "thresh >= .2";
 } else if (FUNC_1(VAR_0, "clears") == 0) {
  FUNC_0("Examine ((MACHINE_CLEARS.MEMORY_ORDERING + \n");
  FUNC_0("          MACHINE_CLEARS.SMC + \n");
  FUNC_0("          MACHINE_CLEARS.MASKMOV ) * 100 ) / CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "thresh >= .02";
 } else if (FUNC_1(VAR_0, "fpassist") == 0) {
  FUNC_0("Examine FP_ASSIST.ANY/INST_RETIRED.ANY_P\n");
  VAR_1 = "look for a excessive value";
 } else if (FUNC_1(VAR_0, "otherassistavx") == 0) {
  FUNC_0("Examine (OTHER_ASSISTS.AVX_TO_SSE * 75)/CPU_CLK_UNHALTED.THREAD_P\n");
  VAR_1 = "look for a excessive value";
 } else if (FUNC_1(VAR_0, "microassist") == 0) {
  FUNC_0("Examine (UOPS_RETIRED.RETIRE_SLOTS/UOPS_ISSUED.ANY) * (IDQ.MS_CYCLES / (4 * CPU_CLK_UNHALTED.THREAD_P)\n");
  FUNC_0("***We use IDQ.MS_UOPS,cmask=1 to get cycles\n");
  VAR_1 = "thresh >= .05";
 } else {
  FUNC_0("Unknown name:%s\n", VAR_0);
  VAR_1 = "unknown entry";
        }
 FUNC_0("If the value printed is %s we may have the ability to improve performance\n", VAR_1);
}
