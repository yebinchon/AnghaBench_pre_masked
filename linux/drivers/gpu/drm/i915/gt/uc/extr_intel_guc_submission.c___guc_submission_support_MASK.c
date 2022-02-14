
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc {int dummy; } ;
struct TYPE_2__ {int enable_guc; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct intel_guc*) ;

__attribute__((used)) static bool FUNC_1(struct intel_guc *VAR_2)
{

 return 0;

 if (!FUNC_0(VAR_2))
  return 0;

 return VAR_1.enable_guc & VAR_0;
}
