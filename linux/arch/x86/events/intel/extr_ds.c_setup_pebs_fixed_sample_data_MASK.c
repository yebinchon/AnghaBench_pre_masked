
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int flags; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int sp; int bp; int di; int si; int dx; int cx; int bx; int ax; } ;
struct TYPE_7__ {int val; } ;
struct perf_sample_data {int * br_stack; int time; int txn; int weight; int addr; int callchain; TYPE_2__ data_src; int period; } ;
struct TYPE_9__ {int sample_type; int precise_ip; scalar_t__ use_clockid; } ;
struct TYPE_6__ {int flags; int last_period; } ;
struct perf_event {TYPE_4__ attr; TYPE_1__ hw; } ;
struct pebs_record_skl {int flags; int tsc; int ax; int tsx_tuning; int dla; int ip; int real_ip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int sp; int bp; int di; int si; int dx; int cx; int bx; int dse; int lat; } ;
struct cpu_hw_events {int lbr_stack; } ;
struct TYPE_8__ {int pebs_format; } ;
struct TYPE_10__ {TYPE_3__ intel_cap; } ;


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
 int FUNC_0 (struct perf_event*,int ) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct perf_event*,struct pt_regs*) ;
 int FUNC_7 (struct perf_sample_data*,int ,int ) ;
 int FUNC_8 (struct pt_regs*,int ) ;
 struct cpu_hw_events* FUNC_9 (int *) ;
 TYPE_5__ VAR_10 ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_11,
       struct pt_regs *VAR_12, void *VAR_13,
       struct perf_sample_data *VAR_14,
       struct pt_regs *VAR_15)
{




 struct cpu_hw_events *VAR_16 = FUNC_9(&VAR_9);
 struct pebs_record_skl *VAR_17 = VAR_13;
 u64 VAR_18;
 int VAR_19;

 if (VAR_17 == ((void*)0))
  return;

 VAR_18 = VAR_11->attr.sample_type;
 VAR_19 = VAR_11->hw.flags & VAR_8;

 FUNC_7(VAR_14, 0, VAR_11->hw.last_period);

 VAR_14->period = VAR_11->hw.last_period;




 if (VAR_19 && (VAR_18 & VAR_7))
  VAR_14->weight = VAR_17->lat;




 if (VAR_18 & VAR_3)
  VAR_14->data_src.val = FUNC_0(VAR_11, VAR_17->dse);







 if (VAR_18 & VAR_2)
  VAR_14->callchain = FUNC_6(VAR_11, VAR_12);
 *VAR_15 = *VAR_12;






 VAR_15->flags = VAR_17->flags & ~VAR_0;

 if (VAR_18 & VAR_5) {
  VAR_15->ax = VAR_17->ax;
  VAR_15->bx = VAR_17->bx;
  VAR_15->cx = VAR_17->cx;
  VAR_15->dx = VAR_17->dx;
  VAR_15->si = VAR_17->si;
  VAR_15->di = VAR_17->di;

  VAR_15->bp = VAR_17->bp;
  VAR_15->sp = VAR_17->sp;


  VAR_15->r8 = VAR_17->r8;
  VAR_15->r9 = VAR_17->r9;
  VAR_15->r10 = VAR_17->r10;
  VAR_15->r11 = VAR_17->r11;
  VAR_15->r12 = VAR_17->r12;
  VAR_15->r13 = VAR_17->r13;
  VAR_15->r14 = VAR_17->r14;
  VAR_15->r15 = VAR_17->r15;

 }

 if (VAR_11->attr.precise_ip > 1) {





  if (VAR_10.intel_cap.pebs_format >= 2) {
   FUNC_8(VAR_15, VAR_17->real_ip);
   VAR_15->flags |= VAR_0;
  } else {

   FUNC_8(VAR_15, VAR_17->ip);






   if (FUNC_4(VAR_15))
    VAR_15->flags |= VAR_0;
  }
 } else {




  FUNC_8(VAR_15, VAR_17->ip);
 }


 if ((VAR_18 & (VAR_1 | VAR_4)) &&
     VAR_10.intel_cap.pebs_format >= 1)
  VAR_14->addr = VAR_17->dla;

 if (VAR_10.intel_cap.pebs_format >= 2) {

  if ((VAR_18 & VAR_7) && !VAR_19)
   VAR_14->weight = FUNC_3(VAR_17->tsx_tuning);

  if (VAR_18 & VAR_6)
   VAR_14->txn = FUNC_2(VAR_17->tsx_tuning,
             VAR_17->ax);
 }







 if (VAR_10.intel_cap.pebs_format >= 3 &&
  VAR_11->attr.use_clockid == 0)
  VAR_14->time = FUNC_5(VAR_17->tsc);

 if (FUNC_1(VAR_11))
  VAR_14->br_stack = &VAR_16->lbr_stack;
}
