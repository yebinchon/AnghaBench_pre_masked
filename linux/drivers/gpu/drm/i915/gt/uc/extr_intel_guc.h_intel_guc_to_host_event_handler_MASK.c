
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int (* handler ) (struct intel_guc*) ;} ;


 int FUNC_0 (struct intel_guc*) ;

__attribute__((used)) static inline void FUNC_1(struct intel_guc *VAR_0)
{
 VAR_0->handler(VAR_0);
}
