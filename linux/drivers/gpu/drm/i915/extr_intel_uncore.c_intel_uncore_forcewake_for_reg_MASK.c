
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_fw_domains ) (struct intel_uncore*,int ) ;int (* write_fw_domains ) (struct intel_uncore*,int ) ;} ;
struct intel_uncore {int fw_domains; TYPE_1__ funcs; } ;
typedef int i915_reg_t ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_uncore*) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ) ;

enum forcewake_domains
FUNC_4(struct intel_uncore *VAR_2,
          i915_reg_t VAR_3, unsigned int VAR_4)
{
 enum forcewake_domains VAR_5 = 0;

 FUNC_0(!VAR_4);

 if (!FUNC_1(VAR_2))
  return 0;

 if (VAR_4 & VAR_0)
  VAR_5 = VAR_2->funcs.read_fw_domains(VAR_2, VAR_3);

 if (VAR_4 & VAR_1)
  VAR_5 |= VAR_2->funcs.write_fw_domains(VAR_2, VAR_3);

 FUNC_0(VAR_5 & ~VAR_2->fw_domains);

 return VAR_5;
}
