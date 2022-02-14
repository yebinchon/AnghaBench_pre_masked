
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int state; } ;
struct perf_event {int pmu; TYPE_3__ hw; } ;
struct TYPE_7__ {int h; unsigned long tear; unsigned long dear; int es; int ed; int interval; scalar_t__ s; } ;
struct TYPE_6__ {scalar_t__ sdbt; } ;
struct cpu_hw_sf {int flags; struct perf_event* event; TYPE_2__ lsctl; int handle; TYPE_1__ sfb; } ;
struct aux_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct aux_buffer*,struct cpu_hw_sf*) ;
 int VAR_7 ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 struct aux_buffer* FUNC_6 (int *,struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct cpu_hw_sf* FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct perf_event *VAR_8, int VAR_9)
{
 struct cpu_hw_sf *VAR_10 = FUNC_10(&VAR_7);
 struct aux_buffer *VAR_11;
 int VAR_12;

 if (VAR_10->flags & VAR_6)
  return -VAR_0;

 if (!FUNC_0(&VAR_8->hw) && !VAR_10->sfb.sdbt)
  return -VAR_1;

 VAR_12 = 0;
 FUNC_8(VAR_8->pmu);

 VAR_8->hw.state = VAR_5 | VAR_4;






 VAR_10->lsctl.s = 0;
 VAR_10->lsctl.h = 1;
 VAR_10->lsctl.interval = FUNC_1(&VAR_8->hw);
 if (!FUNC_0(&VAR_8->hw)) {
  VAR_10->lsctl.tear = (unsigned long) VAR_10->sfb.sdbt;
  VAR_10->lsctl.dear = *(unsigned long *) VAR_10->sfb.sdbt;
  FUNC_5(&VAR_8->hw, VAR_10->sfb.sdbt);
 }



 if (FUNC_2(VAR_10->lsctl.es == 1 || VAR_10->lsctl.ed == 1)) {
  VAR_12 = -VAR_0;
  goto out;
 }
 if (FUNC_0(&VAR_8->hw)) {
  VAR_11 = FUNC_6(&VAR_10->handle, VAR_8);
  if (!VAR_11) {
   VAR_12 = -VAR_1;
   goto out;
  }
  VAR_12 = FUNC_3(&VAR_10->handle, VAR_11, VAR_10);
  if (VAR_12)
   goto out;
  VAR_10->lsctl.ed = 1;
 }
 VAR_10->lsctl.es = 1;


 VAR_10->event = VAR_8;
 VAR_10->flags |= VAR_6;

 if (VAR_9 & VAR_3)
  FUNC_4(VAR_8, VAR_2);
out:
 FUNC_7(VAR_8);
 FUNC_9(VAR_8->pmu);
 return VAR_12;
}
