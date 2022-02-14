
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct trace_imc_data {int ip; int tb2; int tb1; } ;
struct perf_sample_data {int ip; int period; } ;
struct perf_event_header {int misc; scalar_t__ size; int type; } ;
struct TYPE_2__ {int last_period; } ;
struct perf_event {scalar_t__ header_size; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;

__attribute__((used)) static int FUNC_4(struct trace_imc_data *VAR_5,
        struct perf_sample_data *VAR_6,
        u64 *VAR_7,
        struct perf_event_header *VAR_8,
        struct perf_event *VAR_9)
{

 if (FUNC_1(FUNC_0(VAR_5->tb1)) > *VAR_7)
  *VAR_7 = FUNC_1(FUNC_0(VAR_5->tb1));
 else
  return -VAR_0;

 if ((FUNC_1(FUNC_0(VAR_5->tb1)) & VAR_1) !=
    FUNC_1(FUNC_0(VAR_5->tb2)))
  return -VAR_0;


 VAR_6->ip = FUNC_1(FUNC_0(VAR_5->ip));
 VAR_6->period = VAR_9->hw.last_period;

 VAR_8->type = VAR_4;
 VAR_8->size = sizeof(*VAR_8) + VAR_9->header_size;
 VAR_8->misc = 0;

 if (FUNC_2(VAR_6->ip))
  VAR_8->misc |= VAR_2;
 else
  VAR_8->misc |= VAR_3;

 FUNC_3(VAR_8, VAR_6, VAR_9);

 return 0;
}
