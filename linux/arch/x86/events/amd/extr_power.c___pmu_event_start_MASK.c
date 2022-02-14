
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int pwr_acc; int ptsc; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_3)
{
 if (FUNC_0(!(VAR_3->hw.state & VAR_2)))
  return;

 VAR_3->hw.state = 0;

 FUNC_1(VAR_1, VAR_3->hw.ptsc);
 FUNC_1(VAR_0, VAR_3->hw.pwr_acc);
}
