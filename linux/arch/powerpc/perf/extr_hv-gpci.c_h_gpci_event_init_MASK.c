
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ config2; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__* pmu; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 scalar_t__ FUNC_6 (struct perf_event*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,scalar_t__,int,int *) ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_4)
{
 u64 VAR_5;
 u8 VAR_6;


 if (VAR_4->attr.type != VAR_4->pmu->type)
  return -VAR_1;


 if (VAR_4->attr.config2) {
  FUNC_7("config2 set when reserved\n");
  return -VAR_0;
 }


 if (FUNC_6(VAR_4))
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 1 || VAR_6 > 8) {
  FUNC_7("length invalid\n");
  return -VAR_0;
 }


 if ((FUNC_2(VAR_4) + VAR_6) > VAR_3) {
  FUNC_7("request outside of buffer: %zu > %zu\n",
    (size_t)FUNC_2(VAR_4) + VAR_6,
    VAR_3);
  return -VAR_0;
 }


 if (FUNC_8(FUNC_3(VAR_4),
    FUNC_5(VAR_4),
    FUNC_4(VAR_4),
    FUNC_0(VAR_4),
    FUNC_2(VAR_4),
    VAR_6,
    &VAR_5)) {
  FUNC_7("gpci hcall failed\n");
  return -VAR_0;
 }

 return 0;
}
