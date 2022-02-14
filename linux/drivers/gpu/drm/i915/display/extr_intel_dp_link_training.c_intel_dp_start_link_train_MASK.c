
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int lane_count; int link_rate; struct intel_connector* attached_connector; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int name; TYPE_2__ base; } ;
struct intel_connector {int modeset_retry_work; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct intel_dp*,int ,int ) ;
 int FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct intel_dp *VAR_0)
{
 struct intel_connector *VAR_1 = VAR_0->attached_connector;

 if (!FUNC_3(VAR_0))
  goto failure_handling;
 if (!FUNC_2(VAR_0))
  goto failure_handling;

 FUNC_0("[CONNECTOR:%d:%s] Link Training Passed at Link Rate = %d, Lane count = %d",
        VAR_1->base.base.id,
        VAR_1->base.name,
        VAR_0->link_rate, VAR_0->lane_count);
 return;

 failure_handling:
 FUNC_0("[CONNECTOR:%d:%s] Link Training failed at link rate = %d, lane count = %d",
        VAR_1->base.base.id,
        VAR_1->base.name,
        VAR_0->link_rate, VAR_0->lane_count);
 if (!FUNC_1(VAR_0,
           VAR_0->link_rate,
           VAR_0->lane_count))

  FUNC_4(&VAR_1->modeset_retry_work);
 return;
}
