
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct hw_perf_event {int dummy; } ;
struct TYPE_5__ {scalar_t__ dear; scalar_t__ tear; int interval; int cd; int ed; int cs; int es; } ;
struct cpu_hw_sf {int flags; TYPE_2__ lsctl; TYPE_1__* event; int sfb; } ;
struct TYPE_6__ {int lpp; } ;
struct TYPE_4__ {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (struct hw_perf_event*) ;
 int FUNC_1 (struct hw_perf_event*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ,int,char*,int ,int ,int ,int ,int ,void*,void*) ;
 int FUNC_4 (int *,struct hw_perf_event*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (struct cpu_hw_sf*,struct hw_perf_event*) ;
 scalar_t__ FUNC_9 (int *,struct hw_perf_event*) ;
 int VAR_4 ;
 struct cpu_hw_sf* FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pmu *VAR_5)
{
 struct cpu_hw_sf *VAR_6 = FUNC_10(&VAR_3);
 struct hw_perf_event *VAR_7;
 int VAR_8;

 if (VAR_6->flags & VAR_0)
  return;

 if (VAR_6->flags & VAR_1)
  return;
 if (VAR_6->event) {
  VAR_7 = &VAR_6->event->hw;
  if (!(FUNC_0(VAR_7))) {




   FUNC_8(VAR_6, VAR_7);
   if (FUNC_9(&VAR_6->sfb, VAR_7))
    FUNC_4(&VAR_6->sfb, VAR_7);
  }

  VAR_6->lsctl.interval = FUNC_1(&VAR_6->event->hw);
 }


 VAR_6->flags |= VAR_0;
 FUNC_2();

 VAR_8 = FUNC_6(&VAR_6->lsctl);
 if (VAR_8) {
  VAR_6->flags &= ~VAR_0;
  FUNC_7("Loading sampling controls failed: op=%i err=%i\n",
   1, VAR_8);
  return;
 }


 FUNC_5(&VAR_2.lpp);

 FUNC_3(VAR_4, 6, "pmu_enable: es=%i cs=%i ed=%i cd=%i "
       "interval:%lx tear=%p dear=%p\n",
       VAR_6->lsctl.es, VAR_6->lsctl.cs, VAR_6->lsctl.ed,
       VAR_6->lsctl.cd, VAR_6->lsctl.interval,
       (void *) VAR_6->lsctl.tear,
       (void *) VAR_6->lsctl.dear);
}
