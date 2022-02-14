
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct perf_event* event; } ;
struct pt {TYPE_3__ handle; int vmx_on; } ;
struct TYPE_4__ {int config; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_5__ {scalar_t__ vmx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 struct pt* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(int VAR_4)
{
 struct pt *VAR_5 = FUNC_4(&VAR_2);
 struct perf_event *VAR_6;
 unsigned long VAR_7;


 if (VAR_3.vmx)
  return;







 FUNC_2(VAR_7);
 FUNC_0(VAR_5->vmx_on, VAR_4);





 VAR_6 = VAR_5->handle.event;
 if (VAR_6)
  FUNC_3(&VAR_5->handle,
                       VAR_1);


 if (!VAR_4 && VAR_6)
  FUNC_5(VAR_0, VAR_6->hw.config);

 FUNC_1(VAR_7);
}
