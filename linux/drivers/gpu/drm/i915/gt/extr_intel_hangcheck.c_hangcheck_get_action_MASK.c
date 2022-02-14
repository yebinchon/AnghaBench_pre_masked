
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ last_ring; scalar_t__ last_head; } ;
struct intel_engine_cs {TYPE_1__ hangcheck; } ;
struct hangcheck {scalar_t__ ring; scalar_t__ head; int acthd; } ;
typedef enum intel_engine_hangcheck_action { ____Placeholder_intel_engine_hangcheck_action } intel_engine_hangcheck_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_engine_cs*,int ) ;
 scalar_t__ FUNC_1 (struct intel_engine_cs*) ;

__attribute__((used)) static enum intel_engine_hangcheck_action
FUNC_2(struct intel_engine_cs *VAR_2,
       const struct hangcheck *VAR_3)
{
 if (FUNC_1(VAR_2))
  return VAR_1;

 if (VAR_2->hangcheck.last_ring != VAR_3->ring)
  return VAR_0;

 if (VAR_2->hangcheck.last_head != VAR_3->head)
  return VAR_0;

 return FUNC_0(VAR_2, VAR_3->acthd);
}
