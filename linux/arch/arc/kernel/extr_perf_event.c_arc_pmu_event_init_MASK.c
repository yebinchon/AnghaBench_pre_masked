
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; size_t config; scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct hw_perf_event {size_t config; int sample_period; int period_left; int last_period; } ;
struct perf_event {TYPE_2__ attr; struct hw_perf_event hw; } ;
struct TYPE_6__ {size_t* ev_hw_idx; size_t n_events; TYPE_1__* raw_entry; int max_period; } ;
struct TYPE_4__ {int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;



 TYPE_3__* VAR_4 ;
 int FUNC_0 (size_t) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_6->hw;
 int VAR_8;

 if (!FUNC_2(VAR_6)) {
  VAR_7->sample_period = VAR_4->max_period;
  VAR_7->last_period = VAR_7->sample_period;
  FUNC_3(&VAR_7->period_left, VAR_7->sample_period);
 }

 VAR_7->config = 0;

 if (FUNC_1()) {

  if (VAR_6->attr.exclude_user)
   VAR_7->config |= VAR_0;


  if (VAR_6->attr.exclude_kernel)
   VAR_7->config |= VAR_1;
 }

 switch (VAR_6->attr.type) {
 case 130:
  if (VAR_6->attr.config >= VAR_3)
   return -VAR_2;
  if (VAR_4->ev_hw_idx[VAR_6->attr.config] < 0)
   return -VAR_2;
  VAR_7->config |= VAR_4->ev_hw_idx[VAR_6->attr.config];
  FUNC_4("init event %d with h/w %08x \'%s\'\n",
    (int)VAR_6->attr.config, (int)VAR_7->config,
    VAR_5[VAR_6->attr.config]);
  return 0;

 case 129:
  VAR_8 = FUNC_0(VAR_6->attr.config);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7->config |= VAR_4->ev_hw_idx[VAR_8];
  FUNC_4("init cache event with h/w %08x \'%s\'\n",
    (int)VAR_7->config, VAR_5[VAR_8]);
  return 0;

 case 128:
  if (VAR_6->attr.config >= VAR_4->n_events)
   return -VAR_2;

  VAR_7->config |= VAR_6->attr.config;
  FUNC_4("init raw event with idx %lld \'%s\'\n",
    VAR_6->attr.config,
    VAR_4->raw_entry[VAR_6->attr.config].name);

  return 0;

 default:
  return -VAR_2;
 }
}
