
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {int sample_type; int precise_ip; int sample_regs_intr; int config; } ;
struct perf_event {struct perf_event_attr attr; } ;
struct TYPE_2__ {int rtm_abort_event; int lbr_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;

__attribute__((used)) static u64 FUNC_0(struct perf_event *VAR_15)
{
 struct perf_event_attr *VAR_16 = &VAR_15->attr;
 u64 VAR_17 = VAR_16->sample_type;
 u64 VAR_18 = 0;
 bool VAR_19, VAR_20;

 if (!(VAR_17 & ~(VAR_10|VAR_12)) &&
     VAR_16->precise_ip > 1)
  return VAR_18;

 if (VAR_17 & VAR_7)
  VAR_18 |= VAR_4;







 VAR_19 = (VAR_17 & VAR_11) &&
        (VAR_16->sample_regs_intr & VAR_6);

 VAR_20 = (VAR_17 & VAR_13) &&
       ((VAR_16->config & VAR_0) ==
        VAR_14.rtm_abort_event);

 if (VAR_19 || (VAR_16->precise_ip < 2) || VAR_20)
  VAR_18 |= VAR_1;

 if ((VAR_17 & VAR_11) &&
     (VAR_16->sample_regs_intr & VAR_8))
  VAR_18 |= VAR_5;

 if (VAR_17 & VAR_9) {




  VAR_18 |= VAR_2 |
   ((VAR_14.lbr_nr-1) << VAR_3);
 }

 return VAR_18;
}
