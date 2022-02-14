
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct perf_event {TYPE_2__ hw; } ;
struct die_args {TYPE_4__* regs; int err; } ;
struct TYPE_8__ {unsigned long debugreg6; } ;
struct TYPE_10__ {TYPE_3__ thread; } ;
struct TYPE_9__ {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (int) ;
 struct perf_event* FUNC_4 (int ,int) ;
 int FUNC_5 (struct perf_event*,TYPE_4__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long,int) ;

__attribute__((used)) static int FUNC_10(struct die_args *VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = VAR_5;
 struct perf_event *VAR_14;
 unsigned long VAR_15, VAR_16;
 unsigned long *VAR_17;


 VAR_17 = (unsigned long *)FUNC_0(VAR_10->err);
 VAR_16 = *VAR_17;


 if (VAR_16 & VAR_0)
  return VAR_4;


 if ((VAR_16 & VAR_2) == 0)
  return VAR_4;

 FUNC_2(VAR_15, 7);

 FUNC_9(0UL, 7);





 VAR_9->thread.debugreg6 &= ~VAR_2;
 VAR_12 = FUNC_1();


 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
  if (FUNC_3(!(VAR_16 & (VAR_1 << VAR_11))))
   continue;







  FUNC_7();

  VAR_14 = FUNC_4(VAR_8[VAR_11], VAR_12);




  (*VAR_17) &= ~(VAR_1 << VAR_11);




  if (!VAR_14) {
   FUNC_8();
   break;
  }

  FUNC_5(VAR_14, VAR_10->regs);





  if (VAR_14->hw.info.type == VAR_6)
   VAR_10->regs->flags |= VAR_7;

  FUNC_8();
 }





 if ((VAR_9->thread.debugreg6 & VAR_2) ||
     (VAR_16 & (~VAR_2)))
  VAR_13 = VAR_4;

 FUNC_9(VAR_15, 7);
 FUNC_6();

 return VAR_13;
}
