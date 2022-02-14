
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {int type; } ;
struct perf_event {TYPE_1__ hw; int (* destroy ) (struct perf_event*) ;struct pmu* pmu; struct perf_event* group_leader; TYPE_2__ attr; } ;
struct TYPE_6__ {int attr_rdpmc; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct perf_event*) ;
 struct pmu VAR_3 ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_5)
{
 struct pmu *VAR_6;
 int VAR_7;

 switch (VAR_5->attr.type) {
 case 128:
 case 130:
 case 129:
  break;

 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {





  VAR_6 = VAR_5->pmu;
  VAR_5->pmu = &VAR_3;

  if (VAR_5->group_leader != VAR_5)
   VAR_7 = FUNC_4(VAR_5);
  else
   VAR_7 = FUNC_3(VAR_5);

  VAR_5->pmu = VAR_6;
 }
 if (VAR_7) {
  if (VAR_5->destroy)
   VAR_5->destroy(VAR_5);
 }

 if (FUNC_0(VAR_4.attr_rdpmc) &&
     !(VAR_5->hw.flags & VAR_1))
  VAR_5->hw.flags |= VAR_2;

 return VAR_7;
}
