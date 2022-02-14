
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int force_wake_get; } ;
struct intel_uncore {int fw_domains_active; TYPE_1__ funcs; } ;


 int FUNC_0 (int ,char*,int ) ;

void FUNC_1(struct intel_uncore *VAR_0)
{
 if (!VAR_0->funcs.force_wake_get)
  return;

 FUNC_0(VAR_0->fw_domains_active,
      "Expected all fw_domains to be inactive, but %08x are still on\n",
      VAR_0->fw_domains_active);
}
