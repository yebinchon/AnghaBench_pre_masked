
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int prev_count; } ;
struct TYPE_5__ {scalar_t__ type; int config2; int config1; int config; } ;
struct perf_event {TYPE_3__ hw; TYPE_2__ attr; TYPE_1__* pmu; } ;
struct hv_perf_caps {int collect_privileged; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 (struct perf_event*) ;
 scalar_t__ FUNC_5 (struct perf_event*) ;
 scalar_t__ FUNC_6 (struct perf_event*) ;
 scalar_t__ FUNC_7 (struct perf_event*) ;
 unsigned long FUNC_8 (struct hv_perf_caps*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (struct perf_event*,int *) ;

__attribute__((used)) static int FUNC_13(struct perf_event *VAR_6)
{
 struct hv_perf_caps VAR_7;
 unsigned VAR_8;
 unsigned long VAR_9;
 u64 VAR_10;


 if (VAR_6->attr.type != VAR_6->pmu->type)
  return -VAR_3;


 if (FUNC_4(VAR_6) ||
     FUNC_5(VAR_6) ||
     FUNC_6(VAR_6)) {
  FUNC_11("reserved set when forbidden 0x%llx(0x%llx) 0x%llx(0x%llx) 0x%llx(0x%llx)\n",
    VAR_6->attr.config,
    FUNC_4(VAR_6),
    VAR_6->attr.config1,
    FUNC_5(VAR_6),
    VAR_6->attr.config2,
    FUNC_6(VAR_6));
  return -VAR_1;
 }


 if (FUNC_7(VAR_6))
  return -VAR_4;


 if (FUNC_3(VAR_6) % 8) {
  FUNC_11("bad alignment\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 >= VAR_5) {
  FUNC_11("invalid domain %d\n", VAR_8);
  return -VAR_1;
 }

 VAR_9 = FUNC_8(&VAR_7);
 if (VAR_9) {
  FUNC_11("could not get capabilities: rc=%ld\n", VAR_9);
  return -VAR_2;
 }


 if (!VAR_7.collect_privileged && (FUNC_9(VAR_8) ||
  (FUNC_1(VAR_6) != FUNC_2()))) {
  FUNC_11("hv permissions disallow: is_physical_domain:%d, lpar=0x%llx\n",
    FUNC_9(VAR_8),
    FUNC_1(VAR_6));
  return -VAR_0;
 }


 if (FUNC_12(VAR_6, &VAR_10)) {
  FUNC_11("test hcall failed\n");
  return -VAR_2;
 }
 (void)FUNC_10(&VAR_6->hw.prev_count, VAR_10);

 return 0;
}
