
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {scalar_t__ can_mst; } ;
struct TYPE_2__ {scalar_t__ enable_dp_mst; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_dp*) ;

__attribute__((used)) static bool
FUNC_1(struct intel_dp *VAR_1)
{
 return VAR_0.enable_dp_mst &&
  VAR_1->can_mst &&
  FUNC_0(VAR_1);
}
