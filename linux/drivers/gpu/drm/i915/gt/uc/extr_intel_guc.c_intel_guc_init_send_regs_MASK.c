
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int count; int fw_domains; void* base; } ;
struct intel_guc {TYPE_1__ send_regs; } ;
struct intel_gt {int uncore; int i915; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct intel_guc*,unsigned int) ;
 struct intel_gt* FUNC_5 (struct intel_guc*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;

void FUNC_8(struct intel_guc *VAR_5)
{
 struct intel_gt *VAR_6 = FUNC_5(VAR_5);
 enum forcewake_domains VAR_7 = 0;
 unsigned int VAR_8;

 if (FUNC_2(VAR_6->i915) >= 11) {
  VAR_5->send_regs.base =
    FUNC_6(FUNC_1(0));
  VAR_5->send_regs.count = VAR_2;
 } else {
  VAR_5->send_regs.base = FUNC_6(FUNC_3(0));
  VAR_5->send_regs.count = VAR_3;
  FUNC_0(VAR_3 > VAR_4);
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->send_regs.count; VAR_8++) {
  VAR_7 |= FUNC_7(VAR_6->uncore,
     FUNC_4(VAR_5, VAR_8),
     VAR_0 | VAR_1);
 }
 VAR_5->send_regs.fw_domains = VAR_7;
}
