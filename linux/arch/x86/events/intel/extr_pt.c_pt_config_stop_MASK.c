
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt {int vmx_on; } ;
struct TYPE_2__ {int config; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 struct pt* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_3)
{
 struct pt *VAR_4 = FUNC_2(&VAR_2);
 u64 VAR_5 = FUNC_0(VAR_3->hw.config);


 if (!(VAR_5 & VAR_1))
  return;

 VAR_5 &= ~VAR_1;
 if (!FUNC_0(VAR_4->vmx_on))
  FUNC_4(VAR_0, VAR_5);

 FUNC_1(VAR_3->hw.config, VAR_5);
 FUNC_3();
}
