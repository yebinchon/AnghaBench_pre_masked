
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmio; int cfg_space; int firmware_loaded; } ;
struct intel_gvt {TYPE_1__ firmware; } ;


 int FUNC_0 (struct intel_gvt*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct intel_gvt *VAR_0)
{
 if (!VAR_0->firmware.firmware_loaded)
  FUNC_0(VAR_0);

 FUNC_1(VAR_0->firmware.cfg_space);
 FUNC_1(VAR_0->firmware.mmio);
}
