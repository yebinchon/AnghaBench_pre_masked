
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ddc; } ;
struct intel_dp {TYPE_1__ aux; struct intel_connector* attached_connector; } ;
struct intel_connector {int base; scalar_t__ edid; } ;
struct edid {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct edid* FUNC_1 (scalar_t__) ;
 struct edid* FUNC_2 (int *,int *) ;

__attribute__((used)) static struct edid *
FUNC_3(struct intel_dp *VAR_0)
{
 struct intel_connector *VAR_1 = VAR_0->attached_connector;


 if (VAR_1->edid) {

  if (FUNC_0(VAR_1->edid))
   return ((void*)0);

  return FUNC_1(VAR_1->edid);
 } else
  return FUNC_2(&VAR_1->base,
        &VAR_0->aux.ddc);
}
