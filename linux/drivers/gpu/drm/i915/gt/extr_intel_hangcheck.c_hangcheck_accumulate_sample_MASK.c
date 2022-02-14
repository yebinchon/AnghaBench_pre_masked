
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ action_timestamp; int instdone; } ;
struct intel_engine_cs {TYPE_1__ hangcheck; } ;
struct hangcheck {int action; void* wedged; void* stalled; int acthd; } ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_engine_cs*,struct hangcheck*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 void* FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_4,
     struct hangcheck *VAR_5)
{
 unsigned long VAR_6 = VAR_0;

 VAR_5->action = FUNC_1(VAR_4, VAR_5);
 switch (VAR_5->action) {
 case 130:
 case 133:

  VAR_5->acthd = 0;

  FUNC_2(&VAR_4->hangcheck.instdone, 0,
         sizeof(VAR_4->hangcheck.instdone));


 case 128:
 case 129:
  VAR_4->hangcheck.action_timestamp = VAR_3;
  break;

 case 134:
 case 132:




  VAR_6 = VAR_2;
  break;

 case 131:
  break;

 default:
  FUNC_0(VAR_5->action);
 }

 VAR_5->stalled = FUNC_3(VAR_3,
     VAR_4->hangcheck.action_timestamp + VAR_6);
 VAR_5->wedged = FUNC_3(VAR_3,
     VAR_4->hangcheck.action_timestamp +
     VAR_1);
}
