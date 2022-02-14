
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* enable ) (struct intel_guc*) ;} ;
struct intel_guc {TYPE_1__ interrupts; } ;


 int FUNC_0 (struct intel_guc*) ;

__attribute__((used)) static void FUNC_1(struct intel_guc *VAR_0)
{
 VAR_0->interrupts.enable(VAR_0);
}
