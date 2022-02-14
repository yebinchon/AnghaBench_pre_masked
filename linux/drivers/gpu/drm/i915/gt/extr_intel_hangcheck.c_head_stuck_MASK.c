
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ acthd; int instdone; } ;
struct intel_engine_cs {TYPE_1__ hangcheck; } ;
typedef enum intel_engine_hangcheck_action { ____Placeholder_intel_engine_hangcheck_action } intel_engine_hangcheck_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct intel_engine_cs*) ;

__attribute__((used)) static enum intel_engine_hangcheck_action
FUNC_2(struct intel_engine_cs *VAR_3, u64 VAR_4)
{
 if (VAR_4 != VAR_3->hangcheck.acthd) {


  FUNC_0(&VAR_3->hangcheck.instdone, 0,
         sizeof(VAR_3->hangcheck.instdone));

  return VAR_0;
 }

 if (!FUNC_1(VAR_3))
  return VAR_1;

 return VAR_2;
}
